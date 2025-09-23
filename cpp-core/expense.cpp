#include"expense.hpp"

Expense::Expense(double amount,const std::string& category,const std::string& data){
    setAmount(amount);
    setCategory(category);
    setData(data);
}
double Expense::getAmount() const{
    return amount;
}

std::string Expense::getCategory() const{
    return category;
}
std::string Expense::getData() const{
    return data;
}

void Expense::setAmount(double newAmount){
    if (newAmount < 0 ){
        std::cerr << "金额不能为负" << std::endl;
        amount = 0.0;
    }else{
        amount = newAmount;
    }
}
void Expense::setCategory(const std::string& newCategory){
    if(newCategory.empty()){
        std::cerr << "类型不能为空" << std::endl;
        category = "未分类";
    }else{
        category = newCategory;
    }
}
void Expense::setData(const std::string& newData){
    if(newData.empty()){
        std::cerr << "日期不能为空" << std::endl;
        data = "0000-00-00";
    }else{
        data = newData;
    }
}