/* Ghidra address: 00eed9b0 */
/* Ghidra symbol: FUN_00eed9b0 */


void FUN_00eed9b0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00eed960();
  return;
}

