//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDOBJECT_HPP
#define OOP_REMINDOBJECT_HPP

#include <string>
#include "IsRemindable.hpp"
#include <Date.hpp>
#include "color.hpp"

class ReminderObject : public IsRemindable {
private:
    color color;
    std::string name;
    bool checked;
    std::string description;
    Date createdDate;
    Date dueDate;
public:

    ReminderObject(std::string name, bool checked, std::string descriptipn, Date createdDate) : name(name),
                                                                                                checked(checked),
                                                                                                description(
                                                                                                        descriptipn),
                                                                                                createdDate(
                                                                                                        createdDate) {};

    ReminderObject() : name("default"), checked(false), description("default descrption"), createdDate(), dueDate() {};

    ~ReminderObject() {};

    bool getChecked() { return this->checked; }

    void setChecked() override { this->checked = true; }

    std::string getReminderObjectName() override { return this->name; }

    std::string getReminderObjectCheckedStatus() override {
        if (this->getChecked() == true) {
            return color.TextWithColorAndBraces("DONE", color::YELLO);
        } else {
            return color.TextWithColorAndBraces("UNDONE", color::BLUE);
        }
    };

    void setName(std::string name) { this->name = name; }

    std::string getDespcription() { return this->description; }

    std::string setDescription(std::string description) { this->description = description; }

    Date getcreatedDate() { return this->createdDate; }


    Date getdueDate() { return this->dueDate; }


};

#endif //OOP_REMINDOBJECT_HPP
