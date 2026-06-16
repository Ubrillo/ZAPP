//
// Created by ubril on 6/16/2026.
//
#pragma once

#include <iostream>
using namespace std;

#ifndef ZAPP_CARD_H
#define ZAPP_CARD_H


class Card {

    private:
    int id, rating, credit, point;
    string name;

    static constexpr  int MIN_CHARGE = 4;
    static constexpr int POINT_RATE = 3;

    public:
    Card(int id, const string &name, int rating, int credit);

    [[nodiscard]] int getId() const;

    [[nodiscard]] string getName() const;

    [[nodiscard]] int getRating() const;

    [[nodiscard]] int getCredit() const;

    [[nodiscard]] int getPoint() const;

    void setPoint(int new_point);

    void setCredit(int new_credit);

    void addCredit(int new_credit);

    [[nodiscard]] bool enoughCredit() const;

    void point_to_credit();

    [[nodiscard]] string toString() const;
};


#endif //ZAPP_CARD_H
