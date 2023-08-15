#include "value_option.h"

class Field {
    private:
    value_option value;

    public:
    Field() {
        value = empty;
    }

    value_option getValue() {
        return value;
    }

    void setValue(value_option newValue) { 
        value = newValue;
    }
};