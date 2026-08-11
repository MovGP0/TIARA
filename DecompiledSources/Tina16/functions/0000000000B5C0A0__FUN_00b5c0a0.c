/* Ghidra address: 00b5c0a0 */
/* Ghidra symbol: FUN_00b5c0a0 */


void FUN_00b5c0a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  wchar_t *local_40;
  undefined1 local_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_78;
  local_20 = FUN_00b17d10(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),"Workbook");
  if (local_20 == 0) {
    local_40 = L"Workbook";
    local_38 = 0x11;
    local_58 = 0;
    uVar2 = FUN_00b147c0(&PTR_FUN_00b141e0,1,2,&local_40);
    FUN_004134c0(uVar2);
  }
  FUN_00b5a0f0(*(undefined8 *)(param_1 + 0x18),1);
  local_48 = FUN_00b5ab80(&DAT_00b5a598,1,local_20);
  *(undefined8 *)(param_1 + 0x70) = local_48;
  FUN_00b5b550(local_48);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10);
  *(undefined1 *)(param_1 + 0x44) = 1;
  while( true ) {
    cVar1 = FUN_00b5c270(param_1);
    if (cVar1 == '\0') break;
    FUN_00b5c380(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + -0x20))(*(longlong **)(param_1 + 0x70),1);
  FUN_00b5a0f0(*(undefined8 *)(param_1 + 0x18),2);
  return;
}

