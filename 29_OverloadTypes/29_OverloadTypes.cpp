//#include <iostream>
//using namespace std;
//
//class Square;
//class Rectangle
//{
//private:
//	int w;
//	int h;
//public:
//	Rectangle() :w(2), h(2) {}
//	explicit Rectangle(int value) :w(value), h(value) {}
//	Rectangle(int w, int h) :w(w), h(h) {}
//	void Show()const
//	{
//		cout << "Width : " << w << " Height : " << h << endl;
//	}
//	//operator typename(){} --1
//	//operator typename()const{} --2
//	//explicit operator typename()const{} --3
//	explicit operator int()
//	{
//		return w * h;
//	}
//
//	operator Square();
//};
//
//class Square
//{
//private:
//	int side;
//public:
//	Square() :side(2) {}
//	Square(int side) :side(side) {}
//	void Show()const
//	{
//		cout << "Width : " << side << " Height : " << side << endl;
//	}
//	operator Rectangle()
//	{
//		return Rectangle(side, side + 10);
//	}
//};
//
//Rectangle::operator Square()
//{
//	return Square(w + h);
//}
//
//
//
//
//int main()
//{
//	int value = 9;//int ---> int
//	double valueDob = value;//int ---> double implicit  -->  standart to standart 
//	Square s(15);
//	Rectangle r(5, 8);//int ---> Rectangle standart to abstract
//	r.Show();
//	//r = 1000;//int ---> Rectangle
//	//r.Show();
//	value = (int)r;//abstract to standart
//	cout << "Square rectangle = " << value << endl;
//
//	r = s;////abstract to abstract
//	r.Show();
//
//	s = r;//abstract to abstract
//	s.Show();
//
//
//
//
//
//}