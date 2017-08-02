import java.util.Arrays;
import java.util.Scanner;
public class baseStation {
	public static string getData(int N, int K, int[])
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		// 輸入N個服務點
		int N = input.nextInt();
		// 輸入K個基地台
		int K = input.nextInt();
		// 輸入N個服務點座標Coordinate[]
		int[] Corrdinate = new int[N];
		for (int i = 0; i < N; i++)
			Corrdinate[i] = input.nextInt();
		// 排序取最大最小值Arrays.sort
		Arrays.sort(Corrdinate);
		// 輸出最小直徑Diameter
		int Min = Corrdinate[0];
		int Max = Corrdinate[N-1];
		double Diameter = (Max - Min) / K;
		System.out.println((int)Math.ceil(Diameter));// 無條件進位
	}
}
