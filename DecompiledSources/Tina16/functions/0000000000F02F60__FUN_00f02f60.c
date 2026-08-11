/* Ghidra address: 00f02f60 */
/* Ghidra symbol: FUN_00f02f60 */


undefined8 FUN_00f02f60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00f03100(param_1);
  if (lVar1 == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x38));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x350));
  }
  return param_2;
}

