/* Ghidra address: 00554100 */
/* Ghidra symbol: FUN_00554100 */


undefined8 FUN_00554100(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00419430(param_2,&DAT_00531510);
  }
  else {
    FUN_00552470(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  return param_2;
}

