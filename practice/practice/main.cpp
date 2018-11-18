#include <vector>
#include <stdexcept>
#include <iostream>

class SortedSearch
{
public:
    static int countNumbers(const std::vector<int>& sortedVector, int lessThan)
    {
        int start = 0;
        int end = sortedVector.size() ;
        int mid = 0;
        
        while(start < end){
            mid = (start + end)/2;
            
            // find count
            if(sortedVector[mid] < lessThan){
                start = mid + 1;
            }
            else { // sotredVector[mid] > lessThan
                end = mid;
            }
        }
        return start;
    }
};

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 4, 5, 7 };
    std::cout << SortedSearch::countNumbers(v, 4);
}
#endif

