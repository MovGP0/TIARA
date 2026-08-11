/* Ghidra address: 00717040 */
/* Ghidra symbol: FUN_00717040 */


void FUN_00717040(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00716ff0();
  return;
}

