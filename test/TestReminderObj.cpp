//
// Created by 盧威任 on 12/21/23.
//

#include "gtest/gtest.h"
#include "RemindObject.hpp"

TEST(TestReminderObject,TESTReminderObjectConstructWithEmptyArgsDateReturnDefault){
    ReminderObject obj;
    ASSERT_EQ(obj.getDay(),-1);
}

TEST(TestReminderObject,TESTReminderObjectConstructWithCheckedDateReturnDefault){
    ReminderObject obj(true);
    ASSERT_EQ(obj.getChecked(),true);
    ASSERT_EQ(obj.getDay(),-1);
    ASSERT_EQ(obj.getDespcription(),"None");
}