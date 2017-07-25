import java.util.Scanner;
public class Min {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int max = -1;
		int min = 10000000;
		for (int i = 0; i < n; i++) {
			int v = input.nextInt();
			if (v < min && v >= 60)
				min = v;
			if (v > max && v < 60)
				max = v;
		}
	System.out.println(min+" "+max);
	}
}
