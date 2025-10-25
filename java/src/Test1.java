import java.util.Scanner;

public class Test1 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String s = scanner.nextLine();

		boolean[] present = new boolean[26];
		for (int i = 0; i < s.length(); i++) {
			int index = s.charAt(i) - 'A';
			present[index] = true;
		}

		int sum = 0;
		for (int i = 0; i < 26; i++) {
			if (!present[i]) {
				sum += (i + 'A');
			}
		}

		System.out.println(sum);
		scanner.close();
	}
}
