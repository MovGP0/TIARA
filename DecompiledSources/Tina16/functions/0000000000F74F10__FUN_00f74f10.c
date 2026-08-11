/* Ghidra address: 00f74f10 */
/* Ghidra symbol: FUN_00f74f10 */


void FUN_00f74f10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar2);
      FUN_00f6f910(uVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

