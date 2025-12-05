#include <iostream>

using namespace std;
class   Car{//汽车类
  public:
    //成员属性
    //成员数据
    string color;//颜色
    string brand;//牌子
    string type;//种类
    int year;//年限

    //成员方法
    //其实也是成员数据，指针变量，指向函数的变量，并非真正的函数成员
    void (*printCarInfo)(string color, string brand,string type,int year );//函数指针，指向车介绍函数
    void (*CarRun)(string type);//函数指针，指向车运行的函数
    void (*CarStop)(string type);//函数指针，指向车停止的函数

    void realPrintCarInfo();//声明成员函数

};
void Car::realPrintCarInfo()
{
   cout<<"车的品牌是"<<brand<<"型号是"<<type<<"颜色是"<<color<<"年限是"<<year<<endl;

};
void BWMThreeprintCarInfo(string color, string brand,string type,int year )
{
    cout<<"车的品牌是"<<brand<<"型号是"<<type<<"颜色是"<<color<<"年限是"<<year<<endl;

};
void AodiA6printCarInfo(string color, string brand,string type,int year )
{
    cout<<"车的品牌是"<<brand<<"型号是"<<type<<"颜色是"<<color<<"年限是"<<year<<endl;

};

int main()
{   //对象实例化
    class Car BWMthree;
    BWMthree.color="白色";
    BWMthree.brand="宝马";
    BWMthree.type="3C";
    BWMthree.year=2023;
    BWMthree.printCarInfo=BWMThreeprintCarInfo;
    BWMthree.printCarInfo(BWMthree.color, BWMthree.brand,BWMthree.type,BWMthree.year);
    BWMthree.realPrintCarInfo();

    class Car *AodiA6 = new Car();//给指针变量开辟空间
    AodiA6->color="黑色";
    AodiA6->brand="奥迪";
    AodiA6->type="A6";
    AodiA6->year=2008;

    AodiA6->printCarInfo=AodiA6printCarInfo;
    AodiA6->printCarInfo(AodiA6->color,AodiA6->brand,AodiA6->type,AodiA6->year);
    AodiA6->realPrintCarInfo();


    return 0;
}
