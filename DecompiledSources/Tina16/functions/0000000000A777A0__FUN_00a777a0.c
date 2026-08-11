/* Ghidra address: 00a777a0 */
/* Ghidra symbol: FUN_00a777a0 */


void FUN_00a777a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x518) = *param_2;
  *(undefined8 *)(param_1 + 0x520) = param_2[1];
  return;
}

