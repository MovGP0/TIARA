/* Ghidra address: 00a77b10 */
/* Ghidra symbol: FUN_00a77b10 */


void FUN_00a77b10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x678) = *param_2;
  *(undefined8 *)(param_1 + 0x680) = param_2[1];
  return;
}

