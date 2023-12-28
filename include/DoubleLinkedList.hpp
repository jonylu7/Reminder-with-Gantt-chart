//
// Created by 盧威任 on 12/28/23.
//

#ifndef OOP_DOUBLELINKEDLIST_HPP
#define OOP_DOUBLELINKEDLIST_HPP

#include "DLLNode.hpp"
#include <vector>
template <typename T>
class DoubleLinkedList{
private:
    DLLNode<T> tail;
    DLLNode<T> head;
public:
    DoubleLinkedList(){
        this->head=new DLLNode<T>();
        this->tail=new DLLNode<T>();
        this->head->next=this->tail;
        this->tail->previous=this->head;
    }

    DoubleLinkedList(std::vector<T> vec){
    }

    ~DoubleLinkedList(){}

    void push_back(T value){

    }
    void pop_back(){

    }

    void remove(int index){

    }

    void insert(T value,int index){

    }

    void merge(DoubleLinkedList<T> DLL){

    }


    bool operator== (DoubleLinkedList<T> DLL){

    }



};

#endif //OOP_DOUBLELINKEDLIST_HPP
