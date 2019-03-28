class Thread1 extends Thread
{
    public void run()
    {
        for(int i=0;i<100;i++)
        {
            System.out.println("thread1 executng");
        }
    }
}
class Thread2 extends Thread
{
    public void run()
    {
        for(int i=0;i<100;i++)
        {
            System.out.println("thread2 executng");
        }
    }
}
class test
{
public static void main(String args[])
  {
    Thread1 t1=new Thread1();
    t1.start();
    Thread2 t2=new Thread2();
    t2.start();
  }
}
