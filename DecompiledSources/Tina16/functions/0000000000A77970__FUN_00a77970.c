/* Ghidra address: 00a77970 */
/* Ghidra symbol: FUN_00a77970 */


void FUN_00a77970(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x5a8) = *param_2;
  *(undefined8 *)(param_1 + 0x5b0) = param_2[1];
  return;
}

