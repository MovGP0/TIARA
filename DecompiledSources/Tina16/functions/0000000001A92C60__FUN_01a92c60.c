/* Ghidra address: 01a92c60 */
/* Ghidra symbol: FUN_01a92c60 */


void FUN_01a92c60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01a92c10();
  return;
}

