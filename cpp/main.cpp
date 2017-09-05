//
//  main.cpp
//  cpp
//
//  Created by He Jingang on 9/1/17.
//  Copyright © 2017 He Jingang. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <assert.h>
#include "selectionSort.hpp"
using namespace std;




int main(int argc, const char * argv[]) {
    int arr[]={5,4,3,2,1};
    for (int i=0;i!=5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    selectionSort(arr,5);
    for (int i=0;i!=5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
    
}
