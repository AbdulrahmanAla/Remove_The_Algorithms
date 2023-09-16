
#include <string>
#include <vector>
#include <iterator>
#include <iostream>
#include <sstream>
using  std::string, std::cin, std::cout, std::size_t, std::endl, std::vector;

int Func(int a) 
{
    std::vector<int> b(a);

    
    int counter=0;
    for (auto pos = b.begin(); pos != b.end(); pos++) {
        *pos = (*pos) +12 +counter;
        ++counter;
    }

    std::vector<int> c(b);
    
    int temp=0;
    int i =1;
    for (auto pos = c.begin(); pos != c.begin() + (static_cast<int>(c.size()) /2);pos++) {
        temp= *pos;
        *pos =*( c.end() - i);
        *( c.end() - i) = temp;

        i++;
    }
    for (auto pos = b.begin(), posc= c.begin(); pos !=b.end(); ++pos, ++posc ){
        *pos= ((*pos)*2) + (*posc);

    }

    
    int count=0;
    for( auto pos= b.begin() +2; pos != b.end()-2; pos++){
        if(std::to_string((*pos)).find("2") != std::string::npos) {
            ++count;
        }
    }
    return count;
    

}