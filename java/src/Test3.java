import java.util.Scanner;

public class Test3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int N = scanner.nextInt();
		while (N-- > 0) {
			int n = scanner.nextInt();
			int[] a = new int[n + 1];
			int[] b = new int[n + 1];
			int[] c = new int[n + 1];
			int[] d = new int[n + 1];

			for (int i = 1; i <= n; i++) {
				a[i] = scanner.nextInt();
				b[i] = scanner.nextInt();
				c[i] = scanner.nextInt();
				d[i] = scanner.nextInt();
			}

			int[] dpLeft = new int[n + 1];
			int[] dpRight = new int[n + 1];
			dpLeft[1] = a[1];
			dpRight[1] = c[1];

			for (int i = 2; i <= n; i++) {
				dpLeft[i] = Math.max(dpLeft[i - 1] + a[i], dpRight[i - 1] + a[i] - d[i - 1]);
				dpRight[i] = Math.max(dpLeft[i - 1] + c[i] - b[i - 1], dpRight[i - 1] + c[i]);
			}

			System.out.println(Math.max(dpLeft[n], dpRight[n]));
		}

		scanner.close();
	}
}
