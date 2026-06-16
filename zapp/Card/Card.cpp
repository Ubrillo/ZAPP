//
// Created by ubril on 6/16/2026.
//
#include "Card.h"

Card::Card(const int id, const string &name, const int rating, const int credit) {
        this->id = id;
        this->rating = rating;
        this->credit = credit;
        this->point = 0;
        this->name = name;
    }

    [[nodiscard]] int Card::getId() const {
        return id;
    }

    [[nodiscard]] string Card::getName() const {
        return name;
    }

    [[nodiscard]] int Card::getRating() const {
        return rating;
    }

    [[nodiscard]] int Card::getCredit() const {
        return credit;
    }

    [[nodiscard]] int Card::getPoint() const {
        return point;
    }

    void Card::setPoint(const int new_point) {
        point = new_point;
    }

    void Card::setCredit(const int new_credit){credit = new_credit;}

    void Card::addCredit(const int new_credit) {
        credit += new_credit;
    }

    [[nodiscard]] bool Card::enoughCredit() const {
        if (credit >= MIN_CHARGE) {
           return true;
        }

        return false;
    }

    void  Card::point_to_credit() {
        if (const int value = point/POINT_RATE; value > 0) {
            credit += value;
            point = point % POINT_RATE;
        }
    }

    string Card::toString() const{
        string str = "Card ID: "+to_string(id) +
            "\nGuest Name: "+name+
                "\nLuxury rating: " + to_string(rating)+
                    "\nCredit : "+to_string(credit)+
                        "\nPoint: "+ to_string(point);

        return str;
    }
