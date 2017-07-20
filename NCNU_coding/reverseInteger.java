import java.util.Scanner;
public class reverseInteger {
	public static int reverse(int x) {
		int y = 0;
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
		Scanner input = new Scanner(System.in);
		// --輸出反轉數
		System.out.println(reverse(input.nextInt()));
		// --測試輸入輸出
		/*int x = input.nextInt();
		System.out.println(x);*/
	}
}
