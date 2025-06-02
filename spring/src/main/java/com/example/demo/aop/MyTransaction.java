package com.example.demo.aop;

//增强类
public class MyTransaction {
	//增强动作，开启事务
	public void beginTransaction() {
		System.out.println("开启事务");
	}

	//增强动作，提交事务
	public void commit() {
		System.out.println("提交事务");
	}
}
