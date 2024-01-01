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

class GanttProject : public IsRemindable {
private:
    DoubleLinkedList<GanttObject> DLL;
public:
    GanttProject() : DLL() {};

    GanttProject(std::vector<GanttObject> ganttobject) : DLL(ganttobject) {};

    ~GanttProject() {};

    bool getReminderObjectChecked() override {
        DLLNode node = DLL.getNow();
        return node.getValue().getChecked();
    }

    std::string getReminderObjectName() override {
        DLLNode node = DLL.getNow();
        return node.getValue().getName();
    }
};

#endif //OOP_GANTTPROJECT_HPP
