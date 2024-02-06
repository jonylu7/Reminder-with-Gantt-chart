//
// Created by 盧威任 on 1/1/24.
//

#ifndef OOP_REMINDEROBJECTLIST_HPP
#define OOP_REMINDEROBJECTLIST_HPP

#include "RemindObject.hpp"
#include "Color.hpp"
#include "IsRemindable.hpp"
#include <memory>
#include <vector>

class ReminderObjectList {
private:
    color color;
    std::string ListName;
    std::vector<std::shared_ptr<ReminderObject>> RList;
public:
    ReminderObjectList() : RList(), ListName("DefaultListName") {};

    ReminderObjectList(ReminderObject rm, std::string name) : RList(), ListName(name) {
        append(std::make_shared<ReminderObject>(rm));
    };

    ReminderObjectList(ReminderObject rm) : RList(), ListName("DefaultListName") {
        append(std::make_shared<ReminderObject>(rm));
    };

    ~ReminderObjectList() {};


    void append(std::shared_ptr<ReminderObject> obj) {
        RList.push_back(obj);
    };

    void popReminderByName(std::string name);

    int getReminderListSize() { return RList.size(); };

    std::shared_ptr<ReminderObject> getReminderByName(std::string name);

    std::shared_ptr<ReminderObject> getReminderByIndex(int index) { return RList[index]; };

    std::string getName() { return this->ListName; };

    void setName(std::string newName) { this->ListName = newName; };

    void printReminderList();

    int getListCheckedSize();

    void checkToppestUnchecked();

};


#endif //OOP_REMINDEROBJECTLIST_HPP
