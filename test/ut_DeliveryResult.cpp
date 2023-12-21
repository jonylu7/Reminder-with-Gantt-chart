//
// Created by 黃漢軒 on 2023/12/7.
//

#include <gtest/gtest.h>
#include "DeliveryResult.h"
/* Add tests here */

TEST(DELIVERYRESULT,DeliveryResultGetTest){
    MailInfo info("from","to","ID");
    DeliveryResult dResult(info,"2023-10-25");

    ASSERT_EQ(dResult.GetMailInfo().GetFrom(),"from");
    ASSERT_EQ(dResult.GetMailInfo().GetTo(),"to");
    ASSERT_EQ(dResult.GetMailInfo().GetMailId(),"ID");
    ASSERT_EQ(dResult.GetDeliveryDate(),"2023-10-25");
}
