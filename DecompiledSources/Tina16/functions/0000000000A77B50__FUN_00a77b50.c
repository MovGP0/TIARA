/* Ghidra address: 00a77b50 */
/* Ghidra symbol: FUN_00a77b50 */


void FUN_00a77b50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x698) = *param_2;
  *(undefined8 *)(param_1 + 0x6a0) = param_2[1];
  return;
}

