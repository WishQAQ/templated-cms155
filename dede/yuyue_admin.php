<?php 
require_once(dirname(__FILE__).'/config.php');
require_once(DEDEINC.'/datalistcp.class.php');
require_once(DEDEINC.'/common.func.php');
setcookie('ENV_GOBACK_URL',$dedeNowurl,time()+3600,'/');

if(!isset($ischeck)) $ischeck = -1;
if(!isset($keyword)) $keyword = "";
if($ischeck==0) $seloption =  "<option value='0' selected>未预约</option>\r\n<option value='-1'>全部</option>\r\n";
else if($ischeck==1) $seloption = "<option value='1' selected>已预约</option>\r\n<option value='-1'>全部</option>\r\n";
else $seloption = "<option value='-1' selected>全部</option>\r\n";

function GetSta($state)
{
	if($state==0) return "未预约";
	if($state==1) return "已预约";
	else return "未审核";
}

$addquery = " where 1=1 ";

if($ischeck!=-1){
	if($ischeck==0) $addquery .= " And state=0 ";
	else $addquery .= " And state='$ischeck' ";
}

if(!empty($keyword)){
	$addquery .= " And (name like '%$keyword%') ";
}

$sql = "";
$sql = "Select * From #@__yuyue $addquery ORDER BY `date` ASC ";
$dlist = new DataListCP();
$dlist->pageSize = 20;
$dlist->SetTemplet(DEDEADMIN."/templets/yuyue_admin.htm");
$dlist->SetSource($sql);
$dlist->display();
$dlist->Close();
?>