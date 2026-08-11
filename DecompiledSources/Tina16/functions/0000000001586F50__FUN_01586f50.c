/* Ghidra address: 01586f50 */
/* Ghidra symbol: FUN_01586f50 */


void FUN_01586f50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01586f00();
  return;
}

