/* Ghidra address: 00d08310 */
/* Ghidra symbol: FUN_00d08310 */


void FUN_00d08310(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

