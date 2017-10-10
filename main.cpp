#include <iostream>
//#include <stdio.h>
#include <vector>

//
//  learning vectors and iterators
//


int main()
{
 std::vector<int> i1(1);
 std::cout << "Hello world!" << std::endl;

 i1[0] = 6;
 i1.push_back(2);

 std::cout << i1.at(1);

 //printf("test1");
 return 0;
}
