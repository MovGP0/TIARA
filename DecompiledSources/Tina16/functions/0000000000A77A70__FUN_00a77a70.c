/* Ghidra address: 00a77a70 */
/* Ghidra symbol: FUN_00a77a70 */


void FUN_00a77a70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x628) = *param_2;
  *(undefined8 *)(param_1 + 0x630) = param_2[1];
  return;
}

