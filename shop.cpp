#ifndef SHOP
#define SHOP
#include <vector>
#include "product.cpp"
 
using namespace std;
 
class Shop{
    private:
    vector<Product*> product ;
 
    public:
    void sellProduct(string name){
        for(auto it = product.begin();it != product.end(); it++){
           if((*it) -> getName() == name){
            product.erase(it);
            break;

           }
        }


    };
   void addProduct(Product* product){
    this->product.push_back(product);
}
    string printProductList(){
        string output;
        for(auto it = product.begin(); it != product.end(); it++){
            output += (*it) -> getName() + "\n";
        }
        return output;
    }
    string printProductListByType(string type){
        string output;
        for(auto it = product.begin(); it != product.end(); it++){
            if((*it) -> getProductType() == type){
            output += (*it) -> getName() + "\n";
        }
    }
        return output;
    }
 
    
};
#endif