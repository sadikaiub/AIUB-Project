<?php
	session_start();
	if(isset($_SESSION['admin'])==false){
		header("location: login.php");
	}
	
?>
<html>
<head><title>AdminProfile</title></head>
<form>
<table border="1"align="center" width="60%" >
	
			<tr background="hotel.jpg"><th colspan="3" align="right" width="60%">
			<label><center><h1>Hotel 71<h1><center></label>
			</tr>
			<tr background="white.jpg">
				<td align="center"> 
				     <a href="Welcome.php">Home</a> <label>||</label>
				     <a href="Promotional.php">Promotional Offers</a> <label>||</label>
					 <a href="Customer.php">Facilities</a></li> <label>||</label>
				     <a href="About.php">About The Hotel</a>  <label>||</label>
					 <a href="Login.php">Login</a> <label>||</label>
					 <a href="Contract.php">Contract Us</a> <br>
					
					 
				</td>
				 
			</tr>
			<tr>
			<td>
			    <table width="100%" cellpadding="0" cellspacing="0">
            <tr>
                <td width="100"></td>
                <td width="10"></td>
                <td width="230"></td>
                <td></td>
            </tr>
            <tr>
                <td>Name</td>
                <td>:</td>
                 <td><?= $_SESSION['admin']['Name']; ?></td>               
				 <td></td>
            </tr>		
            <tr><td colspan="4"><hr/></td></tr>
         
			<tr>
                <td>Email</td>
                <td>:</td>
				<td><?= $_SESSION['admin']['Email']; ?></td> 
               
                <td></td>
            </tr>				
            <tr><td colspan="4"><hr/></td></tr>
			
			<tr>
                <td>Mobile</td>
                <td>:</td>
				<td><?= $_SESSION['admin']['mblno']; ?></td> 
               
                <td></td>
            </tr>	
           	 <tr><td colspan="4"><hr/></td></tr>	
            
            <tr>
                <td valign="top">Date of Birth</td>
                <td valign="top">:</td>
				<td><?= $_SESSION['admin']['DOB']; ?></td> 
                
                <td></td>
            </tr>
        </table>
        <hr/>
       
       </td>		
			</tr>
			<tr background="white.jpg">
				<td align="center"> 
				     <a href="Updateadmin.php">Edit</a> <label>||</label>
					 <a href="Login.php">Logout</a> <label>||</label> <br/>
					 
				    <!-- <a href="adminpasschange.html">ChangePassword</a> <label>||</label> <br/>-->
					 <a href="Adminpanel.php">AdminPanel</a> <label>||</label>
					 <a href="Bookings.php">Bookings</a> 
					
					
					 
				</td>
				 
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
