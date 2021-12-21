# STL 总结

[toc]

## vector

- 变长数组，倍增的思想
- 系统为某一程序分配空间时，所需时间与空间大小无关、与申请次数有关。所以 vector 每次长度不足时，会再申请长度\*2 的空间，然后将原先内容复制过来
- size() 返回元素的个数
- empty() 返回是否为空
- clear() 清空
- front()/back()
- push_back()/pop_back()
- begin()/end()
- 支持比较运算

```C++
// 两种遍历方式
vector<int> a;
for(int i = 0; i < a.size(); i++) cout<<a[i];
for(vector<int>::iterator i = a.begin(); i != a.end(); i++) cout<<*i;
//上面的写法也可以用下面代替
for(auto<int>::iterator i = a.begin(); i != a.end(); i++) cout<<*i;
for(auto x:a) cout<<x;

// vector比较
vector<int> a(4,3), b(3, 4);
if(a < b) puts("a < b");
```

## pair

- 存储一个二元组 pair<int, string> p
- first,第一个元素 p.first
- second, 第二个元素 p.second
- 支持比较运算，以 first 为第一关键字，second 为第二关键字（字典序）

```C++
// pair初始化
vector<int, string> p;
p = make_pair(10, "ls");
p = {10, "ls"};
```

## string

- 字符串，substr(), c_str()
- size(), empty(), clear()
- substr(开始位置，长度)
- length()

## queue

- push(),front(), pop()
- queue 没有 clear

## priority_queue

- 优先队列, 默认是大根堆, push(), pop(), top()
- 使用小根堆的技巧
  1. 插入-x
  2. 定义小根堆 `priority_queue<int, vector<int>, greater<int>> heap`;

## stack

- 栈，push()， top()，pop()

## deque

- 双端队列(加强版的 vector)
- 不常用，时间效率非常低
- size(),empty(),clear(),
- front()
- back()
- push_back()/pop_back()
- push_front()/pop_front()
- begin()/end()

## set,map,multiset,multimap

- 基于平衡二叉树（红黑树），动态维护有序序列
- 以上四者维护的都是一个有序序列
- size()/empty()/clear()
- begin()/end() 支持++、-- 时间复杂度 O(logn)

### set/multiset

- set 与 multiset，set 不能有重复元素，后者可以
- insert() 插入一个数
- find() 查找一个数
- count() 返回某一个数的个数
- erase()  
  (1) 输入是一个数，删除所有 x O(k + logn) k 是 x 的个数  
  (2) 输入一个迭代器，删除这个迭代器
- lower_bound()/upper_bound()  
  (1) lower_bound(x) 返回大于等于 x 最小的数的迭代器  
  (2) upper_bound(x) 返回大于 x 最小的数的迭代器

### map/multimap

- insert() 插入的数是一个 pair
- erase() 输入的参数是 pair 或者迭代器
- find()
- [] 时间复杂度是 O(logn)

## unordered_set,unordered_map,unordered_multiset,unordered_multimap

和上面类似，增删改查时间复杂度是 O(1)  
不支持 lower_bound()/upper_bound(),迭代器的++\--

- 哈希表

## bitset

- 压位
- bitset<10000> S;
- ~, &, |, ^
- `>>`, <<
- ==, !=
- []
- count() 返回有多少个 1
- any() 判断是否至少有一个 1
- none() 判断是否全为 0
- set() 把所有位置成 1
- set(k, v) 把第 k 位变成 v
- reset() 把所有位变成 0
- flip() 等价于~
- flip(k) 把第 k 位取反

```

```
