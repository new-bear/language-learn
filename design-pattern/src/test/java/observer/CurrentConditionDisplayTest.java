package observer;

public class CurrentConditionDisplayTest {
	@org.junit.jupiter.api.Test
	void display() {
		WeatherData weatherData = new WeatherData();

		CurrentConditionDisplay currentConditionDisplay = new CurrentConditionDisplay(weatherData);

		weatherData.setMeasurements(80, 65, 30.4f);
	}
}
