
public class TestJava {
	
	public static void main(String[] args) {
		char from[] = {'A', 'B', 'C', 'D'};
		char to[] = new char[from.length];
		//System.out.println("$$");
		
		for (int i = 2; i <= from.length; i++) {
			System.out.print(comb(from, to, i, from.length, i));
		}
	}
	
	//C(m, n) = C(m - 1, n - 1) + C(m - 1, n)
	public static String comb(char[] from, char[] to, int len, int m, int n) {
		String result = "";
		if ( n == 0) {
			for (int i = 0; i < len; i++) {
				result += to[i];
			}
			result += "\n";
		} else {
			to[n - 1] = from[m - 1];
			
			if (m > n - 1) {
				result = comb(from, to, len, m - 1, n - 1);
			}
			if (m > n) {
				result = comb(from, to, len, m - 1, n) + result;
			}
		}
		return result;
	}
}
