package Part2;

class CountUp implements Runnable {

private static int count = 0;

private synchronized void increment() {
 count++;
 System.out.println("Thread 1: " + count);
}

public void run() {
 try {
   
   while (count < 20) {
     
     increment();
     
     Thread.sleep(500);
   }
 } catch (InterruptedException e) {
  
   e.printStackTrace();
 }
}
}