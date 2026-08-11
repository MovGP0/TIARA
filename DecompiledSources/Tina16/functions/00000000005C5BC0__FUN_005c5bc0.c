/* Ghidra address: 005c5bc0 */
/* Ghidra symbol: FUN_005c5bc0 */


void FUN_005c5bc0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005c5b70();
  return;
}

