#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> myVector;
    vector<string> myVector2;
    string row;
/*########################################################################*/
        cout<<"Enter values for array 1: "<<"\n";

        for(int i=0; i<9; i++)
            {
                cin >> row;
                myVector.push_back(row);
            }
                    cout<<"\nArray 1: "<<"\n";
            for(unsigned int i=0;i<9;i++)
                {
                    cout<<myVector[i]<<" ";
                }
/*############################################################################*/
         int quantity;
            while(true)
                    {
                        cout<<"\n\nEnter how much values in array 2(0-9): ";

                        cin>>quantity;
                        if(quantity>=0&&quantity<=9)
                            {
                                break;
                            }
                        cout<<"\nInvalid value,try again"<<endl;
                    }

         if(quantity==0)
            {
                    cout<<"\nArray 2 is empty."<<endl;
            }
            else
                {
                    cout<<"\nEnter values for array 2: \n";
                        for(int i=0;i<quantity;i++)
                            {
                                cin>>row;
                                myVector2.push_back(row);
                            }
                    cout<<"\nArray 2: "<<"\n";
                            for(size_t i=0;i<myVector2.size();i++)
                                {
                                    cout<<myVector2.at(i)<<" ";
                                }
                }
/*############################################################################*/
string result;
size_t j=0;

    if(!myVector2.empty())
        {
            while(j<myVector.size())
            {
                for(size_t i=0;i<myVector2.size();i++)
                {
                    if(myVector2.at(i)==myVector.at(j))
                    {
                        result+="1";
                        break;
                    }
                    else
                        {
                        if(i+1==myVector2.size())
                            {
                                result+="0";
                                break;
                            }
                        }
                }

                j++;
            }

        }
        else
            {
                for(unsigned int i=0;i<myVector.size();i++)
                    {
                        result+="0";
                    }
            }

cout<<"\nResult:";
cout<<result<<endl;

system("pause");
}
