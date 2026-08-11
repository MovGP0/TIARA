/* Ghidra address: 01544450 */
/* Ghidra symbol: FUN_01544450 */


void FUN_01544450(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_01d347d0(param_2,iVar2);
      FUN_01544410(param_1,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

