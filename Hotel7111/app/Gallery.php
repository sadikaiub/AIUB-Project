<html>
<html>
<head><title>Gallery</title></head>
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
			
			<tr>
 			   <td colspan="3">
 			    <script>
 				var images=["lobby.jpg","pool.jpg","g2.jpg","g4.jpg","g5.jpg"];
 							
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
 			   <img src= "lobby.jpg" id="slideshow" width="100%" >
 			  
 			   </td>
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
</html>