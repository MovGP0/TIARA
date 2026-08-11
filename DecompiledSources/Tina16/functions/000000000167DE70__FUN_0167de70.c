/* Ghidra address: 0167de70 */
/* Ghidra symbol: FUN_0167de70 */


void FUN_0167de70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0167de20();
  return;
}

