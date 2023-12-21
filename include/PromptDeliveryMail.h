//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
#define MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H

#include <string>

#include "MailInfo.h"
#include "IDeliverable.h"


class PromptDeliveryMail:public IDeliverable{
private:
    MailInfo mailInfo;
    std::string promptDeliveryDate;
public:
    PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate);
    virtual ~PromptDeliveryMail() = default;
    MailInfo GetMailInfo(){return this->mailInfo;};
    DeliveryResult Delivery(std::string date) override;
};

#endif //MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
