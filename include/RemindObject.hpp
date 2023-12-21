//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDOBJECT_HPP
#define OOP_REMINDOBJECT_HPP
#include <string>
#include <Date.hpp>
class ReminderObject:public Date{
private:
bool checked;
std::string description;
Date date;
public:
    ReminderObject():date(),checked(false),description("None"){};
    ReminderObject(bool checked):checked(checked),date(),description("None"){};
ReminderObject(int year,int month,int day):date(year,month,day),checked(false),description("None"){};
~ReminderObject(){};

bool getChecked(){return this->checked;};
void setChecked(){this->checked=checked;};
std::string getDespcription(){return this->description;};


};
#endif //OOP_REMINDOBJECT_HPP
