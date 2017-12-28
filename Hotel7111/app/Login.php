<?php 
  if($_SERVER['REQUEST_METHOD']=="POST"){
	   include_once("../service/Adminprofile_service.php");
	  $email=$_REQUEST["user"];

	 $result=searchUser($email);
	 
	 $rrr=$_REQUEST['Password'];
	 echo $result['Password'];
	 if($rrr==$result['Password']){
	 session_start();
	 $_SESSION['admin']=$result;
	 if($_SESSION['admin']['type']=="user")
				{
					header("location: User.php");
				}
				else if($_SESSION['admin']['type']=="admin"){
					header("location: Adminprofile.php");
				}
	 
	 

	 
 }
 else
 {
	 echo "<script>
                    alert('Please Enter a Valid Email & Password');
                    document.location='Login.php';
                 </script>";
	
 }

 
  }
	 

?>

<html>
<head><title>Login</title></head>
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
					 <a href="Contract.php">Contract Us</a> <br>
					
					 
				</td>
				 
			</tr>
			<tr  background="white.jpg">
			   <td>
			    <fieldset>
				<legend><b>LOGIN</b></legend>
				<table>
                         <tr>
                           <td>User Name</td>
                           <td>:</td>
                           <td><input type="text" name="user" ></td>
                        </tr>
						
                        <tr>
                          <td>Password</td>
                          <td>:</td>
                          <td><input type="password" name="Password"></td>
                        </tr>
                </table>
				<hr />
                <!--<input name="remember" type="checkbox">Remember Me
                <br/><br/>-->
                <input type="submit" value="Login"> 
                <a href="Userregistration.php">Didn't Register yet?</a>
				<!--<a href="Adminprofile.php">ADMIN?</a>
				<a href="User.php">User?</a>-->
				</fieldset>
			</td>
			
			      <!--<a href="Login.html">Login</a>
				  <a href="Registration.html">Registration</a>-->
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>
</html>


