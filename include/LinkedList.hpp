//
// Created by 盧威任 on 12/28/23.
//

#ifndef OOP_LINKEDLIST_HPP
#define OOP_LINKEDLIST_HPP

#include "LLNode.hpp"
#include <vector>

template<typename T>
class LinkedList {
private:
    std::shared_ptr<LLNode<T>> head;
    std::shared_ptr<LLNode<T>> now;
public:
    LinkedList() {


    }

    LinkedList(T value) {
        LLNode<T> node(value);
        this->now = std::make_shared<LLNode<T>>(node);
        this->head = std::make_shared<LLNode<T>>(node);
    }

    LinkedList(std::vector<T> vec) {
        
    }

    ~LinkedList() {}

    void push_back(std::shared_ptr<T> value) {

    }

    void pop_back() {

    }

    void remove(int index) {

    }

    void insert(std::shared_ptr<T> value, int index) {

    }

    void merge(LinkedList<T> DLL) {

    }

    LLNode<std::shared_ptr<T>> getNow() {
        return this->now;
    }

    void setNowtoNext() {
        if (this->now == this->tail) {
            this->now = nullptr;
        } else {
            this->now = this->now.getNext();
        }
    }

    LLNode<std::shared_ptr<T>> getHead() {
        return this->head;
    }

    LLNode<std::shared_ptr<T>> getTail() {
        return this->tail;
    }

    bool operator==(LinkedList<T> DLL) {

    }


};

#endif //OOP_LINKEDLIST_HPP
