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
    LLNode<std::shared_ptr<T>> tail;
    LLNode<std::shared_ptr<T>> head;
    LLNode<std::shared_ptr<T>> now;
public:
    LinkedList() {

    }

    LinkedList(std::vector<T> vec) {
        LLNode<T> last = nullptr;
        for (auto i: vec) {
            LLNode<T> LLNow(vec);
            if (last == nullptr) {
                last = LLNow;
            } else {
            }
        }
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
