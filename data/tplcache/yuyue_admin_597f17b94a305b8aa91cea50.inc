<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>在线留言管理</title>
<link href='images/base.css' rel='stylesheet' type='text/css'>
<script language='javascript'>
function Sel(stype)
{
	var e=document.getElementsByTagName("input");
	  for(var i=0;i < document.form1.aids.length;i++){
		  if(stype=='all') document.form1.aids[i].checked=true;
		  else document.form1.aids[i].checked=false;
	  }
}
function checkSubmit()
{
	var str = "";
	for(var i=0;i < document.form1.aids.length;i++){
		  if(document.form1.aids[i].checked){
		  	if(str=="") str += document.form1.aids[i].value;
		  	else str += "," + document.form1.aids[i].value;
		}
}
	if(str==""){
		alert("你没选择任何内容！");
		return false;
	}else{
		document.form1.allid.value = str;
		return true;
	}
}
function delcfm() {
     if (!confirm("确认要删除？")) {
           window.event.returnValue = false;
      }
}
</script>
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="100%" border="0" cellpadding="1" cellspacing="1" align="left" class="tbtitle" style="background:#E2F5BC;">
<form name='formsearch' method='post' action='yuyue_admin.php'>
<tr>
<td height="28" background="images/tbg.gif" colspan="13">
	&nbsp;<b>在线留言管理</b>&nbsp;&nbsp;
  	<b>搜索：</b>
    <input type='text' name='keyword' style="color:666666" value="输入您要搜索的姓名" onFocus="if (value =='输入您要搜索的姓名'){value =''}" onBlur="if (value ==''){value='输入您要搜索的姓名'}"/>
    <select name="ischeck">
    <option value="-1">全部</option>
      <option value="0">未处理</option>
      <option value="1">已处理</option>
    </select>
    &nbsp;
    <input type='submit' name='sss' value='搜索' class="inputbut"/>  </td>
</tr>
</form>
 <form name='form1' method='post' action='yuyue_edit.php' onSubmit='return checkSubmit();'>
  	<input type='hidden' name='dopost' value='delall'/>
  	<input type='hidden' name='allid' value=''/>
      <tr bgcolor="#FDFEEF" height="24"> 
      <td height="24" colspan="13" >
	    <input type="button" value='全选' onclick='Sel("all");'>
	    <input type="button" value='不选' onclick='Sel("none");'>	
      <input type='submit' value='批量删除' onClick='delcfm()'/>	   </td>
    </tr>
 <tr align="center" bgcolor="#F8FBFB" height="24"> 
          <td width="5%">选择</td>
		  <td width="5%">编号</td>
          <td width="20%">姓名</td>
          <td width="40%">留言内容</td>
          <td width="10%">联系电话</td>
		  <td width="10%">留言时间</td>
          <td width="10%">管理</td>
    </tr>
        <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
        <tr align="center" bgcolor="#FFFFFF" height="24" onMouseMove="javascript:this.bgColor='#EDF9D5';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
          <td><input type='checkbox' name='aids' value='<?php echo $fields['id']; ?>' class='np'></td>
          <td><?php echo $fields['id']; ?></td>
          <td><?php echo $fields['name']; ?></td>
          <td align="left"><?php echo $fields['ill']; ?></td>          
          <td><?php echo $fields['hometel']; ?></td>
		  <td><?php echo $fields['date']; ?></td>
          <td><a href='yuyue_edit.php?ID=<?php echo $fields['id']; ?>&dopost=delete' onClick='delcfm()'>[删除]</a>	      </td>
        </tr>
        <?php
}
}?>
     <tr bgcolor="#FDFEEF" height="24"> 
      <td height="24" colspan="13" >
	    <input type="button" value='全选'onclick='Sel("all");'>
	    <input type="button" value='不选'onclick='Sel("none");'>	
      	<input type='submit' value='批量删除' onClick='delcfm()'/>	   </td>
     </tr>
     <tr align="center" bgcolor="#F8FBFB" height="24"> 
      <td colspan="13"><?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '6';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</td>
     </tr>
  </form>
</table>
   </td>
</tr>
</table>
</body>
</html>