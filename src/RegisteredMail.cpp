//
// Created by 黃漢軒 on 2023/12/7.
//

#include "DeliveryResult.h"
#include "MailInfo.h"
#include "RegisteredMail.h"

RegisteredMail::RegisteredMail(MailInfo mailInfo) : mailInfo(mailInfo) {

}


DeliveryResult RegisteredMail::Delivery(std::string date) {
    DeliveryResult dResult(this->mailInfo,date);
    return dResult;
}