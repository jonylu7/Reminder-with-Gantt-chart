//
// Created by 盧威任 on 1/1/24.
//

#include "RemindSystem.hpp"
#include "GanttProject.hpp"
#include "BasicRemindObject.hpp"
#include "gtest/gtest.h"


TEST(TestReminderSys, testpushandPrint) {
    BasicRemindObject bro;
    GanttProject gp;
    ReminderSystem rs;
    rs.push_back(gp);
    rs.push_back(bro);
    ASSERT_EQ(rs.size(), 2);
    rs.printAllRemindObject();

}

