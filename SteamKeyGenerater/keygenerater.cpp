#include "keygenerater.h"


KeyGenerater::KeyGenerater(){
    key = "";
}

void KeyGenerater::Generate(){
    for(int i = 0; i < 15; i++){
        if(i == 5 || i == 10){
            key += '-';
        }
        char symbol = rand() %25 + 65;
        key += symbol;
    }
    NumberAdder();
}

void KeyGenerater::NumberAdder(){
    for(int i = 0; i < rand()% 15; i++){
        char number = rand() %10 + 48;
        int numberSymbol = rand()%16;
        if(key[numberSymbol] != '-'){
            key[numberSymbol] = number;
        }
    }
}

QString KeyGenerater::GetSteamKey(){
    Generate();
    return key;
}
