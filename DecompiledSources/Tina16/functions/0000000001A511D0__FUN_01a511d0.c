/* Ghidra address: 01a511d0 */
/* Ghidra symbol: FUN_01a511d0 */


undefined1 FUN_01a511d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined1 local_res18;
  undefined1 auStack_68 [32];
  undefined *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_11 = local_res18;
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = &DAT_01a51384;
  local_40 = L"LLMLocalv3";
  FUN_00416cd0(&local_38,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_38,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res10);
    if (cVar1 != '\0') {
      local_24 = FUN_005eba50(local_10,local_res10);
      local_11 = 0 < local_24;
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return local_11;
}

