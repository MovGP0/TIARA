/* Ghidra address: 00f6f640 */
/* Ghidra symbol: FUN_00f6f640 */


undefined8 FUN_00f6f640(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6f4e0();
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x60));
  }
  return param_2;
}

