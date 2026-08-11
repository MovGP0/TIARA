/* Ghidra address: 012bedf0 */
/* Ghidra symbol: FUN_012bedf0 */


undefined8 FUN_012bedf0(longlong param_1,short param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar3);
      if (*(short *)(lVar1 + 8) == param_2) {
        uVar2 = FUN_004aeac0(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

