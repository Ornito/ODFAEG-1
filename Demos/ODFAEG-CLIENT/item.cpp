#include "item.hpp"
namespace sorrok {
    Item::Item(std::string name,Type type) : name(name), type(type) {

    }
    Item::Type Item::getType() {
        return type;
    }
    std::string Item::getName() {
        return name;
    }
    float Item::getAttributeVal(AttribType attribType) {
        std::map<int, float>::iterator it = attributes.find(attribType);
        return (it != attributes.end()) ? it->second : 0;
    }
}
