<?php 
require_once(dirname(__FILE__)."/config.php");
CheckPurview('plus_在线留言模块');
if(!empty($_COOKIE['ENV_GOBACK_URL'])) $ENV_GOBACK_URL = $_COOKIE['ENV_GOBACK_URL'];
else $ENV_GOBACK_URL = 'yuyue_admin.php';

if(empty($dopost)) $dopost = "";
if(isset($allid)){
	$aids = explode(',',$allid);
	if(count($aids)==1){
		$ID = $aids[0];
		$dopost = "delete";
	}
}

if($dopost=="delete")
{
	$dsql = new DedeSql(false);
	$ID = ereg_replace("[^0-9]","",$ID);
	$dsql->ExecuteNoneQuery("Delete From #@__yuyue where ID='$ID'");
	$dsql->Close();
	ShowMsg("成功删除一条留言信息！",$ENV_GOBACK_URL);
	exit();
}
else if($dopost=="delall"){
	$aids = explode(',',$allid);
	if(isset($aids) && is_array($aids))
	{
		foreach($aids as $aid)
		{
			$aid = ereg_replace("[^0-9]","",$aid);
			$dsql->ExecuteNoneQuery("Delete From `#@__yuyue` where id='$aid'");
		}
		ShowMsg("成功删除指定留言信息！",$ENV_GOBACK_URL);
		exit();
	}
	else
	{
		ShowMsg("你没选定任何留言信息！",$ENV_GOBACK_URL);
		exit();
	}

}
else if($dopost=='saveedit')
{
	$query = "Update `#@__yuyue`
	 set
	 name='$name',
	 sex='$sex',
	 age='$age',
	 date='$date',
	 time='$time',
	 address='$address',
	 hometel='$hometel',
	 email='$email',
	 state='$state',
	 ill='$ill'
	 where id='$aid'
	 ";
	$dsql->ExecuteNoneQuery($query);
	ShowMsg("成功更改留言信息！",$ENV_GOBACK_URL);
	exit();
}

else if($dopost=='edit')
{
	$dsql->ExecuteNoneQuery("Update `#@__yuyue` set state='1' where id='$aid' ");
	ShowMsg("成功预约！",$ENV_GOBACK_URL);
	exit();
}

$row = $dsql->GetOne("Select * From `#@__yuyue` where id='$aid'");
include DedeInclude('templets/yuyue_edit.htm');
?>