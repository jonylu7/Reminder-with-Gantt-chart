//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "PromptDeliveryMail.h"
/* Add tests here */

TEST(PROMPTDEL,PromptDelTestReturn){
    MailInfo info("from","to","ID");
    PromptDeliveryMail pm(info,"2023-12-26");
    ASSERT_EQ(pm.Delivery("2021-12-24").GetDeliveryDate(),"2021-12-24");
    ASSERT_EQ(pm.GetMailInfo().GetMailId(),"ID");
}