import java.util.Scanner;
public class Rotate {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		int r = input.nextInt();
		int c = input.nextInt();
		int op = input.nextInt();
		// read in original data
		int[][] orig = new int[r][c];
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				orig[i][j] = input.nextInt();
		// do operations
		int[][] result;
		for (int t = 0; t < op; t++) {
			if (input.nextInt() == 0) { // rotate
				result = new int[c][r];
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++)
						result[j][r - i - 1] = orig[i][j];
				}
				orig = result;
				int tmp = c;
				c = r;
				r = tmp;
			} else { // flip, exchange rows
				result = new int[r][c];
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++)
						result[r - i - 1][j] = orig[i][j];
				}
				orig = result;
			}
		}
		// print out result
		for (int i = 0; i < r; i++) {
			System.out.print(orig[i][0]);
			for (int j = 1; j < c; j++)
				System.out.print(" " + orig[i][j]);
			System.out.println();
		}
	}
}
