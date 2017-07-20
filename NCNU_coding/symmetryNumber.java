import java.util.Scanner;
public class symmetryNumber {
	//public static int reverse(int x) {
	public static long reverse(long x) {
		//int y = 0;
		long y = 0;
		// 當x不為0時
		while(x != 0) {
			// 取出x的最後一個數字z
			// 把z附加到y的後面
			y = y * 10 + x % 10;
			// 把x / 10
			x = x / 10;
		}
		// 傳回y當作函數的結果
		return y;
	}
	public static void main(String[] argv) {
		/*System.out.print("Hello, World\n");
		System.out.print("測試\n");*/
		Scanner input = new Scanner(System.in);
		// --輸出對稱數
		long x = input.nextLong();
		int count = 0; // 加法次數
		// 當x不是反轉數時
		while (x != reverse(x)) {
			// 令 x = x + reverse(x)
			x += reverse(x);
			System.out.println("計算過程：" + x);
			// count加1
			count ++;
		}
		// 印出xcount
		System.out.println("反轉數：" + x);
		System.out.println("加法次數：" + count);
		// --輸出反轉數
		// System.out.println(reverse(input.nextInt()));
		// --測試輸入輸出
		/*int x = input.nextInt();
		System.out.println(x);*/
	}
}
