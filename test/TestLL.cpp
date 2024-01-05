//
// Created by 盧威任 on 12/22/23.
//
#include "gtest/gtest.h"
#include "BasicRemindObject.hpp"
#include "RemindObject.hpp"
#include "LinkedList.hpp"
#include "IsRemindable.hpp"


TEST(TestLinkedList, TestCreateSingleObject) {
    ReminderObject rm1;
    BasicRemindObject brm1(rm1);
    LinkedList<BasicRemindObject> ll(brm1);
    ASSERT_EQ(ll.getNow()->getValue().getReminderObjectName(), ll.getHead()->getValue().getReminderObjectName());
    ASSERT_EQ(ll.getNow()->getNext(), nullptr);
}


TEST(TestLinkedList, TestCreateVec) {
    Date someday(2024, 1, 1);
    ReminderObject rm1("test1", false, "nothing", someday);
    ReminderObject rm2("test2", false, "nothing", someday);
    BasicRemindObject brm1(rm1);
    BasicRemindObject brm2(rm2);
    LinkedList<BasicRemindObject> linkedlist(std::vector<BasicRemindObject>({brm1, brm2}));
    ASSERT_EQ(linkedlist.getHead()->getValue().getReminderObjectName(), "test1");
    ASSERT_EQ(linkedlist.getHead()->getNext()->getValue().getReminderObjectName(), "test2");
}



