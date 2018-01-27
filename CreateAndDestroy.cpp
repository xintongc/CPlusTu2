//
// Created by xintong cheng on 2018-01-26.
//

#include "CreateAndDestroy.h"
#include <iostream>

using namespace std;

CreateAndDestroy::CreateAndDestroy(int id, string mess)
{
    objectID = id;
    message = mess;

    cout << "Constructor called for object" << objectID << ". Constrctor runs:" <<endl;
}

CreateAndDestroy::~CreateAndDestroy()
{
    cout << "object " << objectID << " is being destroyed. " << message << endl;

}