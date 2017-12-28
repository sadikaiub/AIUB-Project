<html>
<html>
<head><title>Welcome</title></head>
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
					 <a href="Contract.php">Contract Us</a> <label>||</label>
					 <a href="Gallery.php">Gallery</a> <br>
					
					 
				</td>
				 
			</tr>
				
			<tr background="white.jpg">
				<td height="200" valign="center"  width="10%">
						<label><h3><center>Our Facilities</center></h3></label><hr>
							<center><a href="Room.php">Room reservation</a></center>
							<center><a href="Meeting.php"> Meetings</a></center>						
				</td>
			</tr>
			
			<tr>
 			   <td colspan="3">
 			    <script>
 				var images=["g2.jpg","g4.jpg","g5.jpg"];
 							
 				var i=0;
 				
 				function slides(){
 				document.getElementById("slideshow").src=images[i];
 				if(i<(images.length-1))
 				i++;
 				else
 				i=0;
 				
 				}
 				
 			   setInterval(slides,2000)
 			   </script>
 			   <img src= "g2.jpg" id="slideshow" width="100%" height="50%" >
 			  
 			   </td>
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
</html>