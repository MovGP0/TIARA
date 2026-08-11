/* Ghidra address: 0056fb70 */
/* Ghidra symbol: FUN_0056fb70 */


void FUN_0056fb70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0056fb20();
  return;
}

