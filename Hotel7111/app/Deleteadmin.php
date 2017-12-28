<?php
	session_start();
	if(isset($_SESSION['admin'])==false){
		header("location: login.php");
	}
	
?>
<html>
<head><title>Delete Admin</title></head>
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
                    <?php
	
	
	
		
		include_once("../service/Adminprofile_service.php");
		
	        $result=show_admin();
			$total=count($result);
			if($total==0){echo"No admin for delete";}
        else{
			for($i=0;$i<$total;$i++){
	echo '<li>'.$result[$i]['Email'].'.......'.'<a  href="show_admin.php?Email='.$result[$i]['Email'].'">DELETE</a></li></br></br>';
			//$email=$_SESSION['admin']['Email']; 
			}
		}
		echo "</ul>";
						
		
?>
                   
                  </tr>				
            
            
            
        </table>
       
        
		<a  href="http://127.0.0.1/Hotel7111/App/Adminprofile.php"><input  name="cancle" type="button" value="Cancle"/>
		
       </td>		
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html

