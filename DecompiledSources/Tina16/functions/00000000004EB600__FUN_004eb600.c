/* Ghidra address: 004eb600 */
/* Ghidra symbol: FUN_004eb600 */


void FUN_004eb600(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004eb5b0();
  return;
}

