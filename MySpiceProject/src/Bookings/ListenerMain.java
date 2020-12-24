package Bookings;

import org.testng.ITestListener;
import org.testng.ITestResult;

//iTestListener
public class ListenerMain implements ITestListener {
	
	@Override
	public void onTestSuccess(ITestResult result)
	{
		System.out.println("Test Success "+result.getName());
	}
	
	@Override
	public void onTestFailure(ITestResult result)
	{
		System.out.println("Test Failure "+result.getName());
	}

}
