//
// Created by 盧威任 on 12/22/23.
//

#ifndef OOP_DLLNODE_HPP
#define OOP_DLLNODE_HPP
#include <memory>
#include <vector>
template <typename T>
class DLLNode{
private:
    std::shared_ptr<T> next;
    T value;
    std::shared_ptr<T> previous;
public:
    DLLNode(T value){
        this->next= nullptr;
        this->previous= nullptr;
        this->value=value;
    };
    ~DLLNode(){};

    T getValue(){
        return this->value;
    }

    std::shared_ptr<T> getPrevious(){
        return this->previous;
    }

    std::shared_ptr<T> getNext(){
        return this->next;
    }





};


#endif //OOP_DLLNODE_HPP
