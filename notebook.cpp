#ifndef PAPER_PRODUCT
#define PAPER_PRODUCT
 
#include "product.cpp"
 
class PaperProduct : public Product {
public:
    virtual std::string getProductType() override {
        return "Paper";
    }
};
 
#endif