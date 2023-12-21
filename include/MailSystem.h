//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef OOP_MAILSYSTEM_H
#define OOP_MAILSYSTEM_H

#include "OrdinaryMail.h"
#include "IDeliverable.h"
#include <memory>
#include <vector>

class MailSystem {
private:
    std::vector<OrdinaryMail> ordinaryMailStorage;
    std::vector<std::shared_ptr<IDeliverable>> deliverableMailStorage;
public:
    void AddOrdinaryMail(OrdinaryMail mail){this->ordinaryMailStorage.push_back(mail);};
    void AddDeliverableMail(std::shared_ptr<IDeliverable> deliverableMail){this->deliverableMailStorage.push_back(deliverableMail);};
    void PostOrdinaryMail(){this->ordinaryMailStorage.pop_back();};
    DeliveryResult PostDeliverableMail(std::string date);
    size_t GetOrdinaryMailSize(){return this->ordinaryMailStorage.size();};
    size_t GetDeliverableMailSize(){ return this->deliverableMailStorage.size();};
};

#endif //OOP_MAILSYSTEM_H
