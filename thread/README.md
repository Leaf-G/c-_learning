# c++多线程

## std::thread

**thread成员函数**

**构造&析构函数**

|                             函数                             | 类别           |                    作用                    |
| :----------------------------------------------------------: | -------------- | :----------------------------------------: |
|                      thread() noexcept                       | 默认构造函数   |         创建一个线程， 什么也不做          |
| template <class Fn, class… Args> explicit thread(Fn&& fn, Args&&… args) | 初始化构造函数 | 创建一个线程， 以`args`为参数 执行`fn`函数 |
|                thread(const thread&) = delete                | 复制构造函数   |                 （已删除）                 |
|                 thread(thread&& x) noexcept                  | 移动构造函数   |   构造一个与`x` 相同的对象,会破坏`x`对象   |
|                          ~thread()                           | 析构函数       |                  析构对象                  |

**常用成员函数**

|              函数               |                             作用                             |
| :-----------------------------: | :----------------------------------------------------------: |
|           void join()           |               等待线程结束并清理资源（会阻塞）               |
|         bool joinable()         |                 返回线程是否可以执行join函数                 |
|          void detach()          | 将线程与调用其的线程分离，彼此独立执行（此函数必须在线程创建时立即调用，且调用此函数会使其不能被join） |
|    std::thread::id get_id()     |                          获取线程id                          |
| thread& operator=(thread &&rhs) | 见移动构造函数 （如果对象是joinable的，那么会调用`std::terminate()`结果程序） |

