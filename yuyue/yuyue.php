<?php
require_once("../include/common.inc.php");

//$validate = $_REQUEST['validate'];
//if(empty($validate)) $validate=='';
//else $validate = strtolower($validate);
//$svali = GetCkVdValue();
/*if($validate=='' || $validate!=$svali){
	echo '<script language="JavaScript">window.alert("验证码不正确");location.href="yuyue.html"</script>';
	exit();
}*/
$validate = $_REQUEST['validate'];
if(empty($validate)) $validate=='';
else $validate = strtolower($validate);
$svali = GetCkVdValue();
$ip = GetIP();
$validate = empty($validate) ? '' : strtolower(trim($validate));
$svali = strtolower(GetCkVdValue());
if(($validate=='' || $validate != $svali) && preg_match("/6/",$safe_gdopen)){
  ResetVdValue();
  echo '<script language="JavaScript">window.alert("验证码不正确");javascript:history.go(-1);</script>';
  exit();
}
$ip = GetIP();
if(!isset($uname) || $uname==''){
	echo '<script language="JavaScript">window.alert("请输入姓名");javascript:history.go(-1);</script>';
	exit();	
}
if(!isset($tel) || $tel==''){
	echo '<script language="JavaScript">window.alert("请输入电话号码");javascript:history.go(-1);</script>';
	exit();	
}
if(!isset($content) || $content==''){
	echo '<script language="JavaScript">window.alert("请输入留言内容");javascript:history.go(-1);</script>';
	exit();	
}
$date=date("Y-m-d");
$inQuery = "INSERT INTO `#@__yuyue` (`name`, `hometel`, `ill`,`ip`,`date`) VALUES ('$uname', '$tel', '$content', '$ip', '$date');
;";

if(!$dsql->ExecuteNoneQuery($inQuery)){
	$gerr = $dsql->GetError();
	$dsql->Close();
	ShowMsg("保存数据时出错，请联系管理员！".$gerr,"-1");
	exit();
}
echo '<script language="JavaScript">window.alert("您的留言提交成功,点击确定返回");javascript:history.go(-1);</script>';
?>