#include<iostream>
using namespace std;
int main()
{
    int qty;
    int choice;
    int Qrooms=0 ,Qpasta=0 ,Qburger=0 ,Qnoodles=0 ,Qshake=0 ,Qchicken=0;// for quantity
    int Srooms=0 ,Spasta=0 ,Sburger=0 ,Snoodles=0 ,Sshake=0 ,Schicken=0;// for item sold
    int Total_rooms=0 ,Total_pasta=0 ,Total_burger=0 ,Total_noodles=0 ,Total_shake=0 ,Total_chicken=0;// for price

    cout<<"\n********** Quantity of items we have**********";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken:";
    cin>>Qchicken;
    cout<<"************************************************";
    while(1)
    {
    cout<<"\n\tPlease select from the menu options:";
    cout<<"\n1->Rooms\n2->Pasta(Rs.30)\n3->Burger(Rs.50)\n4->Noodles(Rs.120)\n5->Shake(Rs.40)\n6->Chicken(Rs.150)";
    cout<<"\n7->Information regarding sales and collection";
    cout<<"\n8->Exit\n9->Amount";
    
    cout<<"\nEnter a choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"\n\nEnter the number of rooms you want:";
                cin>>qty;
                if(Qrooms-Srooms>=qty)
                {
                    Srooms=Srooms+qty;
                    Total_rooms=Total_rooms+qty*1200;
                    cout<<"\n\n\t\t"<<qty<<" room/rooms have been alloted to you!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qrooms-Srooms<<" Rooms remaining in hotel";
                    break;
                }
        case 2:cout<<"\n\nEnter pasta quantity:";
                cin>>qty;
                if(Qpasta-Spasta>=qty)
                {
                    Spasta=Spasta+qty;
                    Total_pasta=Total_pasta+qty*30;
                    cout<<"\n\t"<<qty<<" Pasta is the order!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
                    break;
                }
        case 3:cout<<"\n\nEnter burger quantity:";
                cin>>qty;
                if(Qburger-Sburger>=qty)
                {
                    Sburger=Sburger+qty;
                    Total_burger=Total_burger+qty*50;
                    cout<<"\n\t"<<qty<<" Burger is the order!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
                    break;
                }
        case 4:cout<<"\n\nEnter noodles quantity:";
                cin>>qty;
                if(Qnoodles-Snoodles>=qty)
                {
                    Snoodles=Snoodles+qty;
                    Total_noodles=Total_noodles+qty*120;
                    cout<<"\n\t"<<qty<<" Noodles is the order!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
                    break;
                }
        case 5:cout<<"\n\nEnter Shake quantity:";
                cin>>qty;
                if(Qshake-Sshake>=qty)
                {
                    Sshake=Sshake+qty;
                    Total_shake=Total_shake+qty*40;
                    cout<<"\n\t"<<qty<<" Shake is the order!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qshake-Sshake<<"Shake remaining in hotel";
                    break;
                }
        case 6:cout<<"\n\nEnter Chicken quantity:";
                cin>>qty;
                if(Qshake-Sshake>=qty)
                {
                    Schicken=Schicken+qty;
                    Total_chicken=Total_chicken+qty*150;
                    cout<<"\n\t"<<qty<<" Chicken is the order!";
                    break;
                }
                else
                {
                    cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken remaining in hotel";
                    break;
                }
        case 7:cout<<"\n\t\tDetails of sales andcollection";
                cout<<"\n\nNumber of Rooms we had:"<<Qrooms;
                cout<<"\n\nNUmber of Rooms we gave for rent"<<Srooms;
                cout<<"\n\nRemaining Rooms:"<<Qrooms-Srooms;
                cout<<"\n\nTotal Rooms collection of the day:"<<Total_rooms;

                cout<<"\n\nNumber of Pasta we had:"<<Qpasta;
                cout<<"\n\nNUmber of Pasta we sold"<<Spasta;
                cout<<"\n\nRemaining Pasta:"<<Qpasta-Spasta;
                cout<<"\n\nTotal Pasta collection of the day:"<<Total_pasta;

                cout<<"\n\nNumber of Burger we had:"<<Qburger;
                cout<<"\n\nNUmber of Burger we sold"<<Sburger;
                cout<<"\n\nRemaining Burger:"<<Qburger-Sburger;
                cout<<"\n\nTotal Burger collection of the day:"<<Total_burger;

                cout<<"\n\nNumber of Noodles we had:"<<Qnoodles;
                cout<<"\n\nNUmber of Noodles we sold"<<Snoodles;
                cout<<"\n\nRemaining Noodles:"<<Qnoodles-Snoodles;
                cout<<"\n\nTotal Noodles collection of the day:"<<Total_noodles;

                cout<<"\n\nNumber of Shake we had:"<<Qshake;
                cout<<"\n\nNUmber of Shake we sold"<<Sshake;
                cout<<"\n\nRemaining Shake:"<<Qshake-Sshake;
                cout<<"\n\nTotal Shake collection of the day:"<<Total_shake;

                cout<<"\n\nNumber of Chicken we had:"<<Qchicken;
                cout<<"\n\nNUmber of Chicken we sold"<<Schicken;
                cout<<"\n\nRemaining Chicken:"<<Qchicken-Schicken;
                cout<<"\n\nTotal Chicken collection of the day:"<<Total_chicken;

                
                cout<<"\nTotal Collection for the day:"<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
                break;
        case 8:exit(0);
        break;
        case 9:cout<<"\nPasta[Rs.-30]:"<<"Quantity-"<<Spasta<<"\t->"<<Total_pasta;
                cout<<"\nBurger[Rs.-50]:"<<"Quantity-"<<Sburger<<"\t->"<<Total_burger;
                cout<<"\nNoodles[Rs.-120]:"<<"Quantity-"<<Snoodles<<"\t->"<<Total_noodles;
                cout<<"\nShake[Rs.-40]:"<<"Quantity-"<<Sshake<<"\t->"<<Total_shake;
                cout<<"\nChicken[Rs.-150]:"<<"Quantity-"<<Schicken<<"\t->"<<Total_chicken;
                cout<<"\nTotal Amount of Products-:"<<Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
                cout<<"\n Total Amount of Rooms:"<<Total_rooms;
                cout<<"Total ="<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
        break;
        default:cout<<"Please select the choices mentioned above";
        break;
    }
    }
    return 0;
}