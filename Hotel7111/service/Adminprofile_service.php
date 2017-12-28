
<?php
if(require_once("../service/data_access.php")) {
	
			function searchUser($uname){
			global $conn;
			$query="SELECT * FROM admininfo WHERE Email='$uname'";
			$result=mysqli_query($conn,$query);
			
			return mysqli_fetch_assoc($result);
		}
		
		function updateUser($email,$name,$Password,$mblno){
			global $conn;
			$query="UPDATE admininfo SET name='$name', Password='$Password',mblno='$mblno' WHERE Email='$email'";
			$result=mysqli_query($conn,$query);
			
			return searchUser($email);
		
		}
		function show_admin()
		{
			global $conn;
			$query="SELECT * FROM admininfo where type='admin'";
			$result=mysqli_query($conn,$query);
			$num_rows = mysqli_num_rows($result);

			if($num_rows!=0){
			for($i=0;$row=mysqli_fetch_assoc($result);$i++){
				$dboy[$i]=$row;
			}
			return $dboy;
			}
		}
		
		function deleteUser($uname){
			global $conn;
			$query="delete FROM admininfo WHERE Email='$uname'";
			$result=mysqli_query($conn,$query);
			
			return $result;
		}
		
		function admininfo($name, $email, $password,$dob,$mblno,$type){
			
			global $conn;
			$query="INSERT INTO admininfo(Name, Email,Password,DOB,mblno,type ) VALUES ('$name','$email','$password','$dob','$mblno','$type')";
		 	$result=mysqli_query($conn,$query);
			return $result;
		}
		
}
else
{
	echo"data not found";
}
?>