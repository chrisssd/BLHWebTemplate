
<!-- jQuery (necessary for Bootstrap's JavaScript plugins) -->
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
<!-- Latest compiled and minified JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
<script src="https://use.fontawesome.com/57c5f7994d.js"></script>
<script src="js/main.js"></script>

<script language="javascript">
	ApplyBootstrapListGroups();
	ApplyBootstrapMenu();
	ApplyBootstrapSearch();
ApplyBootstrapPills();
	$(document).ready(function () {

var menu = $('#nav');
var origOffsetY = menu.offset().top;

function scroll() {
    if ($(window).scrollTop() >= origOffsetY) {
        $('#nav').addClass('navbar-fixed-top');
        //$('.content').addClass('menu-padding');
    } else {
        $('#nav').removeClass('navbar-fixed-top');
		 $('#nav').addClass('navbar-static-top');
       // $('.content').removeClass('menu-padding');
    }


   }

  document.onscroll = scroll;

}); 
</script>