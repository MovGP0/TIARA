/* Ghidra address: 005a6fe0 */
/* Ghidra symbol: FUN_005a6fe0 */


void FUN_005a6fe0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005a6f90();
  return;
}

