#include<iostream>
#include<cstring>
using namespace std;
int myMax(int x,int y)
{
    if(x>y) return x;
    else  return y;
}
char *myMax(char *first,char *second)
 {
    if(strcmp(first,second)>0)  return first;
    else return second;
 }
int option=1;
int main()
{   
    
    switch (option)
    {
    case 1:
        //���غ�������һ���������Զ����ͬ���͵ı����������㡣
        cout<<myMax(1,2)<<endl;
        cout<<myMax('a','T')<<endl;
        break;
    case 2:
    default:
        break;
    }

    cout<<""<<endl;
    return 0;
}