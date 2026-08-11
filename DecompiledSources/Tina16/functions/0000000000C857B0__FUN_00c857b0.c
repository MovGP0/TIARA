/* Ghidra address: 00c857b0 */
/* Ghidra symbol: FUN_00c857b0 */


undefined8 FUN_00c857b0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_00c831c0(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
    FUN_00c831c0(*(undefined8 *)(param_1 + 8),param_2);
  }
  return param_2;
}

