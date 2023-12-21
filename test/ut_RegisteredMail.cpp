//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailInfo.h"
#include "RegisteredMail.h"
/* Add tests here */

TEST(RMTEST,rmreturn){
    MailInfo info("from","to","ID");
    RegisteredMail rm(info);
    ASSERT_EQ(rm.GetMailInfo().GetMailId(),"ID");

}