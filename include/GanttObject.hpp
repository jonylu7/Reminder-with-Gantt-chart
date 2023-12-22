//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_GANTTOBJECT_HPP
#define OOP_GANTTOBJECT_HPP
#include "RemindObject.hpp"
#include "DoubleLL.hpp"
#include <vector>
class GanttObject:public ReminderObject,public DoubleLinkedList<GanttObject>{
private:
    DoubleLinkedList<GanttObject> list;
public:
    GanttObject(){};
    GanttObject(std::vector<GanttObject> GanntObject):list(GanntObject){
    };
~GanttObject(){};

};
#endif //OOP_GANTTOBJECT_HPP
