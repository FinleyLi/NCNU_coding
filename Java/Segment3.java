import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
public class Segment3 {
	// mysort 依第0列排序
	public static Integer[][] mysort(Integer[][] ar) {
        Arrays.sort(ar, new Comparator<Integer[]>() {
            @Override
            public int compare(Integer[] int1, Integer[] int2) {
                Integer numOfKeys1 = int1[0];
                Integer numOfKeys2 = int2[0];
                return numOfKeys1.compareTo(numOfKeys2);
            }
        });
        return ar;
    }
	public static void main(String argv[]) {
		int totalLen = 0;		
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		// 讀取數據
		Integer[][] segs = new Integer[n][2];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < 2; j++)
				segs[i][j] = input.nextInt();

        // 呼叫mysort排序
        segs = mysort(segs);
        /*// 列印排序後的結果檢視
        for (Integer[] i : segs) {
            System.out.println(i[0] + "," + i[1]);
        }*/
        // 第0筆線段長度
		totalLen += (segs[0][1] - segs[0][0]);
		int end = segs[0][1];

		// for 讀取n-1筆線段
        for (int i = 1; i < n; i++) {
        	// if 判斷有覆蓋或連接
        	if (segs[i][0] >= end) {
        		totalLen += (segs[i][1] - segs[i][0]);
        		end = segs[i][1];
        		// 判斷線段分離
        	} else if ((segs[i][0] < end) && (segs[i][1] < end)){
        		// 判斷線段重疊
        	} else if ((segs[i][0] < end) && (segs[i][1] > end)) {
        		totalLen += (segs[i][1] - end);
        		end = segs[i][1];
        		// 判斷部份覆蓋
	        }
        }
        System.out.println(totalLen);
    }
}
