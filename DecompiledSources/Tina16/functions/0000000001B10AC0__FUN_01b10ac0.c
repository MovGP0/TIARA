/* Ghidra address: 01b10ac0 */
/* Ghidra symbol: FUN_01b10ac0 */


void FUN_01b10ac0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar2);
      FUN_017c52b0(lVar1 + 8,param_2);
      FUN_017c52b0(lVar1 + 0x10,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

