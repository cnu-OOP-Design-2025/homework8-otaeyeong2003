#include "game.h"
#include "string"

string Armor::getDescription() const {
    return character->getDescription() + ", Armor";
}

string Boots::getDescription() const {
    return character->getDescription() + ", Boots";
}

string Staff::getDescription() const {
    return character->getDescription() + ", Staff";
}

string Sword::getDescription() const {
    return character->getDescription() + ", Sword";
}

string Bow::getDescription() const {
    return character->getDescription() + ", Bow";
}

int Armor::getAttack() const { return character->getAttack();}
int Armor::getDefense() const {
    return character->getDefense() + 30;
}
int Armor::getSpeed() const {
    return character->getSpeed() - 5;
}

int Boots::getAttack() const { return character->getAttack();}
int Boots::getDefense() const {return character->getDefense();}
int Boots::getSpeed() const {
    return character->getSpeed() + 15;
}

int Staff::getAttack() const {
    //if (description.compare("Wizard") == 0) return character->getAttack()+60;
    return character->getAttack()+20;
}
int Staff::getDefense() const {return character->getDefense();}
int Staff::getSpeed() const {return character->getSpeed();}

int Bow::getAttack() const {
    //if (description.compare("Archer") == 0) return character->getAttack()+65;
    return character->getAttack()+25;
}
int Bow::getDefense() const {return character->getDefense();}
int Bow::getSpeed() const {return character->getSpeed();}


int Sword::getAttack() const {
    //if (description.compare("Knight") == 0) return character->getAttack()+70;
    return character->getAttack()+30;
}
int Sword::getDefense() const {return character->getDefense();}
int Sword::getSpeed() const {return character->getSpeed();}



int Knight::getAttack() const {
    return 70;
}

int Knight::getSpeed() const {
    return 40;
}

int Knight::getDefense() const {
    return 80;
}

int Wizard::getAttack() const {
    return 50;
}

int Wizard::getSpeed() const {
    return 50;
}

int Wizard::getDefense() const {
    return 30;
}

int Archer::getAttack() const {
    return 60;
}

int Archer::getSpeed() const {
    return 70;
}

int Archer::getDefense() const {
    return 40;
}