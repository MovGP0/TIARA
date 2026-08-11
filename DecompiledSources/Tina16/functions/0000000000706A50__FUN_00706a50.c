/* Ghidra address: 00706a50 */
/* Ghidra symbol: FUN_00706a50 */


void FUN_00706a50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x500) = *param_2;
  *(undefined8 *)(param_1 + 0x508) = param_2[1];
  return;
}

