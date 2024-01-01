//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_BASICREMINDOBJECT_HPP
#define OOP_BASICREMINDOBJECT_HPP

#include "RemindObject.hpp"
#include "IsRemindable.hpp"

class BasicRemindObject : public IsRemindable {
private:
    ReminderObject object;
public:
    BasicRemindObject() : object() {};

    BasicRemindObject(ReminderObject rm) : object(rm) {};

    ~BasicRemindObject() {};

    std::string getReminderObjectName() override {
        return object.getName();
    }

    std::string getReminderObjectCheckedStatus() override {
        if (object.getChecked() == true) {
            return "DONE";
        } else {
            return "UNDONE";
        }

    };

};


#endif //OOP_BASICREMINDOBJECT_HPP
