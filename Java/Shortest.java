import java.util.Scanner;
public class Shortest {
    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        boolean[][] adj = new boolean[n][n];
        for (int i = 0; i < n - 1; i++) {
            int v1 = input.nextInt();
            int v2 = input.nextInt();
            adj[v1][v2] = adj[v2][v1] = true;
        }
        int max = -1;
        for (int i = 0; i < n; i++) {
            // let i be the start point
            int[] distance = new int[n];
            boolean[] visited = new boolean[n];
            for (int j = 0; j < n; j++)
                distance[j] = 100;
            distance[i] = 0;
            // use dijstra algorithm to find shortest path
            // started from i
            for (int j = 0; j < n; j++) {
                // find unvisited shortest vertex
                int min = 200;
                int minat = -1;
                for (int k = 0; k < n; k++)
                    if (!visited[k] && distance[k] < min) {
                        min = distance[k];
                        minat = k;
                    }
                // adjust distance adjacent to minat
                for (int k = 0; k < n; k++) {
                    if (adj[minat][k] && !visited[k]) {
                        if (distance[minat] + 1 < distance[k])
                            distance[k] = distance[minat] + 1;
                    }
                }
                // mark minat visited
                visited[minat] = true;
            }
            // find the longest path start from i
            for (int j = 0; j < n; j++)
                if (distance[j] > max)
                    max = distance[j];
        }
        System.out.println(max);
    }
}
/*import java.util.Scanner;
public class Shortest {
	public static void main(String[] argv) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		boolean[][] adj = new boolean[n][n];
		for (int i = 0; i < n; i++) {
			int v1 = input.nextInt();
			int v2 = input.nextInt();
			adj[v1][v2] = adj[v2][v1] = true;
		}
		int max = -1;// use dijstra algorithm to find shortest path
		for (int i = 0; i < n; i++) { 
			// let i be the start point
			int[] distance = new int[n];
			boolean[] visited = new boolean[n];
			for (int j = 0; j < n; j++)
				distance[j] = 100;
			distance[i] = 0;
			// use dijstra algorithm to find shortest
			// started from i
			for (int j = 0; j < n; j++) {
				// find unvisited shortest vertex
				int min = 200;
				int minat = -1;
				for (int k = 0; k < n; k++)
					if (!visited[k] && distance[k] < min) {
						min = distance[k];
						minat = k;
					}
				// adjust distance adjacent to minat
				for (int k = 0; k < n; k++) {
					if (adj[minat][k] && !visited[k]) {
						if (distance[minat] + 1 < distance[k])
							distance[k] = distance[minat] + 1;
					}
				}
				// mark minat visited
				visited[minat] = true;
			}
			// find the longest path start from i
			for (int j = 0; j < n; j++)
				if (distance[j] > max)
					max = distance[j];
		}
		System.out.println(max);;
	}
}*/
