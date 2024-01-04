//
// Created by 盧威任 on 1/4/24.
//

#include "BasicRemindObject.hpp"

std::string BasicRemindObject::getReminderObjectCheckedStatus() {
    if (object.getChecked() == true) {
        return color.TextWithColorAndBraces("DONE", color.yello);
    } else {
        return color.TextWithColorAndBraces("UNDONE", color.blue);
    }
}