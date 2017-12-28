<?php
	session_start();
	if(isset($_SESSION['admin'])==false){
		header("location: login.php");
	}
	
?>
<html>
<head><title>Welcome</title></head>
<form>
<table cellpadding="0" cellspacing="0" border="1"align="center" width="60%" >
	
			<tr background="hotel.jpg"><th colspan="3" align="right" width="60%">
			<label><center><h1>Hotel 71<h1><center></label>
			</tr>
			<tr background="white.jpg">
				<td colspan="3" align="center"> 
				     <a href="Welcome.php">Home</a> <label>||</label>
				     <a href="Promotional.php">Promotional Offers</a> <label>||</label>
					 <a href="Customer.php">Facilities</a></li> <label>||</label>
				     <a href="About.php">About The Hotel</a>  <label>||</label>
					 <a href="Login.php">Login</a> <label>||</label>
					 <a href="Contract.php">Contract Us</a> <br>
					
					 
				</td>
			 
			</tr>
			
			<tr>
			    <td><b>Name<b/></td>
              
                <td><?= $_SESSION['admin']['Name']; ?></td>
           
       </tr>	            
        
        <tr>
            <td><b>Email<b/></td>
         
            <td><?= $_SESSION['admin']['Email']; ?></td>
        </tr>		
       			
        
       
       
      
    <?php
	  include_once("../service/Userbooking_service.php");
		$Email=$_SESSION['admin']['Email'];
	        $result=Bookingdetails($Email);
	
	?>
       
		<tr>
            <td><b>Booking Status<b/></td>
        
            <td><?=$result['BookingStatus'];?></td>
        </tr>
		
		<tr>
		<td colspan="3"> 
			<b>Activity History</b> <br/>
            <table cellpadding="0" cellspacing="0" border="1"align="center" width="60%">
    <tr>
        <th align="left">Arrival Date</th>
        <th align="center" >Departure Date</th>
		 <th align="right" >Expenditure</th>
    </tr>
    <tr>
        <td  align="center"><?=$result['ArrivalDate'];?></td>
        <td align="center"><?=$result['DepartureDate'];?></td>  
         <td align="center"><?=$result['TotalAmount'];?></td> 		
    </tr>
  <!--  <tr>
        <td align="center">""</>""</td>
        <td align="center">""</td>
        <td align="center">""</td>         
    </tr>
    <tr>
        <td align="center">""</>""</td>
        <td align="center">""</td> 
		<td align="center">""</td> 				
    </tr>-->
   
</table>
</br>
</td>
        </tr>
		
		
		<tr>
            <td><b>Total Expenditure</b></td> 
          
            <td><?=$result['TotalAmount'];?></td>
        </tr>
		<tr background="white.jpg">
				<td colspan="3" align="center"> 
				     <a href="Satisfaction.php"><b>Rate us</b></a>||
					 <a href="Userbooking.php"><b>Book Now</b></a>|| <br/>
					 <a href="Useredit.php"><b>Edit</b></a>||
					  <a href="Login.php"><b>Logout</b></a>||
					
					 </td>
		</tr> <br/>
		
		
			
			
			
			
				  
		
			
			<tr>
			     <th colspan="3" background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
