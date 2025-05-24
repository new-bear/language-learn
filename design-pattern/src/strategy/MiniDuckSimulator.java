package strategy;

public class MiniDuckSimulator {
	public static void main() {
		Duck duck = new MallardDuck();
		duck.doFly();
		duck.doQuack();
		duck.display();
	}
}
