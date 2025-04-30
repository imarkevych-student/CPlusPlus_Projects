#include <iostream>
#include <string>
using namespace std;

struct Vagon
{
	int number;
	int amount_seats;
	int amount_sitters;
	void Print()
	{
		cout << "Car number:" << number << '\n';
		cout << "Amount of seats: " << amount_seats << '\n';
		cout << "Amount of sitters: " << amount_sitters << '\n';
	}
};

class Train
{
	string model;
	int amount_vagons;
	Vagon* vagon;
public:
	Train()
	{
		model = "no model";
		amount_vagons = 0;
		vagon = nullptr;

	}
	Train(string model)
	{
		this->model = model;
		amount_vagons = 0;
		vagon = nullptr;
	}
	void Show()
	{
		cout << "\nModel: " << model << '\n';
		cout << "Amount of cars: " << amount_vagons << '\n';
		if (amount_vagons != 0)
		{
			for (int i = 0; i < amount_vagons; i++)
			{
				cout << "Car " << i + 1 << ':' << '\n';
				vagon[i].Print();
			}
		}
	}

	void AddVagon(int n, int p, int pl)
	{
		amount_vagons++;
		Vagon* temp = new Vagon[amount_vagons];
		for (int i = 0; i < amount_vagons - 1; i++)
		{
			temp[i] = vagon[i];
		}
		temp[amount_vagons - 1] = Vagon{ n,p,pl };
		if (vagon != nullptr)
			delete[] vagon;
		/*	temp[amount_vagons - 1].number = amount_vagons;
			cout << "Enter amount of seats at car: "; cin >> temp[amount_vagons - 1].amount_seats;
			while (temp[amount_vagons - 1].amount_seats < 0)
			{
				cout << "Enter amount of seats at car: "; cin >> temp[amount_vagons - 1].amount_seats;
			}
			cout << "Enter amount of sitters at car: "; cin >> temp[amount_vagons - 1].amount_sitters;
			while (temp[amount_vagons - 1].amount_sitters > temp[amount_vagons - 1].amount_seats || temp[amount_vagons - 1].amount_sitters < 0)
			{
				cout << "Enter amount of sitters at car: "; cin >> temp[amount_vagons - 1].amount_sitters;
			}*/
		vagon = temp;
	}

	void AddSitter(int number)
	{
		if (amount_vagons != 0)
		{
			for (int i = 0; i < amount_vagons; i++)
			{
				if (vagon[i].number == number)
				{
					if (vagon[i].amount_sitters == vagon[i].amount_seats)
					{
						cout << "In car lack of seats" << endl;
						return;
					}
					else
					{
						vagon[i].amount_sitters++;
						cout << "A passanger come in the car" << endl;
						return;
					}
				}
			}
		}
		else
		{
			cout << "There is no cars" << '\n';
		}
	}
	Train(const Train& other)
	{
		this->model = other.model;
		this->amount_vagons = other.amount_vagons;
		this->vagon = new Vagon[other.amount_vagons];
		for (int i = 0; i < other.amount_vagons; i++)
		{
			this->vagon[i] = other.vagon[i];
		}
	}
	//prefix 
	void operator++()
	{
		for (int i = 0; i < amount_vagons; i++)
		{
			vagon[i].amount_sitters++;
		}
	}
	// []    ()
	Vagon getVagon(int index)
	{
		if (index < 0 || index > amount_vagons)return Vagon();
		return vagon[index];
	}
	Vagon operator[](int index)
	{
		if (index < 0 || index > amount_vagons)return Vagon();
		return vagon[index];
	}
	void ChangePassangers(int count)
	{
		for (int i = 0; i < amount_vagons; i++)
		{
			vagon[i].amount_sitters += count;
		}
	}
	void operator()(int count)
	{
		for (int i = 0; i < amount_vagons; i++)
		{
			vagon[i].amount_sitters += count;
		}
	}
	void operator()(int number_vagon, int count)
	{
		for (int i = 0; i < amount_vagons; i++)
		{
			if (vagon[i].number == number_vagon)
				vagon[i].amount_sitters += count;
		}
	}
	~Train()
	{
		if (vagon != nullptr)
			delete[] vagon;
	}
	operator string()
	{
		//string res = "";
		//for (int i = 0; i < amount_vagons; i++)
		//{
		//	//"" + 1 + " " + 2 + " " ;
		//	res += to_string( vagon[i].number) + " ";
		//}
		//return res;
		return model;
	}
};


int main()
{
	Train t;
	//t.Show();
	t.AddVagon(1, 10, 3);
	t.AddVagon(2, 15, 4);
	t.Show();
	/*t.AddSitter(1);
	t.Show();
	Train copy(t);
	t.Show();*/
	cout << "----------------------" << endl;
	++t;
	t.Show();
	Vagon v = t.getVagon(0);
	v.Print();
	v = t[1];
	v.Print();

	t.ChangePassangers(5);
	t.Show();
	t(5);
	t.Show();
	t(1, 50);
	v = t[0];
	v.Print();

	cout << (string)t << endl;
}