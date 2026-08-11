/* Ghidra address: 0167f270 */
/* Ghidra symbol: FUN_0167f270 */


void FUN_0167f270(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0167f220();
  return;
}

