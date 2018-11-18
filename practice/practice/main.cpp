#include <iostream>
#include <vector>

using namespace std;

class MergeNames
{
public:
    static vector<string> unique_names(const vector<string>& names1, const vector<string>& names2)
    {
        vector<string> vt;
        int flag = 0;
        
        for(int i=0; i<names1.size(); i++){
            vt.push_back(names1[i]);
        }
        
        for(int i=0; i< names2.size(); i++){
            
            vt.push_back(names2[i]);
        }
        
        // 중복된 이름 모두 삭제
        for(int i=0; i<vt.size(); i++){
            for(int j=i+1; j< vt.size(); j++){
             
                if(vt[i] == vt[j]){
                    vt.erase(vt.begin()+j);
                    
                }
            }
        }
        
        return vt;
    }
};

#ifndef RunTests
int main()
{
    vector<string> names1 = {"Ava", "Emma", "Olivia"};
    vector<string> names2 = {"Olivia", "Sophia", "Emma"};
    
    vector<string> result = MergeNames::unique_names(names1, names2);
    for(auto element : result)
    {
        cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
