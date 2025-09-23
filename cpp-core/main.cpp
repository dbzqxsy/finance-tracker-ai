#include<iostream>
#include<vector>
#include "expense.hpp"

int main(){
    std::string data;
    std::cout << "请输入日期（格式为YYYY-MM-DD）" ;
    std::cin >> data;

    std::vector<Expense> records;
    while(true){
        double amount;
        std::string category;
        std::cout << "请输入金额（输入-1结束）：";
        std::cin >> amount;
        if(amount == -1){
            break;
        }
        std::cout << "请输入类型：";
        std::cin >> category;

        Expense e(amount,category,data);
        records.push_back(e);
    }
    std::cout << "输入完成，支出如下：" << std::endl;
    for(const auto& e : records){
        std::cout << "金额：" << e.getAmount()
                <<"类型：" << e.getCategory()
                << std::endl;
    }
    std::cout << "日期：" << data << std::endl;
    return 0;
}