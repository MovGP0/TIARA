/* Ghidra address: 012bf060 */
/* Ghidra symbol: FUN_012bf060 */


int FUN_012bf060(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 4;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar4);
      iVar1 = FUN_012be800(uVar2,param_2);
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar3;
}

