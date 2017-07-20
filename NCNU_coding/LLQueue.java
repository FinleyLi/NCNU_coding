class Node {
	int data;
	Node next;
}
public class LLQueue {
	Node head, tail;
	int size;
	// 解釋用
	public void sample() {
		for (int i = 0; i < 10; i++) {
			
		}
		for (int i = 0; i < 20; i++) {
			
		}
	}
	// ----
	public void put(int x) {
		// 產生新節點
		Node tmp = new Node();
		tmp.data = x;
		// 把tail所指到節點的next指到新節點
		if (tail != null) {
			tail.next = tmp;
			// 把tail指到新節點
			tail = tmp;
		} else {
			head  = tail = tmp;
		}
		size++;
	}
	public int get() {
		int result = head.data;
		head = head.next;
		if (head == null)
			tail = null;
		size--;
		return result;
	}
	public boolean isEmpty() {
		return size == 0;
	}
	public static void main(String[] argv) {
		LLQueue q = new LLQueue();
		for (int i = 0; i < 10; i++)
			q.put(i);
		while (!q.isEmpty())
			System.out.println(q.get());
	}
}
