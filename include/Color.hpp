//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_COLOR_HPP
#define OOP_COLOR_HPP

struct color {
private:
    std::string end = "\033[0m";
public:
    enum ColorType {
        RED,
        BLUE,
        YELLO,
        END
    };

    std::string TextWithColorAndBraces(std::string text, ColorType color) {
        switch (color) {
            case RED:
                return "[\033[1;31m" + text + end + "]";
            case BLUE:
                return "[\033[1;34m" + text + end + "]";
            case YELLO:
                return "[\033[1;33m" + text + end + "]";
        }

    }


};

#endif //OOP_COLOR_HPP
