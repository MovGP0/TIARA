/* Ghidra address: 0123d9a0 */
/* Ghidra symbol: FUN_0123d9a0 */


void FUN_0123d9a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x58),iVar3);
      lVar2 = FUN_019ac5b0(param_3,*(undefined8 *)(lVar1 + 8));
      if (lVar2 != 0) {
        FUN_0123b5e0(param_2,lVar2,*(undefined8 *)(lVar1 + 0x10));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

