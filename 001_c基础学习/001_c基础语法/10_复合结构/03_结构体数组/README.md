# 结构体数组
## 定义和使用
```
struct Student{
	char name[20];       // 20
	int num;
	unsigned int age;    // 4
	char tel[15];        // 15   
	float scores[3];     // 12   
	char sex;            // 1    
};

struct Student stu[2] = 
	{
		{.age=20,.num = 15,.name="lcwspr",.scores={1.4, 2.3, 4.3},.tel="122321",.sex='M'},
		{.age=34,.num = 25,.name="hello",.scores={53.2, 53.13, 5},.tel="2392938",.sex='W'}
	};
```

## 学生成绩排序
* [source](file/01_学生成绩.c)