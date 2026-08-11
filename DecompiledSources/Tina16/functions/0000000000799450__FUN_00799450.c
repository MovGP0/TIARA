/* Ghidra address: 00799450 */
/* Ghidra symbol: FUN_00799450 */


void FUN_00799450(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00799400();
  return;
}

