<?php

    include_once("../service/Userbooking_service.php");
     $Email=$_REQUEST['Email'];
    updateStatus($Email);
	header("location:Bookings.php");

?>