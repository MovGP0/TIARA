/* Ghidra address: 0147d480 */
/* Ghidra symbol: FUN_0147d480 */


undefined4 FUN_0147d480(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_14 = local_res18;
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = &LAB_0147d628;
  local_40 = local_res10;
  FUN_00416cd0(&local_38,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_38,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res8);
    if (cVar1 != '\0') {
      local_14 = FUN_005eba50(local_10,local_res8);
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res8,2);
  return local_14;
}

