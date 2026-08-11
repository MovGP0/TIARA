/* Ghidra address: 004e43f0 */
/* Ghidra symbol: FUN_004e43f0 */


void FUN_004e43f0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004e43a0();
  return;
}

