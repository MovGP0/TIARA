/* Ghidra address: 00596580 */
/* Ghidra symbol: FUN_00596580 */


void FUN_00596580(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596bf0(param_1);
  if (iVar1 < 0) {
    FUN_00414480(param_3);
  }
  else {
    FUN_00414ad0(param_3,*(undefined8 *)(*param_1 + (longlong)iVar1 * 8));
    FUN_005999b0(param_1,iVar1,3);
  }
  return;
}

