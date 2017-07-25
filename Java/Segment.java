import java.util.Scanner;
public class Segment {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		boolean[] seg = new boolean[10000000];
		for (int i = 0; i < n; i++) {
			int start = input.nextInt();
			int end = input.nextInt();
			for (int j = start; j < end; j++)
				seg[j] = true;
		}
		int totalLen = 0;
		for (int i = 0; i < seg.length; i++)
			if (seg[i])
				totalLen++;
		System.out.println(totalLen);
	}
}
