package Part2;

class CountDown implements Runnable {

private static int count = 20;

private synchronized void decrement() {
 count--;
 System.out.println("Thread 2: " + count);
}

public void run() {
 try {
   while (count > 0) {
     decrement();    
     Thread.sleep(500);
   }
 } catch (InterruptedException e) {
   e.printStackTrace();
 }
}
}