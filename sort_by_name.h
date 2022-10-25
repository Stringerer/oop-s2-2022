#ifndef _SORT_BY_NAME_H
#define _SORT_BY_NAME_H

#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

class sort_by_name
{
public:
    static void sort(animal** animals, int n);
};

#endif