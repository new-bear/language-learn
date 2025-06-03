package command;

public class TestTest {
	@org.junit.jupiter.api.Test
	void test() {
		SimpleRemoteController controller = new SimpleRemoteController();
		controller.setCommand(new LightOnCommand(new Light()));
		controller.buttonWasPressed();
	}
}
