/* Ghidra address: 00729210 */
/* Ghidra symbol: FUN_00729210 */


void FUN_00729210(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0xa0));
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0xa0,param_2);
  }
  return;
}

