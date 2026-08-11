/* Ghidra address: 00b61b30 */
/* Ghidra symbol: FUN_00b61b30 */


undefined4 FUN_00b61b30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  wchar_t *local_60;
  undefined1 local_58;
  undefined1 *local_50;
  int local_48;
  int local_44;
  longlong local_40;
  undefined4 local_34;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_50 = auStack_98;
  local_34 = 0;
  local_30 = (longlong *)FUN_00b17e60(&DAT_00b16888,1,1,param_2);
  local_40 = FUN_00b17d10(local_30[2],"Workbook");
  if (local_40 == 0) {
    local_60 = L"Workbook";
    local_58 = 0x11;
    local_78 = 0;
    uVar2 = FUN_00b147c0(&PTR_FUN_00b141e0,1,2,&local_60);
    FUN_004134c0(uVar2);
  }
  local_28 = (longlong *)FUN_00b5ab80(&DAT_00b5a598,1,local_40);
  FUN_00b5b550(local_28);
  local_20 = local_28[2];
  local_44 = 0;
  local_48 = 5;
  do {
    cVar1 = FUN_00b5b0a0(local_28);
    if ((cVar1 == '\0') || (local_48 <= local_44)) goto code_r0x00b61c33;
    local_44 = local_44 + 1;
  } while (*(int *)(local_20 + 0x10) != 0x2f);
  local_34 = FUN_00b61a00(auStack_98);
code_r0x00b61c33:
  (**(code **)(*local_28 + -0x20))(local_28,1);
  (**(code **)(*local_30 + -0x20))(local_30,1);
  return local_34;
}

