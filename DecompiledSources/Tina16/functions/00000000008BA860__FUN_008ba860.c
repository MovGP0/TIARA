/* Ghidra address: 008ba860 */
/* Ghidra symbol: FUN_008ba860 */


void FUN_008ba860(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_008ba810();
  return;
}

