//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_COLOR_HPP
#define OOP_COLOR_HPP

struct color {
public:
    std::string red = "\033[1;31m";
    std::string blue = "\033[1;34m";
    std::string yello = "\033[1;33m";
    std::string end = "\033[0m";

    std::string TextWithColorAndBraces(std::string text, std::string color) {
        return "[" + color + text + end + "]";
    }


};

#endif //OOP_COLOR_HPP
