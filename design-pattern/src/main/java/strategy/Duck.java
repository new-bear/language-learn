package strategy;

public abstract class Duck {
	FlyBehavior flyBehavior; // 行为类接口
	QuackBehavior quackBehavior;

	public Duck() {
	}

	public abstract void display();

	public void swim() {
		System.out.println("I can swim!");
	}

	public void doFly() {
		flyBehavior.fly();
	}

	public void doQuack() {
		quackBehavior.quack();
	}

	public void setFlyBehavior(FlyBehavior fb) {
		flyBehavior = fb;
	}

	public void setQuackBehavior(QuackBehavior qb) {
		quackBehavior = qb;
	}
}
