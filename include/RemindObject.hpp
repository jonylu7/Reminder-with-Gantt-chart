//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDOBJECT_HPP
#define OOP_REMINDOBJECT_HPP

#include <string>
#include <Date.hpp>

class ReminderObject : public Date {
private:
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

    void setChecked() { this->checked = checked; }

    std::string getName() { return this->name; }

    std::string getDespcription() { return this->description; }

    Date getcreatedDate() { return this->createdDate; }

    Date getdueDate() { return this->dueDate; }


};

#endif //OOP_REMINDOBJECT_HPP
