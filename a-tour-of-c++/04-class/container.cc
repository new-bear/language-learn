#include <iostream>

// 抽象类
class Container {
public:
  virtual double &operator[](int) = 0; // 纯虚函数
  virtual int size() const = 0;
  virtual ~Container(){}; // 虚函数
};

// 派生类
class VectorContainer : public Container { 
private:
    Vector v;
    
public:
    VectorContainer(long s) : v(s) { } 
    
    ~VectorContainer() { // 覆盖了基类的析构函数 Container()
        std::cout << "calling VectorContainer destructor\n";
    }
    
    double& operator[](int i) override {
        return v[i];
    }
    
    int size() const override {
        return v.size();
    }
};

