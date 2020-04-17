#include<iostream>
using namespace std;
class candy_machine
{
protected:
	int candies, chips, gum, cookies,amount;
public:
	candy_machine()
	{
		candies = 10;
		chips = 10;
		gum = 10;
		cookies = 10;
		amount = 0;
	}
	void display()
	{
		cout << "\t-:Candy Machine:-" << endl;
		cout << "Serial No  Product\t" << "Price\t" <<"Items"<< endl;
		cout << "1\t   Candies\t" << "5\t" <<candies<< endl;
		cout << "2\t   Chips\t" << "10\t" <<chips<< endl;
		cout << "3\t   Gum\t\t" << "10\t" <<gum<< endl;
		cout << "4\t   Cookies\t" << "20\t" <<cookies<< endl;
	}
	void selection()
	{
		int N,am;
		int money;
		int select;
		cout << "please enter your selection(1 for candies and so on):" << endl;
		cin >> select;
		if (!cin << select)
		{
			cout << "Invalid number!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			selection();
		}
		else
		{
			label:
			cout << "enter number of item:" << endl;
			cin >> N;
			if(!cin>>N)
			{ 
				cout << "Invalid number!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				goto label;
			}
			else
			{
				switch (select)
				{
				case 01:
					money = 5 * N;
					if (N <= candies)
					{
						cout << "Your amount is: " << money << endl;
						cout << "Enter Amount: " << endl;
						cin >> am;
						if (am >= money)
						{
							accept_money(money);
							Dispenser(N, &candies);
							cout << "Amount added!" << endl;
							cout << "Thanks for shopping!" << endl;
						}
						else
							cout << "you enter less amount!" << endl;
						selection();
					}
					else
						cout << "less product is available!" << endl;
					break;
				case 02:
					money = 10 * N;
					if (N <= chips)
					{
						cout << "Your amount is: " << money << endl;
						cout << "Enter Amount: " << endl;
						cin >> am;
						if (am >= money)
						{
							accept_money(money);
							Dispenser(N, &chips);
							cout << "Amount added!" << endl;
							cout << "Thanks for shopping!" << endl;
						}
						else
							cout << "you enter less amount!" << endl;
						selection();
					}
					else
						cout << "less product is available!" << endl;
					break;
				case 03:
					money = 10 * N;
					if (N <= gum)
					{
						cout << "Your amount is: " << money << endl;
						cout << "Enter Amount: " << endl;
						cin >> am;
						if (am >= money)
						{
							accept_money(money);
							Dispenser(N, &gum);
							cout << "Amount added!" << endl;
							cout << "Thanks for shopping!" << endl;
						}
						else
							cout << "you enter less amount!" << endl;
						selection();
					}
					else
						cout << "less product is available!" << endl;
					break;
				case 04:
					money = 20 * N;
					if (N <= cookies)
					{
						cout << "Your amount is: " << money << endl;
						cout << "Enter Amount: " << endl;
						cin >> am;
						if (am >= money)
						{
							accept_money(money);
							Dispenser(N, &cookies);
							cout << "Amount added!" << endl;
							cout << "Thanks for shopping!" << endl;
						}
						else
							cout << "you enter less amount!" << endl;
						selection();
					}
					else
						cout << "less product is available!" << endl;
					break;
				default:
					cout << "You enter invalid number!" << endl;
				}
			}
		}
	}
	void accept_money(int M)
	{
		amount = +M;
	}
	void cash_register()
	{
		cout << "Amount is: " << amount << endl;
	}
	void Dispenser(int n,int *x)
	{
		*x = *x - n;
	}

};
int main()
{
	candy_machine obj;
	int n=1;
	obj.display();
	while (n)
	{
		obj.selection();
		cout << "For continue press 1 for teminate press 0:" << endl;
		cin >> n;
	}
	system("pause");
}