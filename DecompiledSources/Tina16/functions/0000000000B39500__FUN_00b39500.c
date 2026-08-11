/* Ghidra address: 00b39500 */
/* Ghidra symbol: FUN_00b39500 */


void FUN_00b39500(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_00415a60(param_2,*(undefined8 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    FUN_00414bf0(param_1 + 0x28,param_2);
  }
  if (param_2 != 0) {
    FUN_00b39c20(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}

