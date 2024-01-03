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
    LinkedList<GanttObject> DLL;
    color color;
public:
    GanttProject() : DLL() {};

    GanttProject(std::vector<GanttObject> ganttobject) : DLL(ganttobject) {};

    ~GanttProject() {};

    void setChecked() override {
        LLNode<std::shared_ptr<GanttObject>> go = DLL.getNow();
        go.getValue()->setChecked();
        DLL.setNowtoNext();
    };

    std::string getReminderObjectCheckedStatus() override {
//finsiehd, inprogress, undone
        LLNode<std::shared_ptr<GanttObject>> nowObject = DLL.getNow();

        return color.TextWithColorAndBraces("Progress", color.red);
    }

    std::string getReminderObjectName() override {
        return "";
    }
};

#endif //OOP_GANTTPROJECT_HPP
