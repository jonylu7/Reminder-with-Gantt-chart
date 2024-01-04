//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_GANTTOBJECT_HPP
#define OOP_GANTTOBJECT_HPP

#include "RemindObject.hpp"
#include <Date.hpp>
#include <vector>

class GanttObject {
private:
    ReminderObject Ro;
public:
    GanttObject() {};

    GanttObject(ReminderObject rm) : Ro(rm) {};

    GanttObject(std::string name, bool checked, std::string description, Date date) : Ro(name, checked, description,
                                                                                         date) {};

    ~GanttObject() {};


};

#endif //OOP_GANTTOBJECT_HPP
