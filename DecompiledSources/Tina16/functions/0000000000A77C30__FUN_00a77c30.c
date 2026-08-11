/* Ghidra address: 00a77c30 */
/* Ghidra symbol: FUN_00a77c30 */


void FUN_00a77c30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x708) = *param_2;
  *(undefined8 *)(param_1 + 0x710) = param_2[1];
  return;
}

