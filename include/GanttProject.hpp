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

    GanttProject(std::vector<GanttObject> ganttobject) : LL(ganttobject) {};

    ~GanttProject() {};

    void setChecked() override {
        LLNode<std::shared_ptr<GanttObject>> go = LL.getNow();
        go.getValue();
        LL.setNowtoNext();
    };

    std::string getReminderObjectCheckedStatus() override {
//finsiehd, inprogress, undone
        LLNode<std::shared_ptr<GanttObject>> nowObject = LL.getNow();
        return color.TextWithColorAndBraces("PROGRESS", color.red);
    }

    std::string getReminderObjectName() override {
        //loop through
        LLNode<std::shared_ptr<GanttObject>> head = this->LL.getHead();
        LLNode<std::shared_ptr<GanttObject>> tail = this->LL.getTail();


    }
};

#endif //OOP_GANTTPROJECT_HPP
