package strategy;

class MallardDuckTest {
	@org.junit.jupiter.api.Test
	void display() {
		Duck duck = new MallardDuck();
		duck.doFly();
		duck.doQuack();
		duck.display();
	}
}