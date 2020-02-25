#include "Exe2_1_1.h"
#include <iostream>
#include <list>


int main()
{
    std::vector<int> v{1,2,3,1,2,3,3,4,5,4,5,6,7};
    std::sort(v.begin(), v.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7 
    auto last = std::unique(v.begin(), v.end());
    // v 现在保有 {1 2 3 4 5 6 7 x x x x x x} ，其中 x 不确定
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    v.erase(last, v.end()); 
    for (int i : v)
      std::cout << i << " ";
    std::cout << "\n";

    std::list<int> values {1,1,1,2,2,2,4};
    int wanted {2};    // What we are looking for
    std::cout<<"The upper bound for " << wanted<< " is " << *std::upper_bound (std::begin (values), std:: end (values), wanted)<< std::endl;
    std::cout<<"The lower bound for " << wanted<< " is " << *std::lower_bound (std::begin (values), std:: end (values), wanted)<< std::endl;

    std::vector<int> v1{1,2,3,1,2,3,3,4,5,4,5,6,7};
    std::sort(v1.begin(), v1.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7 
    Solution3 sol;
    std::cout << sol.removeDuplicates(v1) << std::endl;

    std::vector<int> v2{1,2,3,1,2,3,3,4,5,4,5,6,7};
    std::sort(v2.begin(), v2.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7 
    auto it = sol.removeDuplicates(v2.begin(), v2.end(), v2.begin());
    for(auto i : v2){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << *v2.begin() << std::endl;
    std::cout << it - v2.begin() << std:: endl;


    return 0;
}