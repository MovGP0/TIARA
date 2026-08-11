/* Ghidra address: 00a77990 */
/* Ghidra symbol: FUN_00a77990 */


void FUN_00a77990(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x5b8) = *param_2;
  *(undefined8 *)(param_1 + 0x5c0) = param_2[1];
  return;
}

