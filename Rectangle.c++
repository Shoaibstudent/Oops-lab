#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int width;
    int area;
  public:
    Rectangle() {
      length = 0;
      width = 0;
      area = 0;
    }
    Rectangle(int l) {
      length = l;
      width = 0;
      area = 0;
    }
    Rectangle(int l, int w) {
      length = l;
      width = w;
      area = 0;
    }
    void sqArea() {
      area = length * width;
    }
    void rectArea() {
      area = length * width;
    }
    int getSqArea() {
      return area;
    }
    int getRectArea() {
      return area;
    }
};

int main() {
  Rectangle r1;
  Rectangle r2(5);
  Rectangle r3(5, 10);

  r1.sqArea();
  cout << "Area of Rectangle r1 is: " << r1.getSqArea() << endl;

  r2.rectArea();
  cout << "Area of Rectangle r2 is: " << r2.getRectArea() << endl;

  r3.rectArea();
  cout << "Area of Rectangle r3 is: " << r3.getRectArea() << endl;

  return 0;
}
