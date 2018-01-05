<?php
$z[0]=Array("field","",74,133);
$z[0][4]['name']="typeid";
$z[0][4]['function']="GetTopTypename(@me)";
$z[1]=Array("field","if(@me=='5')@me='NEWS';else if(@me=='11')@me='Activities';else if(@me=='4')@me='PRICE';else if(@me=='10')@me='dynamic';else if(@me=='2')@me='WORK';else if(@me=='3')@me='SPOTS';else if(@me=='6')@me='contact';",138,422);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[1][4]['function']="GetTopid(@me)";
$z[2]=Array("channel","\r\n	<li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n	",507,696);
$z[2][4]['type']="son";
$z[2][4]['currentstyle']="<li class='current_page_item'><a href='~typelink~'>~typename~</a></li>";
$z[3]=Array("arclist","\r\n  <li>\r\n    <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" class=\"new_tu_img\">\r\n    <span class=\"tu_sidbar_hover\"></span>\r\n    <img width=\"238\" height=\"346\" class=\"attachment-news-sidbar-thumb wp-post-image\"  src=\"[field:litpic/]\" alt=\"[field:fulltitle/]\" ></a> \r\n    <div class=\"shuom\"><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" class=\"s_tlt\">[field:title/]</a></div>\r\n  </li>\r\n  ",1316,1808);
$z[3][4]['type']="image";
$z[3][4]['typeid']="2";
$z[3][4]['titlelen']="35";
$z[3][4]['row']="2";
$z[3][4]['orderby']="pubdate";
$z[4]=Array("arclist","\r\n  <li class=\"firest\">\r\n    <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" class=\"new_tu_img_huodong\"><img src=\"[field:litpic/]\" alt=\"[field:fulltitle/]\"/></a> \r\n    <div class=\"shuom2\"> \r\n    <a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" class=\"s_tlt\">[field:title/]</a>\r\n    <a class=\"time\">[field:info/]...</a>\r\n    </div>\r\n  </li>\r\n  ",1987,2450);
$z[4][4]['type']="image";
$z[4][4]['typeid']="11";
$z[4][4]['titlelen']="17";
$z[4][4]['infolen']="35";
$z[4][4]['orderby']="pubdate";
$z[4][4]['limit']="0,1";
$z[5]=Array("arclist","\r\n  <li class=\"elsr\"><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" class=\"s_tlt\">[field:title/]</a></li>\r\n  ",2454,2654);
$z[5][4]['typeid']="11";
$z[5][4]['titlelen']="38";
$z[5][4]['orderby']="pubdate";
$z[5][4]['limit']="1,4";

?>