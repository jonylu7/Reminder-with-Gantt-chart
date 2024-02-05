//
// Created by 盧威任 on 1/1/24.
//

#include "RemindSystem.hpp"
#include "ReminderObjectList.hpp"
#include "gtest/gtest.h"
#include "Date.hpp"
#include <iostream>


TEST(TestReminderSys_BasicRemindObject, testPushAndPrint) {
    ReminderSystem rsys;


    ReminderObject rm;
    ReminderObjectList bro1(rm);
    ReminderObjectList bro2(rm);

    rsys.push_back(bro1);
    rsys.push_back(bro2);
    rsys.printAllRemindObject();
}

TEST(TestReminderSys_BasicRemindObject, testPopAndPrint) {
    ReminderSystem rsys;

    ReminderObject rm;
    ReminderObjectList bro1(rm);
    ReminderObjectList bro2(rm);
    rsys.push_back(bro1);
    rsys.push_back(bro2);
    rsys.pop_back();
    rsys.printAllRemindObject();
    rsys.pop_back();
    rsys.printAllRemindObject();
}


TEST(TestReminderSys_BasicRemindObject, checkedWithNameSuccess) {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    ReminderObjectList bro1(rm);
    ReminderObjectList bro2;

    rsys.push_back(bro1);
    rsys.push_back(bro2);

    rsys.checkedWithName("RemindTest");
    rsys.printAllRemindObject();
}
/**
TEST(TestReminderSys_BasicRemindObject, checkedWithNameFailed) {
ReminderSystem rsys;
Date someday(2024, 2, 3);
ReminderObject rm("RemindTest", false, "test", someday);
ReminderObjectList bro1(rm);
ReminderObjectList bro2;

rsys.push_back(bro1);
rsys.push_back(bro2);
ASSERT_THROW(rsys.checkedWithName("R"), std::invalid_argument);
}

TEST(TestReminderSys_BasicRemindObject, removedWithNameSuccess) {
ReminderSystem rsys;
Date someday(2024, 2, 3);
ReminderObject rm("RemindTest", false, "test", someday);
ReminderObjectList bro1(rm);
ReminderObjectList bro2;

rsys.push_back(bro1);
rsys.push_back(bro2);
std::cout << "Should return one stuff only" << std::endl;
rsys.removeWithName("RemindTest");
rsys.printAllRemindObject();
}

TEST(TestReminderSys_BasicRemindObject, removedWithNameFailed) {
ReminderSystem rsys;
Date someday(2024, 2, 3);
ReminderObject rm("RemindTest", false, "test", someday);
ReminderObjectList bro1(rm);
ReminderObjectList bro2;

rsys.push_back(bro1);
rsys.push_back(bro2);
ASSERT_THROW(rsys.removeWithName("R"), std::invalid_argument);
}


**/





