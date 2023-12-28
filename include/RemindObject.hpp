//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDOBJECT_HPP
#define OOP_REMINDOBJECT_HPP
#include <string>
#include <Date.hpp>
class ReminderObject:public Date{
private:
std::string name;
bool checked;
std::string description;
Date date;
public:
    ReminderObject(std::string name,bool checked,std::string descriptipn,Date date):name(name),checked(checked),description(descriptipn),Date(date){};
    ReminderObject(): ReminderObject("default", false,"default descrption",Date()){};
~ReminderObject(){};

bool getChecked(){return this->checked;}
void setChecked(){this->checked=checked;}
std::string getNmae(){return this->name;}
std::string getDespcription(){return this->description;}
Date getDate(){return this->date;}



};
#endif //OOP_REMINDOBJECT_HPP
