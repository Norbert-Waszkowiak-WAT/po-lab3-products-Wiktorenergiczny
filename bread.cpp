#ifndef BREAD
#define BREAD
 
#include "food_product.cpp"
#include <string>
 
class Bread : public FoodProduct {
private:
    std::string name;
   
public:
    Bread(std::string breadName = "Bread") : name(breadName) {}
   
    virtual std::string getName() override {
        return name;
    }
};
 
#endif