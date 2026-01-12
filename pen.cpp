#ifndef PEN
#define PEN
 
#include "notebook.cpp"
#include <string>
 
class Pen : public PaperProduct {
private:
    std::string name;
   
public:
    Pen(std::string penName = "Pen") : name(penName) {}
   
    virtual std::string getName() override {
        return name;
    }
};
 
#endif