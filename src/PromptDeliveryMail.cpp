//
// Created by 黃漢軒 on 2023/12/7.
//

#include <stdexcept>

#include "DeliveryResult.h"
#include "MailInfo.h"
#include "PromptDeliveryMail.h"
#include <stdexcept>

PromptDeliveryMail::PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate) : mailInfo(mailInfo) {
this->promptDeliveryDate=promptDeliveryDate;
}



DeliveryResult PromptDeliveryMail::Delivery(std::string date) {
    if(date<=this->promptDeliveryDate){
    DeliveryResult dResult(this->mailInfo,date);
    return dResult;
}else{
        throw std::invalid_argument("too late");
    }
}

