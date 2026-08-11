/* Ghidra address: 00bd7690 */
/* Ghidra symbol: FUN_00bd7690 */


int FUN_00bd7690(longlong param_1,short param_2,short param_3)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00bd7720(param_1,iVar3);
      sVar1 = FUN_00bd6e90(uVar2);
      if (sVar1 == param_2) {
        uVar2 = FUN_00bd7720(param_1,iVar3);
        sVar1 = FUN_00bd7120(uVar2);
        if (sVar1 == param_3) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

