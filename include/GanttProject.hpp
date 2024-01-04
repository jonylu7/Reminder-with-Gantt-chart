//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_GANTTPROJECT_HPP
#define OOP_GANTTPROJECT_HPP

#include "RemindObject.hpp"
#include "LLNode.hpp"
#include "GanttObject.hpp"
#include <vector>
#include "LinkedList.hpp"
#include "IsRemindable.hpp"
#include "Color.hpp"

class GanttProject : public IsRemindable {
private:
    LinkedList<GanttObject> LL;
    color color;
public:
    GanttProject() : LL() {};

    GanttProject(std::vector<GanttObject> ganttVector) : LL(ganttVector) {};

    ~GanttProject() {};

    void setChecked() override {
    };

    std::string getReminderObjectCheckedStatus() override {
        return color.TextWithColorAndBraces("TEST", color.yello);
    }

    std::string getReminderObjectName() override {
        return "test " + color.TextWithColorAndBraces("3 Remains", color.yello);
    }
};

#endif //OOP_GANTTPROJECT_HPP
