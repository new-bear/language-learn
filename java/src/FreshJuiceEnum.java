class FreshJuice {
	enum FreshJuiceSize {SMALL, MEDIUM, LARGE}

	FreshJuiceSize size;
}

public class FreshJuiceEnum {
	public static void main(String[] args) {
		FreshJuice juice = new FreshJuice();
		juice.size = FreshJuice.FreshJuiceSize.LARGE;
	}
}
