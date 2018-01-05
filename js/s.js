$(document).ready(function () {
//Append a div with hover class to all the LI

$('.ym4 .ym4_1 .a5 .pic a').hover(
//Mouseover, fadeIn the hidden hover class
function() {
$(this).children('.ym4 .ym4_1 .a5 .pic a .zi').stop(true, true).fadeIn('1000');
},
//Mouseout, fadeOut the hover class
function() {
$(this).children('.ym4 .ym4_1 .a5 .pic a .zi').stop(true, true).fadeOut('1000');
}).click (function () {
//Add selected class if user clicked on it
$(this).addClass('selected');
});
});


$(".ny3 .yb .k5 .k5_1").mouseenter(function() { 
    $(this).stop().addClass('sq2');
   }); 
$(".ny3 .yb .k5 .k5_1").mouseleave(function() { 
    $(this).stop().removeClass('sq2');
	});


$(".ym4 .ym4_1 .a5 .pic").mouseenter(function() { 
    $(this).stop().animate({"margin-top":"0px"},300);
   });  
$(".ym4 .ym4_1 .a5 .pic").mouseleave(function() { 
    $(this).stop().animate({"margin-top":"20px"},300);
   }); 

$(".ym5_2 .c1").mouseenter(function() { 
    $(this).stop().addClass('sq');
   }); 
$(".ym5_2 .c1").mouseleave(function() { 
    $(this).stop().removeClass('sq');
	});

$("#footer .f1 .f1_1 .g1 .g1_1 a").mouseenter(function() { 
    $(this).stop().animate({"margin-top":"0px"},300);
   });  
$("#footer .f1 .f1_1 .g1 .g1_1 a").mouseleave(function() { 
    $(this).stop().animate({"margin-top":"-32px"},300);
   }); 

$(".ny6 .ny6_1 .m9 a").mouseenter(function() { 
    $(this).stop().animate({"top":"0px"},300);
   });  
$(".ny6 .ny6_1 .m9 a").mouseleave(function() { 
    $(this).stop().animate({"top":"-425px"},300);
   }); 