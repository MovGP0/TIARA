/* Ghidra address: 01b258f0 */
/* Ghidra symbol: FUN_01b258f0 */


void FUN_01b258f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_38 = &LAB_01b25a70;
  local_30 = local_res10;
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    FUN_005eb630(local_10,local_res8,local_res18);
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res8,3);
  return;
}

