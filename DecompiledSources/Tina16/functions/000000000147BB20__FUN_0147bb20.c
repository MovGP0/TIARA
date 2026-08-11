/* Ghidra address: 0147bb20 */
/* Ghidra symbol: FUN_0147bb20 */


undefined1 FUN_0147bb20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined8 local_res18;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_9;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_20 = FUN_00882aa0(&PTR_FUN_00cffa30,1,0);
  FUN_00cb34c0(local_20,10000);
  local_60 = local_res8;
  local_58 = 0x11;
  local_50 = local_res10;
  local_48 = 0;
  FUN_00442f70(&local_40,L"http://%s:%d",&local_60,1);
  FUN_00d01f90(local_20,&local_38,local_40);
  FUN_00414ad0(local_res18,local_38);
  iVar1 = FUN_00d05da0(local_20);
  local_9 = iVar1 == 200;
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_res8);
  return local_9;
}

