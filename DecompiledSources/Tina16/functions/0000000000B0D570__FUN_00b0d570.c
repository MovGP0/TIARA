/* Ghidra address: 00b0d570 */
/* Ghidra symbol: FUN_00b0d570 */


int FUN_00b0d570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_00415f70(param_2);
  uVar3 = FUN_00415f70(param_1);
  lVar4 = FUN_00b0d500(lVar2,uVar3);
  if (lVar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)((lVar4 - lVar2) / 2) + 1;
  }
  return iVar1;
}

