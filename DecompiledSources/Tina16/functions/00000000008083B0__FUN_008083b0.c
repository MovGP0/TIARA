/* Ghidra address: 008083b0 */
/* Ghidra symbol: FUN_008083b0 */


undefined8 FUN_008083b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_00808040();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00808020(*(undefined8 *)(param_1 + 0x30),iVar4);
      if (*(longlong *)(lVar2 + 8) == *(longlong *)(param_1 + 0x38)) {
        uVar3 = FUN_00808020(*(undefined8 *)(param_1 + 0x30),iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

