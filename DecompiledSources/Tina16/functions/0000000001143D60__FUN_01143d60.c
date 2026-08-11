/* Ghidra address: 01143d60 */
/* Ghidra symbol: FUN_01143d60 */


void FUN_01143d60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01143d10();
  return;
}

