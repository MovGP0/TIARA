/* Ghidra address: 00b67760 */
/* Ghidra symbol: FUN_00b67760 */


void FUN_00b67760(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_28;
  byte local_19;
  
  local_28 = 0;
  FUN_00b62ce0(param_1,0xfc);
  local_30 = *(undefined4 *)(param_1 + 0x30);
  FUN_00b62ce0(param_1,0);
  uVar1 = FUN_00b1b130(*(undefined8 *)(param_1 + 0x58));
  FUN_00b62d00(param_1,uVar1);
  uVar1 = FUN_00b1b130(*(undefined8 *)(param_1 + 0x58));
  FUN_00b62d00(param_1,uVar1);
  local_34 = 8;
  iVar2 = FUN_00b1b130();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00b1b150(*(undefined8 *)(param_1 + 0x58),&local_28,iVar3);
      local_19 = *(byte *)(local_28 + 2) & 1;
      local_38 = 0;
      if (local_28 != 0) {
        local_38 = *(undefined4 *)(local_28 + -4);
      }
      FUN_00b67670(auStack_58);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00b67610(auStack_58);
  FUN_00b62ce0(param_1,0xff);
  FUN_00b62ce0(param_1,2);
  FUN_00b62ce0(param_1,0);
  FUN_004144d0(&local_28);
  return;
}

