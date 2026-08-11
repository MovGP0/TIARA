/* Ghidra address: 00706a30 */
/* Ghidra symbol: FUN_00706a30 */


void FUN_00706a30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x4f0) = *param_2;
  *(undefined8 *)(param_1 + 0x4f8) = param_2[1];
  return;
}

