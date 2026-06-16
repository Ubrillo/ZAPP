//
// Created by ubril on 6/16/2026.
//

#include "Bridge.h"

Bridge::Bridge( Area &from,  Area &to, string &code):
    fromArea(from),
    destinationArea(to),
    bridgeCode(code)
{}

string Bridge::getBridgeCode() const{
    return bridgeCode;
}

Area& Bridge::getFromArea() const {
    return fromArea;
}

Area& Bridge::getDestinationArea() const {
    return destinationArea;
}

bool Bridge::entryAllowed(const Card &card) const {
    return (card.getRating() >= destinationArea.getAreaRating())&&
        (destinationArea.isAvailable()) &&
        (card.enoughCredit()) &&
        (fromArea.cardInArea(card.getId()));
}

string Bridge::toString() const {
    return "Bridge Code: "+bridgeCode+
        "\nSource Area: "+ fromArea.getAreaName() +"\n";

}