//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_DATE_HPP
#define OOP_DATE_HPP
class Date{
private:
    int day;
    int month;
    int year;
public:
    Date():day(-1),month(-1),year(-1){
    };
    Date(int year,int month,int day){ setDay(day);
        setMonth(month);
        setYear(year);};
    ~Date(){};
    void setDay(int day){this->day=day;};
    void setMonth(int month){this->month=month;};
    void setYear(int year){this->year=year;};

    int getYear(){return this->year;};
    int getMonth(){return this->month;};
    int getDay(){return this->day;};


    bool operator==(Date bDate){
        return (bDate.year==this->year)&&(bDate.month==this->month)&&(bDate.day==this->day);
    }

};
#endif //OOP_DATE_HPP
