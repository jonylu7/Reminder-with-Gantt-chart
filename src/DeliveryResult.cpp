//
// Created by 黃漢軒 on 2023/12/7.
//

#include "DeliveryResult.h"
#include "MailInfo.h"

DeliveryResult::DeliveryResult(MailInfo mailInfo, std::string deliveryDate) : mailInfo(mailInfo){
    this->deliveryDate = deliveryDate;
}


std::string DeliveryResult::GetDeliveryDate(){
    return this->deliveryDate;
}