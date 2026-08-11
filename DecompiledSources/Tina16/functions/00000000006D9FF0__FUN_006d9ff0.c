/* Ghidra address: 006d9ff0 */
/* Ghidra symbol: FUN_006d9ff0 */


int FUN_006d9ff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_004b1870();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006da380(*(undefined8 *)(param_1 + 8),iVar4);
      iVar3 = iVar3 + *(int *)(lVar2 + 0x20);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

