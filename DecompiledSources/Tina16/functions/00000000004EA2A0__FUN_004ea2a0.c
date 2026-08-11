/* Ghidra address: 004ea2a0 */
/* Ghidra symbol: FUN_004ea2a0 */


void FUN_004ea2a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004ea250();
  return;
}

