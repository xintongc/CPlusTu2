//
// Created by xintong cheng on 2018-01-26.
// #pragma once
#include <string>

using namespace std;

#ifndef TU2_CREATEANDDESTROY_H
#define TU2_CREATEANDDESTROY_H


class CreateAndDestroy {

public:

    //constructor
    CreateAndDestroy(int, string);
    ~CreateAndDestroy();

private:
    int objectID;
    string message;


};


#endif //TU2_CREATEANDDESTROY_H
