#include <iostream>
using namespace std;

int main (){
	
	/**
		#include 包含指令
			--#include < 文件名 >
				按标准方式操作，文件位于C++系统目录的include子目录下 
			--#include " 文件名 "
			 	先在当前目录下搜索若没有，再按标准方式搜索
		
		
		#if  #else  #endif  #elif 
		 
		 第一种方式
		 	# if 常量表达式
			 // 当 “常量表达式 ”非零是编译 
			 程序正文
			#  endif
			 ······· 
			 	 
		第二种方式
			#if  常量表达式
				程序正文 		 // 当 “常量表达式 ”非零是编译 
			#else 
				程序正文		 // 当 “常量表达式 ”为零是编译 
			#endif
			
		第三种方式
		
			#if   常量表达式1
			       程序正文1  //当“ 常量表达式1”非零时编译
			#elif  常量表达式2
			       程序正文2  //当“ 常量表达式2”非零时编译
			#else
			       程序正文3  //其它情况下编译
			#endif
		
		
		#ifdef  #else  #endif    #ifndef 
		
		第一种方式 
			#ifdef  标识符     //如果“标识符”经#defined定义过，且未经undef删除，则编译程序段1，否则编译程序段2。
				程序段1	
			#else 
				程序段二 
			#endif
		
		第二种方式
			#ifndef   标识符
			       程序段1
			#else
			       程序段2
			#endif
			
			如果“标识符”未被定义过，则编译程序段1，否则编译程序段2。
			多用于头文件中，避免重复编译 
			
			  
	**/ 
	
	return 0;
} 
