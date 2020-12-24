package Bookings;

import org.testng.annotations.Parameters;
import org.testng.annotations.Test;

public class pmt {
	
	@Parameters({"URL","Username","Password"})
	@Test
	public void tc1(String url, String uname, String pwd)
	{
		System.out.println("My Url is "+url);
		System.out.println("My db username is "+uname);
		System.out.println("My db password is "+pwd);
	}
	

}
