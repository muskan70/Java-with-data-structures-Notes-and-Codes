package L17;

public class QueueUse {

	public static void main(String[] args) {
		QueueUsingArray q = new QueueUsingArray(5);
		
		q.enqueue(5);
		q.enqueue(6);
		q.enqueue(7);
		q.enqueue(8);
		q.enqueue(9);
		
		while(!q.isEmpty()) {
			System.out.println(q.dequeue());
		}
	}
}
