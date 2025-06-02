package com.example.demo.aop;

//目标类
public class PersonServiceImpl implements PersonService {
	//以下都是目标方法
	@Override
	public String savePerson() {
		System.out.println("添加");
		return "保存成功！";
	}

	@Override
	public void updatePerson() {
		System.out.println("修改");
	}

	@Override
	public void deletePerson() {
		System.out.println("删除");
	}
}
