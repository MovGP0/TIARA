/* Ghidra address: 005eb680 */
/* Ghidra symbol: FUN_005eb680 */


void FUN_005eb680(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  uVar1 = FUN_00416740(param_3);
  FUN_005ebd40(param_1,param_2,uVar1,(iVar2 + 1) * 2,2);
  return;
}

