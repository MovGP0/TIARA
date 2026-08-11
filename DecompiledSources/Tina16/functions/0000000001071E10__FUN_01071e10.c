/* Ghidra address: 01071e10 */
/* Ghidra symbol: FUN_01071e10 */


void FUN_01071e10(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined *local_58;
  wchar_t *local_50;
  undefined1 *local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_58 = &DAT_01071f70;
  local_50 = L"Arduino";
  FUN_00416cd0(&local_20,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 != '\0') {
    FUN_005eba20(local_10,L"UseArduinoCLI",*(undefined4 *)(param_1 + 0x760));
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_28,3);
  return;
}

