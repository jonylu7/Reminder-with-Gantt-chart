//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_BASICREMINDOBJECT_HPP
#define OOP_BASICREMINDOBJECT_HPP

#include "RemindObject.hpp"
#include "Color.hpp"
#include "IsRemindable.hpp"

class BasicRemindObject : public IsRemindable {
private:
    ReminderObject object;
    color color;
public:
    BasicRemindObject() : object() {};

    BasicRemindObject(ReminderObject rm) : object(rm) {};

    ~BasicRemindObject() {};

    std::string getReminderObjectName() override {
        return object.getName();
    }

    std::string getReminderObjectCheckedStatus() override {
        if (object.getChecked() == true) {
            return color.TextWithColorAndBraces("DONE", color.yello);
        } else {
            return color.TextWithColorAndBraces("UNDONE", color.blue);
        }

    };

    void setChecked() override {
        object.setChecked();
    };

};


#endif //OOP_BASICREMINDOBJECT_HPP
