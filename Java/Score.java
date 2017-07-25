import java.util.Scanner;
public class Score {
    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);
        //²Ä€@Šæ¿é€JŸÇ¥Í€HŒÆ
        int numStu = input.nextInt();
        int[] scores = new int[numStu];
        //²Ä€GŠæ¬°ŠUŸÇ¥Í€ÀŒÆ(0~100 ¶¡)
        for (int i = 0; i < numStu; i++)
            scores[i] = input.nextInt();
        // insertion sort scores
        for (int i = 1; i < numStu; i++) {
            // try to insert ith element
            int v = scores[i];
            int j = i - 1; // position to compare ith element
            for (; j >= 0 && scores[j] > v; j--)
                scores[j + 1] = scores[j];
            scores[j + 1] = v;
        }       
        //¥Ñ€pŠÓ€jŠL¥X©ÒŠ³ŠšÁZ¡AšâŒÆŠr€§¶¡¥H€@­ÓªÅ¥Õ¶¡®æ¡A³Ì«á€@­ÓŒÆŠr«áµLªÅ
        System.out.print(scores[0]);
        for (int i = 1; i < numStu; i++)
            System.out.print(" " + scores[i]);
        System.out.println();
        int nopass = numStu - 1;
        // find highest no pass
        while (nopass >= 0 && scores[nopass] >= 60)
            nopass--;
        if (nopass < 0)
            System.out.println("best case");
        else
            System.out.println(scores[nopass]);
        int pass = 0;
        // find lowest pass score
        while (pass < numStu && scores[pass] < 60)
            pass++;
        if (pass == numStu)
            System.out.println("worst case");
        else
            System.out.println(scores[pass]);
    }
}
/*import java.util.Scanner;
public class Score {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		// 第一行輸入學生人數
		int numStu = input.nextInt();
		int[] scores = new int[numStu];
		// 第二行為各學生分數(0~100間)
		for (int i = 0; i < numStu; i++)
			scores[i] = input.nextInt();
		// insertion sort scores
		for (int i = 1; i < numStu; i++) {
			// try to insert ith element
			int v = scores[i]; // position to compare ith
			int j = i - 1;
			for (; j >= 0 && scores[j] > v; j--)
				scores[j + 1] = scores[j];
			scores[j + 1] = v;
		}
		// 由小而大印出所有成績，兩數字之間以一空白間隔
		System.out.println(scores[0]);
		for (int i = 1; i < numStu; i++)
			System.out.print(" " + scores[i]);
		System.out.println();
		int nopass = numStu - 1;
		// find highest no pass
		while (nopass >= 0 && scores[nopass] >= 60)
			nopass--;
		if (nopass < 0)
			System.out.println("best case");
		else
			System.out.println(scores[nopass]);
		int pass = 0;
		// find lowest pass score
		while (pass < numStu && scores[pass] < 60)
			pass ++;
		if (pass == numStu)
			System.out.println("worst case");
		else
			System.out.println(scores[pass]);
	}
}
*/