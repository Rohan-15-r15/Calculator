#include <iostream>
#include <sstream>
using namespace std;
//VERSION 1.1V
int main()
{
   string input,temp_num;
   string str_bnumber,str_anumber,get_op;
   string allnumbers[10];

   int len,choose_op;
   int before_op=0;
   int after_op=0;

   char op[]={'*','/','+','-'};

   cout<<"Enter input:";
   cin>>input;
   len=input.length();

   for(int i=0;i<len;i++)
   {
       if (input[i]!='+')
       {
            str_anumber=str_anumber+input[i];
       }
       else if(input[i]=='+')
       {
           get_op=input[i];
           choose_op=2;
           for(int j=i+1;j<len;j++)
           {
              str_bnumber=str_bnumber+input[j];
           }
           break;
       }
   }
        istringstream(str_anumber)>>before_op;
        istringstream(str_bnumber)>>after_op;
        //cout<<temp_num<<endl;
        //cout<<before_op<<endl; //before_op stores the number present before the operator.
        //cout<<after_op<<endl;  //after_op stores the number present after the operator.
        if (choose_op==2)
        {
            //cout<<before_op<<endl<<after_op<<endl; //values before_op and after_op in int form.
            cout<<before_op+after_op;
        }
        return 0;
}
