/* Ghidra address: 00f74a00 */
/* Ghidra symbol: FUN_00f74a00 */


int FUN_00f74a00(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = -10000;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(param_1,iVar4);
      iVar1 = FUN_00f6e920(uVar3);
      if (iVar2 < iVar1) {
        iVar2 = FUN_00f6e920(uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar2;
}

