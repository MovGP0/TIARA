/* Ghidra address: 00f06430 */
/* Ghidra symbol: FUN_00f06430 */


void FUN_00f06430(double param_1,double param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  double dVar6;
  
  if ((param_1 == 0.0) && (param_1 = param_2, param_2 == 0.0)) {
    param_1 = 1.0;
  }
  uVar5 = FUN_0040c850(param_1);
  dVar6 = (double)FUN_00c43d10(uVar5);
  if (0.0 <= dVar6) {
    FUN_00c43d10(uVar5);
    iVar2 = FUN_00f05450();
    iVar3 = iVar2 / 3;
    uVar4 = (longlong)iVar2 % 3 & 0xffffffff;
  }
  else {
    FUN_00c43d10(uVar5);
    uVar1 = FUN_00f05450();
    iVar2 = FUN_00f05360(uVar1,3);
    if (iVar2 == 0) {
      FUN_00c43d10(uVar5);
      iVar2 = FUN_00f05450();
      iVar3 = iVar2 / 3;
      uVar4 = (longlong)iVar2 % 3 & 0xffffffff;
    }
    else {
      FUN_00c43d10(uVar5);
      iVar2 = FUN_00f05450();
      uVar4 = (longlong)iVar2 % 3 & 0xffffffff;
      iVar3 = iVar2 / 3 + -1;
    }
  }
  FUN_00c43d20((double)(iVar3 * 3),uVar4);
  return;
}

