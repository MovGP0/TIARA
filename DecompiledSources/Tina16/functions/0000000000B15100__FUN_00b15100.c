/* Ghidra address: 00b15100 */
/* Ghidra symbol: FUN_00b15100 */


undefined8 FUN_00b15100(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00415d10(param_1,uVar1 * 2,0);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar1 != 0) {
    uVar2 = FUN_00414df0(param_1);
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + -4) >> 1;
    }
    uVar3 = FUN_00415f70(param_2);
    FUN_00409a70(uVar3,uVar2,(longlong)(int)(uVar1 * 2));
  }
  return param_1;
}

