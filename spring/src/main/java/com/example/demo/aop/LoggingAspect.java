package com.example.demo.aop;

import org.aspectj.lang.annotation.Aspect;
import org.aspectj.lang.annotation.Before;
import org.springframework.stereotype.Component;

@Aspect
@Component
public class LoggingAspect {
    
    @Before("execution(* com.example.demo.service.*.*(..))")
    public void logBeforeServiceMethods() {
        System.out.println("AOP: Before executing service method");
    }
}