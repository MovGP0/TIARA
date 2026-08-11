/* Ghidra address: 01ae78c0 */
/* Ghidra symbol: FUN_01ae78c0 */


undefined1 FUN_01ae78c0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined1 local_res18;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_58 = *(wchar_t **)(param_1 + 0x58);
  FUN_00416cd0(&local_48,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ae7a40);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_48);
  local_58 = L"Default";
  (**(code **)(*local_20 + 0x10))(local_20,&local_30,L"Diagram Page Setup",local_res10);
  iVar1 = FUN_00416db0(local_30,L"Default");
  if (iVar1 == 0) {
    local_21 = local_res18;
  }
  else {
    iVar1 = FUN_00416db0(local_30,&LAB_01ae7aa0);
    local_21 = iVar1 == 0;
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res10);
  return local_21;
}

