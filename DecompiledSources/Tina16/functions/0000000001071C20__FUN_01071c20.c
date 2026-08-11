/* Ghidra address: 01071c20 */
/* Ghidra symbol: FUN_01071c20 */


void FUN_01071c20(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined *local_68;
  wchar_t *local_60;
  undefined1 *local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_88;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  local_68 = &DAT_01071dc0;
  local_60 = L"Arduino";
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_20,L"UseArduinoCLI");
    cVar1 = FUN_005ebec0(local_10,local_20);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x760) = 0;
    }
    else {
      uVar2 = FUN_005eba50(local_10,local_20);
      *(undefined4 *)(param_1 + 0x760) = uVar2;
    }
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_30,4);
  return;
}

