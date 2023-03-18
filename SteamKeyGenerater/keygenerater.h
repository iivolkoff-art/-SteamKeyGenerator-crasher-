#ifndef KEYGENERATER_H
#define KEYGENERATER_H

#include "QString"


class KeyGenerater
{
private:
    QString key;

public:
    KeyGenerater();
    void Generate();
    QString GetSteamKey();
    void NumberAdder();
};

#endif // KEYGENERATER_H
