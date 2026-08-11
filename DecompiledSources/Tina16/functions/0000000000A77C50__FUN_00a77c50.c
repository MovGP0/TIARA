/* Ghidra address: 00a77c50 */
/* Ghidra symbol: FUN_00a77c50 */


void FUN_00a77c50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x718) = *param_2;
  *(undefined8 *)(param_1 + 0x720) = param_2[1];
  return;
}

