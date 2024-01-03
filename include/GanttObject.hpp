//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_GANTTOBJECT_HPP
#define OOP_GANTTOBJECT_HPP

#include "RemindObject.hpp"
#include <Date.hpp>
#include <vector>

class GanttObject : public ReminderObject {
private:

public:
    GanttObject() {};

    GanttObject(std::string name, bool checked, std::string description, Date date) : ReminderObject(name, checked,
                                                                                                     description,
                                                                                                     date) {};

    ~GanttObject() {};

    GanttObject &operator=(GanttObject ganttObject) {
        return *this;
    }

};

#endif //OOP_GANTTOBJECT_HPP
