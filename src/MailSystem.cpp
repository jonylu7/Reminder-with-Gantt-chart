//
// Created by 黃漢軒 on 2023/12/7.
//

#include "MailSystem.h"


DeliveryResult MailSystem::PostDeliverableMail(std::string date){

    DeliveryResult dResult=this->deliverableMailStorage[GetDeliverableMailSize()-1]->Delivery(date);
    this->deliverableMailStorage.pop_back();
    return dResult;
}
