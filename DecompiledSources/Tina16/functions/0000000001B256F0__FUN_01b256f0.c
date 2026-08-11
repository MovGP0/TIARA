/* Ghidra address: 01b256f0 */
/* Ghidra symbol: FUN_01b256f0 */


undefined1 FUN_01b256f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_11 = 0;
  FUN_005ea670(local_10,0xffffffff80000001);
  local_58 = &LAB_01b258e0;
  local_50 = local_res10;
  FUN_00416cd0(&local_38,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_38,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res8);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,&local_40,local_res8);
      FUN_00414ad0(local_res18,local_40);
      local_11 = 1;
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res8,2);
  return local_11;
}

