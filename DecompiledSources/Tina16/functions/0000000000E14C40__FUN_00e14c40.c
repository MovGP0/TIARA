/* Ghidra address: 00e14c40 */
/* Ghidra symbol: FUN_00e14c40 */


undefined4 FUN_00e14c40(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar3);
      if (*(int *)(lVar2 + 8) == param_2) {
        uVar1 = FUN_00e140c0(*(undefined8 *)(lVar2 + 0x10),*(undefined1 *)(param_1 + 0x20));
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

