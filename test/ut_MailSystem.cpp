//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "MailSystem.h"
#include "MailInfo.h"
#include "PromptDeliveryMail.h"
#include "RegisteredMail.h"
#include <stdexcept>
/* Add tests here */

TEST(MAILSTS,MailSystemTestOD){
    MailSystem ms;
    MailInfo info("from","to","ID");
    OrdinaryMail od(info);
    ms.AddOrdinaryMail(od);
    ASSERT_EQ(ms.GetOrdinaryMailSize(),1);
    ms.PostOrdinaryMail();
    ASSERT_EQ(ms.GetOrdinaryMailSize(),0);
}
TEST(MAILSTS,MailSystemTestDelivarableSuccess){
    MailSystem ms;
    MailInfo info("from","to","ID");
    std::shared_ptr<PromptDeliveryMail> pm=std::make_shared<PromptDeliveryMail>(info,"2025-10-25");
    ms.AddDeliverableMail(pm);
    ASSERT_EQ(ms.GetDeliverableMailSize(),1);
    std::shared_ptr<RegisteredMail> rm=std::make_shared<RegisteredMail>(info);
    ms.AddDeliverableMail(rm);
    ASSERT_EQ(ms.GetDeliverableMailSize(),2);
    ms.PostDeliverableMail("2021-10-20");
    ASSERT_EQ(ms.GetDeliverableMailSize(),1);
}

TEST(MAILSTS,MailSystemTestDelivarableFail){
    MailSystem ms;
    MailInfo info("from","to","ID");
    std::shared_ptr<PromptDeliveryMail> pm=std::make_shared<PromptDeliveryMail>(info,"2025-10-25");
    ms.AddDeliverableMail(pm);
    ASSERT_THROW(ms.PostDeliverableMail("2030-10-20"),std::invalid_argument);
}


