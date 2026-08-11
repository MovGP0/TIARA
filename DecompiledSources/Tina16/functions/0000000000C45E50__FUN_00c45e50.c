/* Ghidra address: 00c45e50 */
/* Ghidra symbol: FUN_00c45e50 */


void FUN_00c45e50(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = FUN_00c45ea0(0,0,0);
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  uVar2 = FUN_00416740(param_1);
  FUN_00c45ea0(uVar1,uVar2,iVar3 * 2);
  return;
}

