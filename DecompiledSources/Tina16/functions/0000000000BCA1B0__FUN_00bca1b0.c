/* Ghidra address: 00bca1b0 */
/* Ghidra symbol: FUN_00bca1b0 */


void FUN_00bca1b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x1c8));
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x1c8,param_2);
    FUN_00bc5ca0(param_1);
  }
  return;
}

