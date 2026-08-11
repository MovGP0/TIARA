/* Ghidra address: 01c32df0 */
/* Ghidra symbol: FUN_01c32df0 */


void FUN_01c32df0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_01c32d30(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  if (param_2 + 1 <= iVar1) {
    iVar2 = ((param_2 + 1) - iVar1) + -1;
    do {
      uVar3 = FUN_01c32d10(param_1,iVar1 + -1);
      FUN_01c32d20(param_1,iVar1,uVar3);
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  FUN_01c32d20(param_1,param_2,param_3);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

