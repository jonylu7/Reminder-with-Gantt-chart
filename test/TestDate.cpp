//
// Created by 盧威任 on 12/21/23.
//

#include "gtest/gtest.h"
#include "Date.hpp"

TEST(TestDate,TESTDateBuildDateObject){
    Date aday(2003,12,1) ;
    ASSERT_EQ(aday.getYear(),2003);
    ASSERT_EQ(aday.getMonth(),12);
    ASSERT_EQ(aday.getDay(),1);
}

TEST(TestDate,TESTDateEquals){
    Date aday(2003,12,1) ;
    Date bday(2003,12,1) ;
    ASSERT_TRUE(aday==bday);
    Date cday(2003,12,2) ;
    ASSERT_FALSE(aday==cday);
}