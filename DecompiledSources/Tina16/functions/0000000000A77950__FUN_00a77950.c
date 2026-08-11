/* Ghidra address: 00a77950 */
/* Ghidra symbol: FUN_00a77950 */


void FUN_00a77950(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x598) = *param_2;
  *(undefined8 *)(param_1 + 0x5a0) = param_2[1];
  return;
}

