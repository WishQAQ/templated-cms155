<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><html>
<head>
<meta http-equiv='Content-Type' content='text/html; charset=gb2312'>
<title>�������Թ���</title>
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
		alert("��ûѡ���κ����ݣ�");
		return false;
	}else{
		document.form1.allid.value = str;
		return true;
	}
}
function delcfm() {
     if (!confirm("ȷ��Ҫɾ����")) {
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
	&nbsp;<b>�������Թ���</b>&nbsp;&nbsp;
  	<b>������</b>
    <input type='text' name='keyword' style="color:666666" value="������Ҫ����������" onFocus="if (value =='������Ҫ����������'){value =''}" onBlur="if (value ==''){value='������Ҫ����������'}"/>
    <select name="ischeck">
    <option value="-1">ȫ��</option>
      <option value="0">δ����</option>
      <option value="1">�Ѵ���</option>
    </select>
    &nbsp;
    <input type='submit' name='sss' value='����' class="inputbut"/>  </td>
</tr>
</form>
 <form name='form1' method='post' action='yuyue_edit.php' onSubmit='return checkSubmit();'>
  	<input type='hidden' name='dopost' value='delall'/>
  	<input type='hidden' name='allid' value=''/>
      <tr bgcolor="#FDFEEF" height="24"> 
      <td height="24" colspan="13" >
	    <input type="button" value='ȫѡ' onclick='Sel("all");'>
	    <input type="button" value='��ѡ' onclick='Sel("none");'>	
      <input type='submit' value='����ɾ��' onClick='delcfm()'/>	   </td>
    </tr>
 <tr align="center" bgcolor="#F8FBFB" height="24"> 
          <td width="5%">ѡ��</td>
		  <td width="5%">���</td>
          <td width="20%">����</td>
          <td width="40%">��������</td>
          <td width="10%">��ϵ�绰</td>
		  <td width="10%">����ʱ��</td>
          <td width="10%">����</td>
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
          <td><a href='yuyue_edit.php?ID=<?php echo $fields['id']; ?>&dopost=delete' onClick='delcfm()'>[ɾ��]</a>	      </td>
        </tr>
        <?php
}
}?>
     <tr bgcolor="#FDFEEF" height="24"> 
      <td height="24" colspan="13" >
	    <input type="button" value='ȫѡ'onclick='Sel("all");'>
	    <input type="button" value='��ѡ'onclick='Sel("none");'>	
      	<input type='submit' value='����ɾ��' onClick='delcfm()'/>	   </td>
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