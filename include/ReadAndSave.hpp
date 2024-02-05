//
// Created by 盧威任 on 2/5/24.
//

#ifndef OOP_READANDSAVE_HPP
#define OOP_READANDSAVE_HPP

#include "ReminderObjectList.hpp"
#include <iostream>
#include <fstream>
#include <vector>

struct File {
public:
    void saveToFile(const std::vector<std::shared_ptr<ReminderObjectList>> &data, const std::string &filename) {
        std::ofstream file(filename, std::ios::binary);

        if (file.is_open()) {
            // Write the size of the vector first
            size_t size = data.size();
            file.write(reinterpret_cast<char *>(&size), sizeof(size_t));

            // Write the vector elements
            file.write(reinterpret_cast<const char *>(data.data()), size * sizeof(std::shared_ptr<ReminderObjectList>));

            file.close();
        } else {
            std::cerr << "Error opening file for writing: " << filename << std::endl;
        }
    }

    std::vector<std::shared_ptr<ReminderObjectList>> readFromFile(const std::string &filename) {
        std::ifstream file(filename, std::ios::binary);
        std::vector<std::shared_ptr<ReminderObjectList>> data;

        if (file.is_open()) {
            // Read the size of the vector
            size_t size;
            file.read(reinterpret_cast<char *>(&size), sizeof(size_t));

            // Resize the vector and read the elements
            data.resize(size);
            file.read(reinterpret_cast<char *>(data.data()), size * sizeof(std::shared_ptr<ReminderObjectList>));

            file.close();
        } else {
            std::cerr << "Error opening file for reading: " << filename << std::endl;
        }

        return data;
    }

};


# endif