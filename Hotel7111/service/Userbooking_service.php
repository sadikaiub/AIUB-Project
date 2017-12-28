<?php
	if(require_once("../service/data_access.php")) {
	
		function userbooking($name, $email, $arrivaldate, $departuredate, $roomtype, $person , $totalamount , $bookingstatus){
			
			global $conn;
			$query="INSERT INTO userbooking(Name, Email, ArrivalDate,DepartureDate,RoomType,Person,TotalAmount,BookingStatus) VALUES ('$name', '$email', '$arrivaldate', '$departuredate', '$roomtype', '$person', '$totalamount', '$bookingstatus')";
		 	$result=mysqli_query($conn,$query);
			return $result;
		}
		
		function Bookingdetails($uname){
			global $conn;
			$query="SELECT * FROM userbooking WHERE Email='$uname' ORDER BY ArrivalDate DESC";
			$result=mysqli_query($conn,$query);
			
			return mysqli_fetch_assoc($result);
		}
		
		function show_user()
		{
			global $conn;
			$query="SELECT * FROM userbooking WHERE bookingstatus='pending'";
			$result=mysqli_query($conn,$query);
			$num_rows = mysqli_num_rows($result);

			if($num_rows!=0){
			for($i=0;$row=mysqli_fetch_assoc($result);$i++){
				$dboy[$i]=$row;
			}
			return $dboy;
			}
		}
		
		function updateStatus($email){
			global $conn;
			$query="UPDATE userbooking SET bookingstatus='Approved' WHERE Email='$email'";
			$result=mysqli_query($conn,$query);
			
			return $result;
		
		}
		function deletebooking($uname){
			global $conn;
			$query="delete FROM userbooking WHERE Email='$uname'";
			$result=mysqli_query($conn,$query);
			
			return $result;
		}
		
	}
	else
	{
		echo"data not found";
	}
?>





























?>