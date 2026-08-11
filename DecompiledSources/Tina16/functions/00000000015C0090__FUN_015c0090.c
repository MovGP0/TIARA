/* Ghidra address: 015c0090 */
/* Ghidra symbol: FUN_015c0090 */


void FUN_015c0090(longlong param_1,byte param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_004b56a0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

