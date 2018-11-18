#include <stdexcept>
#include <iostream>
#include <list>

class TrainComposition
{
public:
    
    std::list<int> li;
    
    void attachWagonFromLeft(int wagonId)
    {
        li.push_back(wagonId);
        //throw std::logic_error("Waiting to be implemented");
    }
    
    void attachWagonFromRight(int wagonId)
    {
        li.push_front(wagonId);
        //throw std::logic_error("Waiting to be implemented");
    }
    
    int detachWagonFromLeft()
    {
        int data = li.back();
        li.pop_back();
        return data;
        //throw std::logic_error("Waiting to be implemented");
    }
    
    int detachWagonFromRight()
    {
        int data = li.front();
        li.pop_front();
        return data;
    }
};

#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    std::cout << tree.detachWagonFromRight() << "\n"; // 7
    std::cout << tree.detachWagonFromLeft(); // 13
}
#endif
