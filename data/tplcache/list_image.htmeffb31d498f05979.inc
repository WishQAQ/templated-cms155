<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("include","",2070,2105);
$z[5][4]['filename']="head.htm";
$z[6]=Array("field","if(@me=='2')@me='×÷Æ·';else if(@me=='3')@me='¾°µã';",2264,2392);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[6][4]['function']="GetTopid(@me)";
$z[7]=Array("field","",2606,2665);
$z[7][4]['name']="typeid";
$z[7][4]['function']="GetTopTypename(@me)";
$z[8]=Array("field","if(@me=='2')@me='WORK';else if(@me=='3')@me='SPOTS';",2669,2798);
$z[8][4]['name']="typeid";
$z[8][4]['runphp']="yes";
$z[8][4]['function']="GetTopid(@me)";
$z[9]=Array("channel","\r\n	<li class=\"cat-item cat-item-10\"><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n	",2860,2992);
$z[9][4]['type']="son";
$z[10]=Array("list","\r\n  <div class=\"ny6_1\">\r\n    <div class=\"m9\">\r\n    <img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\" width=\"310\" height=\"425\" />\r\n    <a href=\"[field:arcurl/]\" title=\"[field:fulltitle function='htmlspecialchars(@me)'/]\"><img src=\"/images1/d04.png\" /></a>\r\n    </div>\r\n    <h2><a href=\"[field:arcurl/]\" title=\"[field:fulltitle function='htmlspecialchars(@me)'/]\">[field:title/]</a></h2>\r\n    <div class=\"m10\">POST TIME:[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</div>\r\n  </div>\r\n  ",3042,3601);
$z[10][4]['pagesize']="6";
$z[10][4]['titlelen']="40";
$z[11]=Array("pagelist","",3700,3778);
$z[11][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[11][4]['listsize']="2";
$z[12]=Array("include","",3841,3876);
$z[12][4]['filename']="foot.htm";

?>