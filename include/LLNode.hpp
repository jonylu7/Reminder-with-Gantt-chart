//
// Created by 盧威任 on 12/22/23.
//

#ifndef OOP_LLNODE_HPP
#define OOP_LLNODE_HPP

#include <memory>
#include "GanttObject.hpp"
#include <iostream>
#include <vector>

template<typename T>
class LLNode {
private:
    std::shared_ptr<T> next;
    T value;
public:
    LLNode() {
    };

    LLNode(T value) {
        this->next = nullptr;
        this->previous = nullptr;
        this->value = value;
    };

    ~LLNode() {};

    T getValue() {
        return this->value;
    }

    std::shared_ptr<T> getPrevious() {
        return this->previous;
    }

    std::shared_ptr<T> getNext() {
        return this->next;
    }

    LLNode &operator=(LLNode<T> other) {
        this->value = other.value;
        this->next = other.next;
        return *this;
    }

    LLNode &operator=(nullptr_t) {
        this->next = nullptr;
        this->value = nullptr;
        return *this;
    }

    LLNode &operator=(std::shared_ptr<T> node) {
        this->next = node;
        return *this;
    }

    bool operator==(LLNode<T> other) {
        return (this->value == other.value);
    }


};


#endif //OOP_LLNODE_HPP
