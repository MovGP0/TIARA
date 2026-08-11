/* Ghidra address: 00ce9860 */
/* Ghidra symbol: FUN_00ce9860 */


undefined8 FUN_00ce9860(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00452200(*(undefined8 *)(param_1 + 0x38));
  }
  else if (param_2 == '\x01') {
    FUN_004520b0(*(undefined8 *)(param_1 + 0x38));
  }
  return *(undefined8 *)(param_1 + 0x30);
}

