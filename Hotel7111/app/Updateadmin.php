
<?php
	session_start();
	if(isset($_SESSION['admin'])==false){
		header("location: login.php");
	}
	
?><html>
<html>
<head><title>USEREDIT</title></head>
<form method="post">
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
                <td><input name="name" type="text" value="<?= $_SESSION['admin']['Name']; ?>"></td>
                <td></td>
            </tr>		
            <tr><td colspan="4"><hr/></td></tr>				
           		<tr>
                <td>Password</td>
                <td>:</td>
                <td>
                    <input name="Password" type="text" value="<?= $_SESSION['admin']['Password']; ?>">
                </td>
                <td></td>
            </tr>
                <tr><td colspan="4"><hr/></td></tr>				
           		<tr>
                <td>Mobile</td>
                <td>:</td>
                <td>
                    <input name="mblno" type="text" value="<?= $_SESSION['admin']['mblno']; ?>">
                </td>
                <td></td>
            </tr>				
            
    
        </table>
        <hr/>
        <input type="submit" value="Update">
		 <input type="submit" value="Cancel">
       </td>		
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
</html>
<?php
	
	
	if($_SERVER["REQUEST_METHOD"]=='POST'){
		
		include_once("../service/Adminprofile_service.php");
	
			$email=$_SESSION['admin']['Email']; 
			$name=$_REQUEST['name'];
			$Password=$_REQUEST['Password'];
			$mblno=$_REQUEST['mblno'];
						
			if(updateUser($email,$name,$Password,$mblno)){
				$result=updateUser($email,$name,$Password,$mblno);
				echo "Insert Successfull";
				$_SESSION['admin']=$result;
				header("location: Adminprofile.php");
			}else{
				echo "Server issue's try again later";
			}
	}		
?>