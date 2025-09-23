//expense类头文件
#ifndef EXPENSE_HPP
#define EXPENSE_HPP

#include<string>
// #include<ctime>
#include<iostream>

class Expense {
    public:
        Expense(double amount,const std::string& category,const std::string& data);
        //用户读取自己记账的值等
        double getAmount() const;
        std::string getCategory() const;
        std::string getData() const;

        //用户修改自己记账的值等
        void setAmount(double newAmount);
        void setCategory(const std::string& newCategory);
        void setData(const std::string& newData);

    private:
        double amount;
        std::string category;
        std::string data;
};

#endif