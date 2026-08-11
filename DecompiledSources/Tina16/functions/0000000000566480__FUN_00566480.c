/* Ghidra address: 00566480 */
/* Ghidra symbol: FUN_00566480 */


void FUN_00566480(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00566430();
  return;
}

