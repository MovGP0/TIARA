/* Ghidra address: 01a33190 */
/* Ghidra symbol: FUN_01a33190 */


undefined1 FUN_01a33190(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined4 *local_res10;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_11 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_38 = L"\\DetailedDC";
  FUN_00416cd0(&local_28,3,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res8);
    if (cVar1 != '\0') {
      uVar2 = FUN_005eba50(local_10,local_res8);
      *local_res10 = uVar2;
      local_11 = 1;
    }
  }
  FUN_005ea630(local_10);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res8);
  return local_11;
}

