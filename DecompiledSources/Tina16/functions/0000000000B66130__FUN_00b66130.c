/* Ghidra address: 00b66130 */
/* Ghidra symbol: FUN_00b66130 */


void FUN_00b66130(longlong param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x225);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),4);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xff);
  lVar5 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  iVar3 = FUN_00b4e330();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_00b53890(uVar1,iVar6);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x208);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x10);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar5 + 0x3e));
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      uVar4 = FUN_0040c770(*(double *)(lVar5 + 0x30) * 20.0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar4);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      uVar2 = 0;
      if (*(char *)(lVar5 + 0x41) != '\0') {
        uVar2 = 0x40;
      }
      uVar2 = uVar2 | 0x180 | (ushort)(*(byte *)(lVar5 + 0x28) & 7);
      if (*(char *)(lVar5 + 0x3c) != '\0') {
        uVar2 = uVar2 | 0x20;
      }
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                   *(int *)(lVar5 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x40) + 0xa0));
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

