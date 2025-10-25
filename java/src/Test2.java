import java.util.Scanner;

public class Test2 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		String s = scanner.nextLine();
		String t = scanner.nextLine();

		int n = t.length();
		String fistHalfT = t.substring(0, n / 2);
		String secondHalfT = t.substring(n / 2);

		String newS = s + secondHalfT;

		System.out.println(newS);
		System.out.println(fistHalfT);
		scanner.close();
	}
}

/*
import java.util.Scanner;

// 注意类名必须为 Main, 不要有任何 package xxx 信息
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        while (N-- > 0) {
            int n = scanner.nextInt();

            int prevLeft = 0, prevRight = 0;
            for (int i = 1; i <= n; i++) {
                int a = scanner.nextInt();
                int b = scanner.nextInt();
                int c = scanner.nextInt();
                int d = scanner.nextInt();

                int currLeft, currRight;
                if (i == 1) {
                    currLeft = a;
                    currRight = c;
                } else {
                    currLeft = Math.max(prevLeft + a, prevRight + a - d);
                    currRight = Math.max(prevLeft + c - b, prevRight + c);
                }

                prevLeft = currLeft;
                prevRight = currRight;
            }

            System.out.println(Math.max(prevLeft, prevRight));

        }

        scanner.close();
    }
}
 */