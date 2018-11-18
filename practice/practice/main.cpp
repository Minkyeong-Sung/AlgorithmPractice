#include <iostream>
#include <string>

using namespace std;

class TextInput
{
public:
    string value;
    virtual void add(char c) {
        value+= c;
    }
    
    string getValue() { return value; }
};

class NumericInput : public TextInput {
    
    void add(char c){
        
        if( c >= '0'  && c <= '9'){
            value += c;
        }
    }
    
};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif
