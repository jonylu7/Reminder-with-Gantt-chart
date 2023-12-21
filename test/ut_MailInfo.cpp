//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"
/* Add tests here */

TEST(MAILLINFO,mailinfoGetTest){
    MailInfo info("from","to","ID");
    ASSERT_EQ(info.GetFrom(),"from");
    ASSERT_EQ(info.GetTo(),"to");
    ASSERT_EQ(info.GetMailId(),"ID");
}