/* Ghidra address: 005963a0 */
/* Ghidra symbol: FUN_005963a0 */


void FUN_005963a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596b00(param_1);
  if (iVar1 < 0) {
    FUN_0041b800(param_3);
  }
  else {
    FUN_0041b840(param_3,*(undefined8 *)(*param_1 + (longlong)iVar1 * 8));
    FUN_005999b0(param_1,iVar1,3);
  }
  return;
}

