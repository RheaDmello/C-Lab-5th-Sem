/*Write a C++ program using class to process shopping list for a
departmental store. The list include the details such as the code number
and price of each item and perform the operations like adding, deleting
items to the list and printing the total value of a order.*/

#include<iostream>
using namespace std;

class shoppinglist{
    public:
    int itemcount=0;
    int code[100];
    float price[100];

    void additem(){
        cout<<"Enter item code:"<<endl;
        cin>>code[itemcount];
        cout << "Enter item price:" << endl;
        cin>>price[itemcount];
        itemcount++;
    }

    void deleteitem()
    {
        int itemcode;
        cout << "Enter item code:" << endl;
        cin >> itemcode;
        for(int i=0;i<itemcount ;i++){
            if(code[i]==itemcode){
                for(int j=i;j<itemcount;j++){
                    code[j]=code[j+1];
                    price[j]=price[j+1];
                }
                itemcount--;
                cout<<"Items deleted. \n";
                return;
            }
            
        } cout<<"Items not found. \n";
    }
    void totalvalue(){
        float total=0;
        for(int i=0;i<itemcount;i++){
            total=total+price[i];
        } cout<<"Total value of the order:"<<total<<endl;
    }
    void display(){
        cout<<"Item code\tPrice"<<endl;
        for(int i=0;i<itemcount;i++){
            cout<<code[i]<<"\t\t"<<price[i]<<endl;
        }
    }
};

int main(){
    shoppinglist s;
    int choice;
    while(1){
        cout<<"1.Add item\n2.Delete item\n3.Display\n4.Total value\n5.Exit\n";
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            s.additem();
            break;
            case 2:
            s.deleteitem();
            break;
            case 3:
            s.display();
            break;
            case 4:
            s.totalvalue();
            break;
            case 5:
            return 0;
            default:
            cout<<"Invalid choice. \n";
        }
    }
    return 0;
}
