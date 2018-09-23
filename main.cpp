//
//  main.cpp
//  Codeinterview
//
//  Created by Payal Pawar on 9/19/18.
//  Copyright © 2018 Payal Pawar. All rights reserved.
//

#include <iostream>
using namespace std;
bool all_unique(string given)
{
    for(int i =0; i<given.size(); i++)
    {
        bool found = false;
        char c = given[i];
        for(int j = 0; j<given.size();j++ )
        {
            if(!found&& c == given[j]){
                found =true;
            }
            else if(found&& c == given[j]){
                return false;
            }
                
                
            
                
        }
    
    }
    return true;
}

bool is_permutation(string a, string b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for(int i=0; i< a.size();i++)
    {
        int count_a = 0, count_b =0;
        for (int j=0; j<a.size(); j++) {
            
            if (a[i]==a[j])
                    
                {
                    count_a++;
                }
            if (a[i]== b[j]){
                    count_b++;
                }
            
                   }
        if(count_a!= count_b)
        {
           return false;
        }

        
    }
    return true;
    
}
string URLify (string a, int b){
    int true_len = b;
    for(int i =0; i<true_len;i++) {
        if(a[i]== ' ') {
           a[i] = '0';
           a.insert(i, "%2");
           i += 2;
        true_len += 2;
        }
    }
    return a;
    
}


void test_allunique(){
    string a;
    cout<< all_unique("husky");
}

void test_ispermutation() {
    string fleep, flarp;
    for(int i=0; i<2;i++){
    
    cin >> fleep >> flarp;
    
    cout << is_permutation(fleep, flarp);
    
        cout << "\n";
    }
}

void test_URLify(){
    cout << URLify("get  character  now", 18);
    cout << "\n";

}




int main() {
    //test_allunique();
    //test_ispermutation();
    //test_URLify();
    cin.get();
    
}
