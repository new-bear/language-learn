package strategy;

class MallardDuckTest {
	@org.junit.jupiter.api.Test
	void display() {
		Duck duck1 = new MallardDuck();
		duck1.doFly();
		duck1.doQuack();
		duck1.display();

//		Duck duck2 = new ModelDuck();
//		duck2.doFly(); // 一开始，模型鸭不会飞
//		duck2.setFlyBehavior(new FlyWithWings());
//		duck2.doFly(); // 模型鸭可以飞了
	}
}