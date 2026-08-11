/* Ghidra address: 00a77b90 */
/* Ghidra symbol: FUN_00a77b90 */


void FUN_00a77b90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6c8) = *param_2;
  *(undefined8 *)(param_1 + 0x6d0) = param_2[1];
  return;
}

