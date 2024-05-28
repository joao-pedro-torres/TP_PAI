#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <QApplication>
#include <QPixmap>
#include <QImage>
#include <QFileInfo>
#include <gui.h>

#include <fstream>
#include <filesystem>

// generate grayscale QPixmap image
QPixmap cvt_image_grayscale(QString img_path) {
    // convert img_path from QString to sdt::string
    std::string img_path_std = img_path.toStdString();
    cv::Mat orig_img = cv::imread(img_path_std, cv::IMREAD_UNCHANGED);

    cv::Mat gray_img;
    cv::cvtColor(orig_img, gray_img, cv::COLOR_BGR2GRAY);
    QImage conv_img(
        gray_img.data, gray_img.cols, gray_img.rows,
        gray_img.step, QImage::Format_Grayscale8
    );

    return QPixmap::fromImage(conv_img);
}

////// what do the variables histsize, histrange and binwidth mean in the folowing function?
// generate grayscale QPixmap histogram
QPixmap genGrayscaleHistogram(const QString img_path, int width, int height) {
    // convert QString to std::string
    std::string img_path_std = img_path.toStdString();

    // load the image
    cv::Mat image = cv::imread(img_path_std, cv::IMREAD_GRAYSCALE);
    if (image.empty())
        throw std::runtime_error("Could not open or find the image");

    // calculate histogram
    int histSize = 16;
    float range[] = { 0, 256 };
    const float* histRange = { range };
    cv::Mat histogram;

    // calculate the histogram
    cv::calcHist(
        &image, 1, 0, cv::Mat(), histogram, 1,
        &histSize, &histRange, true, false
    );

    // generate image for histogram
    int histWidth = width;
    int histHeight = height;
    int binWidth = cvRound((double)histWidth / histSize);

    cv::Mat histImage(
        histHeight + 5 , histWidth, CV_8UC3, cv::Scalar(255, 255, 255)
    );

    cv::normalize(
        histogram, histogram, 0, histImage.rows,
        cv::NORM_MINMAX, -1, cv::Mat()
    );

    // draw the histogram
    for(int i = 1; i < histSize; i++) cv::line(
        histImage, cv::Point(
            binWidth * (i - 1),
            histHeight - cvRound(histogram.at<float>(i - 1))
        ), cv::Point(
            binWidth * (i), histHeight - cvRound(histogram.at<float>(i))
        ), cv::Scalar(0, 0, 0), 2, 8, 0
    );

    // convert the histogram image to QImage
    QImage conv_img(
        histImage.data, histImage.cols, histImage.rows,
        histImage.step, QImage::Format_RGB888
    );

    // convert QImage to QPixmap
    return QPixmap::fromImage(conv_img);
}

// generate HSV QPixmap histogram
QPixmap genHSVHistogram(const QString img_path, int width, int height) {
    // convert QString to std::string
    std::string img_path_std = img_path.toStdString();

    // load the image
    cv::Mat bgrImage = cv::imread(img_path_std);
    if (bgrImage.empty())
        throw std::runtime_error("Could not open or find the image");

    // convert BGR image to HSV
    cv::Mat hsvImage;
    cv::cvtColor(bgrImage, hsvImage, cv::COLOR_BGR2HSV);

    // calculate histogram
    int h_bins = 16;
    int v_bins = 8;
    int histSize[] = { h_bins, v_bins };
    float h_ranges[] = { 0, 180 };
    float v_ranges[] = { 0, 256 };
    const float* ranges[] = { h_ranges, v_ranges };
    int channels[] = { 0, 2 }; // H channel and V channel

    // generate image for histogram
    cv::Mat hist;
    cv::calcHist(
        &hsvImage, 1, channels, cv::Mat(), hist,
        2, histSize, ranges, true, false
    );

    // normalize the histogram
    cv::normalize(hist, hist, 0, 255, cv::NORM_MINMAX, -1, cv::Mat());

    // create histogram image
    int histWidth = width;
    int histHeight = height;
    int binWidthH = cvRound((double)histWidth / h_bins);
    int binWidthV = cvRound((double)histHeight / v_bins);

    cv::Mat histImage(
        histHeight, histWidth, CV_8UC3, cv::Scalar(255, 255, 255)
    );

    // draw histogram
    for(int h = 0; h < h_bins; ++h) for(int v = 0; v < v_bins; ++v) {
        float bin_val = hist.at<float>(h, v);
        // int intensity = cvRound(bin_val * histHeight / 255);
        cv::rectangle(
            histImage, cv::Point(binWidthH * h, histHeight - binWidthV * v),
            cv::Point(binWidthH * (h + 1), histHeight - binWidthV * (v + 1)),
            cv::Scalar::all(bin_val), -1
        );
    }

    // convert the histogram image to QImage
    QImage conv_img(
        histImage.data, histImage.cols, histImage.rows,
        histImage.step, QImage::Format_RGB888
    );

    // convert QImage to QPixmap
    return QPixmap::fromImage(conv_img);
}

// Function to reduce the number of gray levels in the image
cv::Mat reduceGrayLevels(const cv::Mat& img, int levels) {
    cv::Mat reduced;
    float scale = 256.0f / levels;
    img.convertTo(reduced, CV_8U, 1.0 / scale); // Scale the image
    return reduced * scale; // Undo scaling
}

// Function to compute the co-occurrence matrix for a given distance
cv::Mat computeCoOccurrenceMatrix(const cv::Mat& img, int distance) {
    cv::Mat coOccurrenceMatrix = cv::Mat::zeros(16, 16, CV_32S);

    int limit = img.cols - distance;
    for(int y = 0; y < img.rows; ++y) for(int x = 0; x < limit; ++x) {
        int g1 = img.at<uchar>(y, x) / (256 / 16);
        int g2 = img.at<uchar>(y, x + distance) / (256 / 16);
        coOccurrenceMatrix.at<int>(g1, g2)++;
    }

    return coOccurrenceMatrix;
}

// Function to convert a co-occurrence matrix to a QPixmap for visualization
QPixmap matToQPixmap(const cv::Mat& mat) {
    double min, max;
    cv::minMaxLoc(mat, &min, &max);
    cv::Mat normMat;
    mat.convertTo(normMat, CV_8U, 255.0 / max);

    QImage img(
        (const uchar*)normMat.data, normMat.cols,
        normMat.rows, normMat.step, QImage::Format_Grayscale8
    );

    return QPixmap::fromImage(img);
}

// std::vector<QPixmap> genCoOccurrenceMatrices(
std::vector<cv::Mat> genCoOccurrenceMatrices(
    const QString& img_path, const std::vector<int>& distances
) {
    // std::vector<QPixmap> result;
    std::vector<cv::Mat> result;

    // Load the image
    cv::Mat img = cv::imread(img_path.toStdString(), cv::IMREAD_GRAYSCALE);
    if (img.empty()) {
        std::cerr << "Error: Could not load image " << img_path.toStdString() << std::endl;
        return result;
    }

    // Reduce the number of gray levels to 16
    cv::Mat reducedImg = reduceGrayLevels(img, 16);

    // Generate the co-occurrence matrices
    for (int distance : distances) {
        cv::Mat coOccurrenceMatrix = computeCoOccurrenceMatrix(reducedImg, distance);
        result.push_back(/*matToQPixmap(*/coOccurrenceMatrix)/*)*/;
    }

    return result;
}

// function to calculate the entropy
double calculateEntropy(const cv::Mat& coMatrix) {
    double entropy = 0.0;

    int size = coMatrix.rows;
    for(int i = 0; i < size; ++i) for(int j = 0; j < size; ++j) {
        uchar value = coMatrix.at<uchar>(i, j);
        if (value > 0) {
            entropy -= value * std::log2(value);
        }
    }

    return entropy;
}

// function to calculate homogeneity
double calculateHomogeneity(const cv::Mat& coMatrix) {
    double homogeneity = 0.0;

    int size = coMatrix.rows;
    for(int i = 0; i < size; ++i) for(int j = 0; j < size; ++j) {
        homogeneity += coMatrix.at<uchar>(i, j) / (1.0 + std::abs(i - j));
    }

    return homogeneity;
}

// function to calculate contrast
double calculateContrast(const cv::Mat& coMatrix) {
    double contrast = 0.0;

    int size = coMatrix.rows;
    for(int i = 0; i < size; ++i) for(int j = 0; j < size; ++j)
        contrast += (i - j) * (i - j) * coMatrix.at<uchar>(i, j);

    return contrast;
}

// function to calculate the Hu moments for one channel
std::vector<double> calculateHuMoments(const QImage& image) {
    cv::Mat mat(
        image.height(), image.width(), CV_8UC1,
        const_cast<uchar*>(image.bits()),
        image.bytesPerLine()
    );

    // Calculate moments
    cv::Moments moments = cv::moments(mat, false);
    double huMoments[7];
    cv::HuMoments(moments, huMoments);

    // Store Hu moments in a vector
    std::vector<double> huMomentsVec;
    for(size_t i = 0; i < 7; ++i) huMomentsVec.push_back(huMoments[i]);

    return huMomentsVec;
}

// function to calculate Hu moments for each channel of the original HSV image
std::vector<std::vector<double>> calculateHuMomentsHSV(const QImage& image) {
    cv::Mat mat(
        image.height(), image.width(), CV_8UC4,
        const_cast<uchar*>(image.bits()),
        image.bytesPerLine()
    );
    cv::cvtColor(mat, mat, cv::COLOR_RGBA2RGB);
    cv::cvtColor(mat, mat, cv::COLOR_RGB2HSV);

    std::vector<cv::Mat> channels;
    cv::split(mat, channels);

    std::vector<std::vector<double>> huMomentsHSV;
    for (int i = 0; i < 3; ++i) {
        std::vector<double> huMoments = calculateHuMoments(QImage(
            channels[i].data, channels[i].cols, channels[i].rows,
            channels[i].step, QImage::Format_Grayscale8)
        );
        huMomentsHSV.push_back(huMoments);
    }

    return huMomentsHSV;
}

// // Function to calculate the Hu moments for one channel
// std::vector<double> calculateHuMoments(const cv::Mat& mat) {
//     // Calculate moments
//     cv::Moments moments = cv::moments(mat, false);
//     double huMoments[7];
//     cv::HuMoments(moments, huMoments);

//     // Store Hu moments in a vector
//     std::vector<double> huMomentsVec;
//     for (size_t i = 0; i < 7; ++i) huMomentsVec.push_back(huMoments[i]);

//     return huMomentsVec;
// }

// // Function to calculate Hu moments for each channel of the original HSV image
// std::vector<std::vector<double>> calculateHuMomentsHSV(const QImage& image) {
//     // Convert QImage to cv::Mat
//     cv::Mat mat(
//         image.height(), image.width(), CV_8UC4,
//         const_cast<uchar*>(image.bits()),
//         image.bytesPerLine()
//     );

//     if(image.isNull()) std::cout << "deu bixiu" << std::endl;

//     // Convert RGBA to RGB
//     cv::Mat rgbMat;
//     cv::cvtColor(mat, rgbMat, cv::COLOR_RGBA2RGB);

//     // Convert RGB to HSV
//     cv::Mat hsvMat;
//     cv::cvtColor(rgbMat, hsvMat, cv::COLOR_RGB2HSV);

//     // Split HSV into channels
//     std::vector<cv::Mat> channels;
//     cv::split(hsvMat, channels);

//     std::vector<std::vector<double>> huMomentsHSV;
//     for (int i = 0; i < 3; ++i) {
//         // Calculate Hu moments for each channel
//         std::vector<double> huMoments = calculateHuMoments(channels[i]);
//         huMomentsHSV.push_back(huMoments);
//     }

//     return huMomentsHSV;
// }

void printCSVImage(
    std::vector<CSV_Image> images, int numImages, const std::string& filename
) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file: " << filename << std::endl;
        return;
    }

    // Print header
    file << "Image ID,Path,Number of Cells,Cell ID,X Coord,Y Coord" << std::endl;

    // Print data
    for (int i = 0; i < numImages; ++i) {
        const CSV_Image& image = images[i];
        for (int j = 0; j < image.n_cells; ++j) {
            const Cell_Nucleus cell = image.list_of_nucleus[j];
            file << image.id << "," << image.path
            << "," << image.n_cells << ",";

            file << cell.id << "," << cell.x_coord
            << "," << cell.y_coord << std::endl;
        }
    }

    file.close();
}

// extract cells nucleus and store them in folders
std::vector<std::string> extractNucleus(
    std::string dataset, std::string work_dir,
    std::vector<CSV_Image>& images, std::vector<QString>& labels
) {
    std::vector<std::string> not_loaded;
    std::set<QString> labels_set;

    // create father directory if it doesn't exisit
    std::filesystem::create_directory(work_dir);
    for(size_t i = 0; i < images.size(); i++) {
        CSV_Image image = images[i];
        std::string src_img_path = dataset + "/" + image.path;

        if(QFileInfo::exists(QString::fromStdString(src_img_path)))
        try {
            cv::Mat src_img = cv::imread(src_img_path);
            for(size_t j = 0; j < image.list_of_nucleus.size(); j++) {
                Cell_Nucleus nucleo = image.list_of_nucleus[j];

                // get the nucleus coordenates
                int x = nucleo.x_coord;
                int y = nucleo.y_coord;

                // create label directory if it doesn't exisit
                std::string cutted_dir = work_dir + "/" + nucleo.b_system;
                std::filesystem::create_directory(cutted_dir);

                // generate an image in 100x100 by cutting around the nucleus
                std::string nucleo_path =
                    cutted_dir + "/" + std::to_string(nucleo.id) + ".png";
                if(!src_img.empty()) {
                    // save encountered label
                    labels_set.insert(QString::fromStdString(nucleo.b_system));

                    // get the region of interest image
                    cv::Point center(x, y);
                    cv::Rect interest_region(
                        center.x - 50, center.y - 50, 100, 100
                    );
                    cv::Mat cropped = src_img(interest_region).clone();

                    // store the cutted image in work_dir/imageId/nucleoId.png
                    imwrite(nucleo_path, cropped);
                    cv::waitKey(0);
                } else break;
            }
        } catch(...) {  }
        else {
            not_loaded.push_back(src_img_path);
            images.erase(images.begin() + i);
        }
    }

    // export encountered labels
    for(const QString& label : labels_set) labels.push_back(label);
    return not_loaded;
}
