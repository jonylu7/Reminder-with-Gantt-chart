//
// Created by 盧威任 on 1/1/24.
//

#include "RemindSystem.hpp"
#include "GanttProject.hpp"
#include "BasicRemindObject.hpp"
#include "gtest/gtest.h"
#include "Date.hpp"
#include <iostream>


TEST(TestReminderSys, testPushAndPrint) {
    ReminderSystem rsys;
    BasicRemindObject bro1;
    BasicRemindObject bro2;
    rsys.push_back(bro1);
    rsys.push_back(bro2);
    rsys.printAllRemindObject();
}

TEST(TestReminderSys, testPopAndPrint) {
    ReminderSystem rsys;
    BasicRemindObject bro1;
    BasicRemindObject bro2;
    rsys.push_back(bro1);
    rsys.push_back(bro2);
    rsys.pop_back();
    rsys.printAllRemindObject();
    rsys.pop_back();
    rsys.printAllRemindObject();
}


TEST(TestReminderSys, checkedWithNameSuccess) {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    BasicRemindObject bro1(rm);
    BasicRemindObject bro2;

    rsys.push_back(bro1);
    rsys.push_back(bro2);

    rsys.checkedWithName("RemindTest");
    rsys.printAllRemindObject();
}

TEST(TestReminderSys, checkedWithNameFailed) {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    BasicRemindObject bro1(rm);
    BasicRemindObject bro2;

    rsys.push_back(bro1);
    rsys.push_back(bro2);
    ASSERT_THROW(rsys.checkedWithName("R"), std::invalid_argument);
}

TEST(TestReminderSys, removedWithNameSuccess) {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    BasicRemindObject bro1(rm);
    BasicRemindObject bro2;

    rsys.push_back(bro1);
    rsys.push_back(bro2);
    std::cout << "Should return one stuff only" << std::endl;
    rsys.removeWithName("RemindTest");
    rsys.printAllRemindObject();
}

TEST(TestReminderSys, removedWithNameFailed) {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    BasicRemindObject bro1(rm);
    BasicRemindObject bro2;

    rsys.push_back(bro1);
    rsys.push_back(bro2);
    ASSERT_THROW(rsys.removeWithName("R"), std::invalid_argument);
}





