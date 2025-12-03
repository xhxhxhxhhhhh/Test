#include <iostream>

using namespace std;
class   Car{//汽车类
  public:
    //成员属性
    string color;//颜色
    string brand;//牌子
    string type;//种类
    int year;//年限

    //成员方法
    void (*printCarInfo)(string color, string brand,string type,int year );//函数指针，指向车介绍函数
    void (*CarRun)(string type);//函数指针，指向车运行的函数
    void (*CarStop)(string type);//函数指针，指向车停止的函数


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

    class Car *AodiA6 = new Car();//给指针变量开辟空间
    AodiA6->color="黑色";
    AodiA6->brand="奥迪";
    AodiA6->type="A6";
    AodiA6->year=2008;

    AodiA6->printCarInfo=AodiA6printCarInfo;
    AodiA6->printCarInfo(AodiA6->color,AodiA6->brand,AodiA6->type,AodiA6->year);


    return 0;
}
