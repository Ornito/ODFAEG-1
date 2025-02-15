#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <map>
namespace sorrok {
    class Item {
    public :
        enum Type {
            HP_POTION
        };
        enum AttribType {
            POTION_AMOUNT
        };
        Item () {}
        Item (std::string name, Type type);
        Type getType();
        std::string getName();
        float getAttributeVal(AttribType attribType);
        template <typename Archive>
        void serialize(Archive& ar) {
            ar(name);
            ar(type);
            ar(attributes);
        }
    private :
        std::string name;
        Type type;
        std::map<int, float> attributes;
    };
}
#endif // ITEM_HPP
