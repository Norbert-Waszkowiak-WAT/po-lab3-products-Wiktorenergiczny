#ifndef MINERAL_WATER
#define MINERAL_WATER
 
#include "food_product.cpp"
#include <string>
 
class MineralWater : public FoodProduct {
private:
    std::string name;
   
    int main(){
        string a;
       
    }
public:
    MineralWater(std::string waterName = "Mineral Water") : name(waterName) {}
   
    virtual std::string getName() override {
        return name;
    }
};
 
#endif