#include <algorithm>
#include <cstddef>

// 初始化动态数组
void initDynamicArray(std::size_t size) {
  int *p1 = new int[3];          // 3个未初始化的int
  int *p2 = new int[3]();        // 3个初始化为0的int
  int *p3 = new int[3]{1, 2, 3}; // 3个指定初始化的int

  int *p4 = new int[size]; // 可以动态制定数组大小

  delete[] p1; // 动态数组必须使用 delete[] 释放，按倒序释放
  delete[] p2;
  delete[] p3;
  delete[] p4;
}

// 动态数组与智能指针
void dynamicArrayAndSmartPointer() {
  std::unique_ptr<int[]> p1(new int[3]);

  for (size_t i = 0; i < 3; i++) {
    p1[i] = i; // 使用 [] 访问数组元素
  }

  p1.release(); // 释放数组

  // shared_ptr 支持动态数组较少，尽量不要使用
  std::shared_ptr<int[]> p2(new int[3], [](int *p) { delete[] p; });
  // 通过 shared_ptr 使用动态数组，需要指定删除器；不然会使用 delete
  // 释放动态数组

  for (size_t i = 0; i < 3; i++) {
    *(p2.get() + i) = i; // 不能使用 [] 访问数组元素，需要使用 get()
  }

  p2.reset();
}

// allocator
void allocator() {
  std::allocator<int> alloc;
  int *p1 = alloc.allocate(3); // 分配 3 个 未初始化的int

  // 初始化
  std::allocator_traits<std::allocator<int>>::construct(alloc, p1, 1);      
  std::allocator_traits<std::allocator<int>>::construct(alloc, p1 + 1, 2);   
  std::allocator_traits<std::allocator<int>>::construct(alloc, p1 + 2, 3);

  // 析构
  std::allocator_traits<std::allocator<int>>::destroy(alloc, p1 + 2);
  std::allocator_traits<std::allocator<int>>::destroy(alloc, p1 + 1);
  std::allocator_traits<std::allocator<int>>::destroy(alloc, p1);
  
  alloc.deallocate(p1, 3); // 释放内存
}

int main() {
  initDynamicArray(5);
  dynamicArrayAndSmartPointer();
  allocator();

  return 0;
}