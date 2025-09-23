#include<iostream>
#include"expense.hpp"

int main(){
    Expense a(11.0,"午饭","2025-9-23");
    std::cout << "原始数据" << std::endl;
    std::cout << "金额" << a.getAmount() << std::endl;
    std::cout << "类型" << a.getCategory() << std::endl;
    std::cout << "日期" << a.getData() << std::endl;
    return 0;
}