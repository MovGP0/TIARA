/* Ghidra address: 00a77c10 */
/* Ghidra symbol: FUN_00a77c10 */


void FUN_00a77c10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6f8) = *param_2;
  *(undefined8 *)(param_1 + 0x700) = param_2[1];
  return;
}

