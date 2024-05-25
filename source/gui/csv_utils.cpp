#include <fstream>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <iostream>
#include <QApplication>
#include <QPixmap>
#include <QMessageBox>

/**
 * @brief Class to read and manipulate CSV files in memory
*/
class CSV {
private:
    char delimiter;
    std::vector<std::vector<std::string>> data;
    std::vector<std::string> header;
    size_t n_col;
    size_t n_row;

public:
    /**
   * @brief default constructor
   *
   * @param file [QString&] csv file path
   * @param delimiter [char] csv delimiter character
   *
   * @throw [std::runtime_error] when unable to open file
    **/
    CSV(const QString& file, char delimiter = ',') : delimiter(delimiter) {
        try {
            readCSV(file.toStdString());
        } catch(std::runtime_error& error) {
            throw error;
        }

        n_col = header.size();
        n_row = data.size();
    }

    /**
   * @brief function to read data from CSV file and return as vector of vectors
   *
   * @param file [std::string&] csv file path
   * @return [int] 0 when succeed
  **/
    int readCSV(const std::string& file) {
        std::ifstream infstream(file);
        if(!infstream.is_open())
            throw std::runtime_error("unable to open file " + file + "\0");

        std::string line;
        std::getline(infstream, line);
        std::stringstream ss(line); // split line on ' '

        // get header content (columns)
        std::string col;
        while(std::getline(ss, col, delimiter)) {
            header.push_back(col);
        }

        // get data content
        while(std::getline(infstream, line)) {
            std::vector<std::string> row;
            std::stringstream ss(line);
            std::string cell;
            while(std::getline(ss, cell, delimiter)) {
                row.push_back(cell);
            }
            data.push_back(row);
        }

        infstream.close();
        return 0;
    }

    /**
   * @brief function to write data to CSV file
   *
   * @param outstream [std::ostream&] out stream where to write the file
   * @return [int] 0 when succeed
  **/
    /*int writeCSV(std::ostream& outstream) {
        for(const auto& i : header) {
            std::cout << i;
            if(&i != &header.back()) // if current index is not the last index
                std::cout << delimiter;
        } std::cout << std::endl;

        for(const auto& i : data) {
            for(const auto& j : i) {
                std::cout << j;
                if(&j != &i.back()) // if current index is not the last index
                    std::cout << delimiter;
            } std::cout << std::endl;
        }

        return 0;
    }*/

    /**
   * @brief function to access specific data cell
   *
   * @param target_row [int] data row number (from 0 to n_row)
   * @param target_col [int] data column number (from 0 to n_col)
   *
   * @throw [std::runtime_error] when row length is exceeded
   * @throw [std::runtime_error] when column length is exceeded
  **/
    std::string getDataCell(size_t target_row, size_t target_col) {
        if(target_row >= n_row) throw std::runtime_error("row length exceeded");
        if(target_col >= n_col) throw std::runtime_error("column length exceeded");
        return data[target_row][target_col];
    }

    /**
   * @brief function to return a block of data
   *
   * @param from [size_t] data row to start assembling the block
   * @param size [size_t] number of rows to include in the block
   * @param [std::runtime_error] when data length is exceeded
  */
    /*std::vector<std::vector<std::string>> getDataBlock(size_t from, size_t size) {
        if(from > n_row)
            throw std::runtime_error("data length exceeded");

        std::vector<std::vector<std::string>> block;
        for(from; from < size && from < n_row; from++)
            block.push_back(data[from]);

        return block;
    }*/

    /**
   * @brief function to return the CSV file header
  **/
    std::vector<std::string>* getHeader() {
        return &header;
    }

    /**
   * @brief function to return the CSV file header
  **/
    std::vector<std::vector<std::string>>* getData() {
        return &data;
    }

    std::vector<std::string> getColumn(int column) {
        std::vector<std::string> answer;

        for(int i = 0; i < getnRow(); i++)
            answer.push_back(data[i][column]);

        return answer;
    }

    std::vector<std::string> getRow(int row) {
        std::vector<std::string> answer;

        for(int i = 0; i < getnRow(); i++)
            answer.push_back(data[row][i]);

        return answer;
    }

    /**
   * @brief function to return the CSV delimiter
  */
    char getDelimiter() {
        return delimiter;
    }

    /**
   * @brief function to return the data number of columns
  **/
    int getnCol() {
        return n_col;
    }

    /**
   * @brief function to return the data number of rows
  **/
    int getnRow() {
        return n_row;
    }

    static int validateCSV(
        const std::string& file, const std::string& dataset_path,
        char delimiter = ','
    ) {
        std::vector<std::string> csv_first_line;
        std::vector<std::string> header;

        if(file.empty() || file == "")
            throw std::runtime_error("CSV file not informed.\0");

        if(dataset_path.empty() || dataset_path == "")
            throw std::runtime_error("Dataset path not informed.\0");

        std::ifstream infstream(file);
        if(!infstream.is_open())
            throw std::runtime_error("Unable to open file " + file + "\0");

        std::string line;
        std::getline(infstream, line);
        std::stringstream ss(line); // split line on ' '

        // get csv_first_line content (columns)
        std::string col;
        while(std::getline(ss, col, delimiter)) {
            header.push_back(col);
        }

        ss.clear(); ss.str("");

        // get csv_first_line content (columns)
        std::getline(infstream, line);
        ss << line;
        while(std::getline(ss, col, delimiter)) {
            csv_first_line.push_back(col);
        }

        size_t valid;

        // verify numeric values
        try {
            std::stoi(csv_first_line[0], &valid);
            if(valid != csv_first_line[0].size()) {
                throw std::runtime_error(
                    "CSV content is not recognizable: column "
                    + std::string(header[0])
                    );}
        } catch(std::invalid_argument err) {
            throw;
        } catch(std::out_of_range err) {
            throw;
        } catch(...) {
            throw;
        }

        try {
            std::stoi(csv_first_line[3], &valid);
            if(valid != csv_first_line[3].size())
                throw std::runtime_error(
                    "CSV content is not recognizable: column "
                    + std::string(header[3])
                );
        } catch(std::invalid_argument err) {
            throw;
        } catch(std::out_of_range err) {
            throw;
        } catch(...) {
            throw;
        }

        try {
            std::stoi(csv_first_line[5], &valid);
            if(valid != csv_first_line[5].size())
                throw std::runtime_error(
                    "CSV content is not recognizable: column "
                    + std::string(header[5])
                );
        } catch(std::invalid_argument err) {
            throw;
        } catch(std::out_of_range err) {
            throw;
        } catch(...) {
            throw;
        }

        try {
            std::stoi(csv_first_line[6], &valid);
            if(valid != csv_first_line[6].size())
                throw std::runtime_error(
                "CSV content is not recognizable: column "
                    + std::string(header[6])
            );
        } catch(std::invalid_argument err) {
            throw;
        } catch(std::out_of_range err) {
            throw;
        } catch(...) {
            throw;
        }

        return 0;
    }

};
