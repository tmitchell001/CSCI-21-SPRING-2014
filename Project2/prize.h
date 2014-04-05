#pragma once
class prize {
    public:
        prize(itemName = "NO NAME", itemValue = 0);
        prize(itemName, itemValue);
        ~prize() {
            
        };
        friend overloaded operator==:
            if (prizeName == prizeName && prizeValue == prizeValue)
                return true;
            else
                return false;
        void getitemName();
        void setitemName(newItemName);
        void getitemValue();
        void setitemValue(newItemValue);
    private:
        string itemName;
        unsigned int itemValue;
};