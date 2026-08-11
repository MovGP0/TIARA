/* Ghidra address: 00596620 */
/* Ghidra symbol: FUN_00596620 */


void FUN_00596620(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00596b00(param_1);
  if (iVar1 < 0) {
    FUN_004144d0(param_3);
  }
  else {
    FUN_00414bf0(param_3,*(undefined8 *)(*param_1 + (longlong)iVar1 * 8));
    FUN_005999b0(param_1,iVar1,3);
  }
  return;
}

