//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_BASICREMINDOBJECT_HPP
#define OOP_BASICREMINDOBJECT_HPP

#include "RemindObject.hpp"
#include "IsRemindable.hpp"

class BasicRemindObject : public ReminderObject, public IsRemindable {
private:
public:
    BasicRemindObject() {};

    BasicRemindObject(ReminderObject rm) : ReminderObject(rm) {};

    ~BasicRemindObject() {};

    std::string getReminderObjectName() override {
        return "";
    }

    bool getReminderObjectChecked() override {
        return false;
    };

};


#endif //OOP_BASICREMINDOBJECT_HPP
