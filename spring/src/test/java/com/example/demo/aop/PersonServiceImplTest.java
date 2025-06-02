package com.example.demo.aop;

import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class PersonServiceImplTest {
	@Test
	public void test(){
		ApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");
		PersonService proxyPersonService = (PersonService) context.getBean("personService");
		String returnValue = proxyPersonService.savePerson();
		System.out.println(returnValue);
	}
}