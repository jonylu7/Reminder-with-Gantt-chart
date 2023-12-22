//
// Created by 盧威任 on 12/22/23.
//

#ifndef OOP_DOUBLELL_HPP
#define OOP_DOUBLELL_HPP
#include <memory>
#include <vector>
template <typename T>
class DoubleLinkedList{
private:
    std::shared_ptr<T> next;
    std::shared_ptr<T> previous;
public:
    DoubleLinkedList(){};
    DoubleLinkedList(std::vector<T> vec){
    };
    ~DoubleLinkedList(){};

    void push_back(std::shared_ptr<T> ){};
    void pop_back(){};






};


#endif //OOP_DOUBLELL_HPP
