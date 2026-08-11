/* Ghidra address: 00a77b70 */
/* Ghidra symbol: FUN_00a77b70 */


void FUN_00a77b70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6a8) = *param_2;
  *(undefined8 *)(param_1 + 0x6b0) = param_2[1];
  return;
}

