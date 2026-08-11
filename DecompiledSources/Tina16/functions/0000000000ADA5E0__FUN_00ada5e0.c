/* Ghidra address: 00ada5e0 */
/* Ghidra symbol: FUN_00ada5e0 */


void FUN_00ada5e0(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  
  FUN_00414480(param_1 + 0x108);
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x140) + 0x20);
  if (sVar1 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x44) = 4;
  }
  else if (sVar1 == 0xd) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x44) = 3;
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x140));
  }
  else if (sVar1 == 0x3c) {
    FUN_00ada270(auStack_38);
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x44) = 2;
    while (((sVar1 = *(short *)(*(longlong *)(param_1 + 0x140) + 0x20), sVar1 != 0 && (sVar1 != 0xd)
            ) && (sVar1 != 0x3c))) {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x108) + -4);
      }
      FUN_004169f0(param_1 + 0x108,iVar2 + 1);
      lVar3 = FUN_00414de0(param_1 + 0x108);
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x108) + -4);
      }
      *(short *)(lVar3 + -2 + (longlong)iVar2 * 2) = sVar1;
      FUN_00ad1170(*(undefined8 *)(param_1 + 0x140));
    }
  }
  return;
}

