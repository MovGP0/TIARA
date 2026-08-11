/* Ghidra address: 00f7fab0 */
/* Ghidra symbol: FUN_00f7fab0 */


undefined8 FUN_00f7fab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00f81cc0(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),&DAT_00f7fb48);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),&DAT_00f7fb58), iVar1 != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

