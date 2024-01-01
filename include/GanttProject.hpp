//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_GANTTPROJECT_HPP
#define OOP_GANTTPROJECT_HPP

#include "RemindObject.hpp"
#include "GanttObject.hpp"
#include <vector>
#include "DoubleLinkedList.hpp"
#include "IsRemindable.hpp"
#include "Color.hpp"

class GanttProject : public IsRemindable {
private:
    DoubleLinkedList<GanttObject> DLL;
    color color;
public:
    GanttProject() : DLL() {};

    GanttProject(std::vector<GanttObject> ganttobject) : DLL(ganttobject) {};

    ~GanttProject() {};

    std::string getReminderObjectCheckedStatus() override {

        DLLNode node = DLL.getNow();
        if (node.getValue().getChecked()) {

        }
        return color.red + "[PROGRESS]" + color.end;
    }

    std::string getReminderObjectName() override {
        DLLNode node = DLL.getNow();
        return node.getValue().getName();
    }
};

#endif //OOP_GANTTPROJECT_HPP
