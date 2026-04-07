 //n times the word

// #include <iostream>
// using namespace std;


// void print()
// {
//     int n;
//     cout << "Enter how many times to print: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Hello World" << endl;
//     }
// }

// int main()
// {
//     print();
//     return 0;
// }


//n times( using recursion)

// #include <iostream>
// using namespace std;

// void print(int i,int p)
// {
//     if(i>p){
//         return;
//     }
//     cout << "aby" << endl;
//     print(i+1,p);
// }

// int main()
// {
//     int p;
//     cin >> p; 

//     print(1,p);
// }

//from 1 to n

#include <iostream>
 using namespace std;

 void print(int i , int n)
 {
    if(i>n){
        return;
    }

    cout << i;
    print(i+1,n);
 }

 int main()
 {
    int n;
    cin >> n; 
    print(1,n);
 }

 // from n to 1
#include <iostream>
 using namespace std;

 void print(int i)
 {
     if (i<1)
     {
         return;
     }

     cout << i;
     print(i-1);
 }

 int main()
 {
     int i;
     cin >> i;
     print(i);
 }