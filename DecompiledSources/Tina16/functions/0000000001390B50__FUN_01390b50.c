/* Ghidra address: 01390b50 */
/* Ghidra symbol: FUN_01390b50 */


void FUN_01390b50(longlong param_1,double param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      if ((*(double *)(lVar1 + 8) != param_2) && (*(longlong *)(lVar1 + 0x10) != 0)) {
        **(undefined8 **)(lVar1 + 0x10) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

