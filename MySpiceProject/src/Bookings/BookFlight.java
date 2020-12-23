package Bookings;

import org.testng.annotations.AfterMethod;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

public class BookFlight {
	
//	@BeforeTest
//	public void BeforeTestCase1()
//	{
//		 System.out.println("BTS1");
//	}
//	@BeforeMethod(dependsOnMethods= {"BeforeTestCase1"})
//	public void BeforeEveryTestCase1()
//	{
//		System.out.println("BeforeEveryTestCase1");
//	}
//	@AfterMethod
//	public void AfterEveryTestCase1()
//	{
//		System.out.println("AfterEveryTestCase1");
//	}
	@Test
	public void BookFlight_RoundTrip_TestCase1()
	{
		 System.out.println("BookFlight_RoundTrip_TestCase1");
	}
	@Test
	public void BookFlight_RoundTrip_TestCase2()
	{
		System.out.println("BookFlight_RoundTrip_TestCase2");
	}
	@Test(enabled=false)
	public void BookFlight_OneWay_TestCase3()
	{
		System.out.println("BookFlight_OneWay_TestCase3"); 
	}
	@Test
	public void BookFlight_OneWay_TestCase4()
	{
		System.out.println("BookFlight_OneWay_TestCase4");
	}
//	@AfterTest
//	public void AfterTestCase1()
//	{
//		 System.out.println("ATS1");
//	}
}
