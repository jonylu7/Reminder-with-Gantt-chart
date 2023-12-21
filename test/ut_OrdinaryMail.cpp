//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "OrdinaryMail.h"
/* Add tests here */

TEST(ODTest,odTestreturn){
    MailInfo info("from","to","ID");
    OrdinaryMail od(info);
    ASSERT_EQ(od.GetMailInfo(),info);
}