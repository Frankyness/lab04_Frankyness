#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <map>
#include <string>

class CustomItem : public IceCreamItem {
    public:

    CustomItem(std::string size);
    virtual ~CustomItem();
    virtual std::string composeItem() override;
    virtual double getPrice() override;
    void addTopping(std::string topping);

    private:
    std::map<std::string, int> toppings;
};

#endif