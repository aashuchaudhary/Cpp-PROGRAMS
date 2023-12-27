// problem 1:

/* #include<iostream>
using namespace std;
int main(){
    char c[]="GATE2024";
    char *p=c;
    cout<<p+p[3]-p[1]<<endl;
    cout<<c;
} */

// problem 2:
/* #include<iostream>
using namespace std;
void second(int*p1,int *p2)
{
    p1=p2;
    *p1=2;
}
int main(){
    int i=0,j=1;
    second(&i,&j);
    cout<<i<<" "<<j;
}
 */

// problem 03:

/* #include<iostream>
using namespace std;

int main(){
    int *ptr;
    int x=0;
    ptr=&x;
    int y=*ptr;
    *ptr=1;
    cout<<x<<" "<<y;
    }
    */

//    problem 04

/* #include<iostream>
using namespace std;

int main(){
    int a=5,b=10;
    int &name=a;
    int *ptr=&a;
    (*ptr)++;
    ptr=&b;
    *ptr =*ptr+5;
    name+=5;
    cout<<a<<" "<<b;
} */

// problem 05:

/* #include <iostream>
using namespace std;
int four(int x, int *py, int **ppz)
{
    int y, z;
    int **ppz+=1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    cout << four(c, b, a);
} */


// PROBLRM 06

/*  #include<iostream>
using namespace std;
void five(char*str1,char*str2)
{
    while((*str1=*str2))
    {
        str1++,str2++;
    }
}
int main(){
    char first[]="APPU";
    char second[]="UPPA";
    five(first,second);
    cout<<first;
}  */


// 
 #include<iostream>
using namespace std;

int main(){
    int n=10;
    int *p=&n;
    int **q=&p;
    cout<<p<<endl;
        
} 

