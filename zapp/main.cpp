#include <iostream>

#include "Card/Card.h"

int main() {

    Card card{1, "ubrillo", 2,10};
    cout << card.toString();
}