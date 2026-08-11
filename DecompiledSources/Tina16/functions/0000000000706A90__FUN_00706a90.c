/* Ghidra address: 00706a90 */
/* Ghidra symbol: FUN_00706a90 */


void FUN_00706a90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x530) = *param_2;
  *(undefined8 *)(param_1 + 0x538) = param_2[1];
  return;
}

