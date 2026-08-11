/* Ghidra address: 00a77b30 */
/* Ghidra symbol: FUN_00a77b30 */


void FUN_00a77b30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x688) = *param_2;
  *(undefined8 *)(param_1 + 0x690) = param_2[1];
  return;
}

