class Thread1 implements Runnable
{
    public void run()
    {
        for(int i=0;i<100;i++)
        {
            System.out.println("thread1 executng");
        }
    }
}
class Thread2 implements Runnable
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
    Thread obj=new Thread(t1);
    obj.start();
    
    Thread2 t2=new Thread2();
    Thread obj1=new Thread(t2);
    obj1.start();
  }
}
