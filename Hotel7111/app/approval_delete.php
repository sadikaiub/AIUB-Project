<?php

    include_once("../service/Userbooking_service.php");
     $Email=$_REQUEST['Email'];
    deletebooking($Email);
	header("location:Bookings.php");

?>