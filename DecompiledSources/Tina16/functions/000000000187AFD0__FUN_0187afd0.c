/* Ghidra address: 0187afd0 */
/* Ghidra symbol: FUN_0187afd0 */


void FUN_0187afd0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01879fc0(param_1,iVar2);
      FUN_01879960(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

