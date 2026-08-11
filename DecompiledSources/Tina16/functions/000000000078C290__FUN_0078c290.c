/* Ghidra address: 0078c290 */
/* Ghidra symbol: FUN_0078c290 */


void FUN_0078c290(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0078c240();
  return;
}

