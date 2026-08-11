/* Ghidra address: 00416020 */
/* Ghidra symbol: FUN_00416020 */


void FUN_00416020(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_3 + -4) >> 1;
  }
  if ((uVar2 == 0) && (uVar3 == 0)) {
    FUN_00414520(param_1);
  }
  else {
    lVar1 = FUN_00414450(uVar2 + uVar3);
    FUN_00409a70(param_2,lVar1,(longlong)(int)(uVar2 * 2));
    FUN_00409a70(param_3,lVar1 + (longlong)(int)uVar2 * 2,(longlong)(int)(uVar3 * 2));
    FUN_00415e00(param_1,lVar1);
  }
  return;
}

