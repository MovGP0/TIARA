/* Ghidra address: 004e0e10 */
/* Ghidra symbol: FUN_004e0e10 */


void FUN_004e0e10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004e0dc0();
  return;
}

