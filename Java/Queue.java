public class Queue {
	// data is an object variable
	private int[] data = new int [1000];
	//protected int head, tail, size;// package + subclass
	private int head, tail, size;
	// numQueue is a class variable(key is static)
	//private static int numQueue;
	static int numQueue;// 同package可用此方式（同目錄）
	public void deleteAll() {
		tail = head;
		size = 0;
	}
	public void put(int x) {
		data[tail++] = x;// tail環狀陣列中止位置
		tail = tail % data.length;
		size++;
	}
	public int get() {
		int result = data[head++];// head環狀陣列起始位置
		size--;
		head = head % data.length;
		return head;
	}
	public boolean isEmpty() {
		return size == 0;
	}
	public Queue() {
		// 初始化
		numQueue++;
	}
	public static void main(String[] argv) {
		Queue q = new Queue();
		for (int i = 0; i < 100; i++)
			q.put(i);
		while (!q.isEmpty())
			System.out.println(q.get());
	}
}
