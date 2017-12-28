
<html>
<head><title>Bookings</title></head>
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
			
	<h3>USERS INFORMATION</h3>		
	<table width="100%" cellspacing="0" border="1" cellpadding="5">
   
     <?php
		
		include_once("../service/Userbooking_service.php");
		
	        $result=show_user();
			$total=count($result);
			if($total==0){echo"No pending booking";}
       else{
			for($i=0;$i<$total;$i++){
	echo '<li>'.$result[$i]['Email'].'.......'.'<a  href="approval.php?Email='.$result[$i]['Email'].'">Approve</a>.............<a  href="approval_delete.php?Email='.$result[$i]['Email'].'">Delete</a>..............<a  href="approval_details.php?Email='.$result[$i]['Email'].'">Details</a>.</li></br></br>';
			
			}
		}
		echo "</ul>";
		
?>
 <a  href="http://127.0.0.1/Hotel7111/App/Adminprofile.php"><input  name="cancle" type="button" value="Cancle"/>   
</table><br/><br/>

	<h3>USERS TRANSITION</h3>
	<table width="100%" cellspacing="0" border="1" cellpadding="5">
    <tr>
	    <th align="left">DATE</th>
        <th align="left">NAME</th>
        <th align="left">REVENUE</th>
		<th align="left">MAINTANCE COST</th>
		<th align="left">PROFIT</th>
        
    </tr>
    <tr>
	    <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
		
    </tr>
    <tr>
	    <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>

    </tr>
    <tr>
	     <td></td>
         <td></td>
        <td></td>
        <td></td>
        <td></td>
		
    </tr>
</table>
	
   </td>
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
