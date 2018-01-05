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
$z[5]=Array("include","",2023,2058);
$z[5][4]['filename']="head.htm";
$z[6]=Array("include","",2166,2201);
$z[6][4]['filename']="left.htm";
$z[7]=Array("field","",2262,2321);
$z[7][4]['name']="typeid";
$z[7][4]['function']="GetTopTypename(@me)";
$z[8]=Array("field","if(@me=='5')@me='NEWS';else if(@me=='11')@me='Activities';else if(@me=='10')@me='dynamic';else if(@me=='4')@me='price';else if(@me=='2')@me='WORK';",2326,2550);
$z[8][4]['name']="typeid";
$z[8][4]['runphp']="yes";
$z[8][4]['function']="GetTopid(@me)";
$z[9]=Array("list","\r\n  <div class=\"k5_1\">\r\n    <div class=\"m1\">\r\n      <div class=\"m1_1\">[field:pubdate function=\"MyDate('Y',@me)\"/]</div>\r\n      <div class=\"m1_2\">[field:pubdate function=\"MyDate('m.d',@me)\"/]</div>\r\n    </div>\r\n    <div class=\"m2\"><a href=\"[field:arcurl/]\" title=\"[field:fulltitle function='htmlspecialchars(@me)'/]\"><img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\" width=\"121\" height=\"88\" /></a></div>\r\n    <div class=\"m3\">\r\n      <h2><a href=\"[field:arcurl/]\" title=\"[field:fulltitle function='htmlspecialchars(@me)'/]\">[field:title/]</a></h2>\r\n      <p>[field:infos/]...</p>\r\n      <div class=\"m3_1\"><a href=\"[field:arcurl/]\">点击了解更多</a></div>\r\n    </div>\r\n  </div>\r\n  ",2623,3388);
$z[9][4]['pagesize']="6";
$z[9][4]['titlelen']="45";
$z[9][4]['infolen']="130";
$z[10]=Array("pagelist","",3412,3490);
$z[10][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[10][4]['listsize']="2";
$z[11]=Array("include","",3545,3580);
$z[11][4]['filename']="foot.htm";

?>