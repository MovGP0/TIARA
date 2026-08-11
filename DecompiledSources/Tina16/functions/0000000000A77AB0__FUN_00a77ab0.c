/* Ghidra address: 00a77ab0 */
/* Ghidra symbol: FUN_00a77ab0 */


void FUN_00a77ab0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x648) = *param_2;
  *(undefined8 *)(param_1 + 0x650) = param_2[1];
  return;
}

