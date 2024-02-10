package Part2;

public class ConcurrencyDemo {
	
public static void main(String[] args) {
	
 CountUp countUp = new CountUp();
 Thread thread1 = new Thread(countUp);
 thread1.start();
 
 try {
   thread1.join();
 } catch (InterruptedException e) {
   e.printStackTrace();
 }

 CountDown countDown = new CountDown();

 Thread thread2 = new Thread(countDown);

 thread2.start();
}

}
