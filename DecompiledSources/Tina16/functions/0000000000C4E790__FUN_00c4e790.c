/* Ghidra address: 00c4e790 */
/* Ghidra symbol: FUN_00c4e790 */


void FUN_00c4e790(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00c4e740();
  return;
}

