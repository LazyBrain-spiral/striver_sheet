
//fibonachi
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }

       return fib(n - 1) + fib(n - 2);
    }
};

int
main()
    {
        int n;
        cin >> n;

        int fib(n);
    }



//Hashing:will this work

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n; //original array to get input from
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[12] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = hash[arr[i]]+1;
    }
    //hashing gets added here.basically for precomputing

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }

    //this is the output on how many times it has done it already
    
}
<<<<<<< HEAD


#character hashing
=======
>>>>>>> 612c14cb0b717530e4f43dca9e073a2e42f3a720
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char c;
        cin >> c;

        // fetch
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}
<<<<<<< HEAD
=======


//sorting start(mostly was working on a personal project today)
>>>>>>> 612c14cb0b717530e4f43dca9e073a2e42f3a720
