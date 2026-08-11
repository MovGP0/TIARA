/* Ghidra address: 00a77a10 */
/* Ghidra symbol: FUN_00a77a10 */


void FUN_00a77a10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x5f8) = *param_2;
  *(undefined8 *)(param_1 + 0x600) = param_2[1];
  return;
}

