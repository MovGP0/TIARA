/* Ghidra address: 0082cb80 */
/* Ghidra symbol: FUN_0082cb80 */


void FUN_0082cb80(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0082cb30();
  return;
}

