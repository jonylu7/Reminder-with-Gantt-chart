//
// Created by 盧威任 on 12/22/23.
//
#include "gtest/gtest.h"
#include "LLNode.hpp"
#include "GanttObject.hpp"
#include "BasicRemindObject.hpp"
#include "RemindObject.hpp"
#include "LinkedList.hpp"


TEST(TestLinkedList, TestTraversal) {
    ReminderObject rm;
    ReminderObject rm1;
    ReminderObject rm2;
    BasicRemindObject brm(rm);
    BasicRemindObject brm2(rm2);
    BasicRemindObject brm1(rm1);
    LinkedList<BasicRemindObject> LL(std::vector<BasicRemindObject>({brm, brm1, brm2}));
}