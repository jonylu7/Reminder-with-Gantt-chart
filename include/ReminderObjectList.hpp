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
    std::vector<std::shared_ptr<ReminderObject>> RList;
public:
    ReminderObjectList() : RList() {};

    ReminderObjectList(ReminderObject rm) : RList() { append(std::make_shared<ReminderObject>(rm)); };

    ~ReminderObjectList() {};


    void append(std::shared_ptr<ReminderObject> obj) {
        RList.push_back(obj);
    };

    void popReminderListByName(std::string name);

    int getReminderListSize() { return RList.size(); };

    std::shared_ptr<ReminderObject> getReminderListByName(std::string name);

    std::shared_ptr<ReminderObject> getReminderListByIndex(int index) { return RList[index]; };

};


#endif //OOP_REMINDEROBJECTLIST_HPP
