/* Ghidra address: 00a77bb0 */
/* Ghidra symbol: FUN_00a77bb0 */


void FUN_00a77bb0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x6b8) = *param_2;
  *(undefined8 *)(param_1 + 0x6c0) = param_2[1];
  return;
}

