<?php
	session_start();
	if(isset($_SESSION['admin'])==false){
		header("location: login.php");
	}
	
	$pay = $_REQUEST["roomtype"];

	if($pay == "single bed room"){
		$_SESSION["totalpayment"]= 5000;
		
	}
	
	else if($pay == "double bed room"){
		$_SESSION["totalpayment"]= 7000;
		
	}
	
	else if($pay == "family package"){
		$_SESSION["totalpayment"]= 10000;
		
	}
	
	else if($pay == "couple package"){
		$_SESSION["totalpayment"]= 12000;
		
	}

	
?>
<html>
<head><title>Facilities</title></head>
<form method="POST">
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
				<td align="center">
					<br><br>
					<b>Name</b> 
					<input type="text" name="name" value="<?= $_SESSION['admin']['Name']; ?>"/><br/><br/>
					<b>Email</b>
					<input type="text" name="email" value="<?= $_SESSION['admin']['Email']; ?>" /><br/><br/>
					<br/><br/>
					<b>Room Type</b>
					<select name="roomtype">
					<option value="NULL">--Select Below Option--</option>
					<option value="single bed room">single bed room</option>
					<option value="double bed room">double bed room</option>
					<option value="family package">family package</option>
					<option value="couple package">couple package</option>
					</select><br/><br/>
					<b>Number of Person</b>
						<select name="person">
						<option value="1 Person">1 Person</option>
						<option value="2 Person">2 Person</option>
						<option value="3 Person">3 Person</option>
						<option value="4 Person">4 Person</option>
						</select><br/><br/>
						
						
					
					
					Arrival Date
					<input type="text" name="arrivaldate"/><br/><br/>
					Departure Date
					<input type="text" name="departuredate"/><br/><br/>
					BookingStatus: Pending
					<input Type="Hidden" name="bookingstatus" value="pending" /><br/><br/>
					<a href="Userbooking.php"><button>Confirm</button></a><br><br>
					Total Amount: <text name="totalamount"><?php echo $_SESSION["totalpayment"];?></text><br/><br/>
					
		
					
						<input align="left" name="submit" type="submit" value="Book"/>
						
		<a  href="http://127.0.0.1/Hotel711/App/User.php"><input  name="cancle" type="button" value="Cancle"/>

						
			
						
				</td>
			</tr>
			
			<tr>
			     <th background="hotel.jpg"><h3>www.hotel71.com</h3>
		    </tr>
	</table>
</form>

</html>
<?php 	   include_once("../service/Userbooking_service.php");
 ?>
<?php



$name = $email = $arrivaldate = $departuredate = $roomtype = $person  = $totalamount = $bookingstatus = "";

if(isset($_POST["submit"])){
    if (isset($_POST["name"]) && isset($_POST["email"]) && isset($_POST["arrivaldate"]) && isset($_POST["departuredate"]) && isset($_POST["roomtype"]) && isset($_POST["person"]) && isset($_POST["bookingstatus"])) {
        //echo "working";
        $name=$_POST['name'];
        $email=$_POST['email'];
		$arrivaldate=$_POST['arrivaldate'];
		$departuredate=$_POST['departuredate'];
        $roomtype=$_POST['roomtype'];
        $person=$_POST['person'];
        //$extraroom=$_POST['extraroom'];
        $totalamount=$_SESSION["totalpayment"];
		$bookingstatus=$_POST['bookingstatus'];
		
		echo $name; echo $email; echo $arrivaldate; echo $departuredate; echo $roomtype; echo $totalamount;
		
		
		if(userbooking( $name, $email, $arrivaldate, $departuredate, $roomtype, $person , $totalamount , $bookingstatus)==true){
           echo "<script>
                    alert('Record Added');
					document.location='User.php';
                   
                </script>";
        }
    }
        
}

?>