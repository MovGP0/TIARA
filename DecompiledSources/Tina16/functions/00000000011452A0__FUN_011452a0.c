/* Ghidra address: 011452a0 */
/* Ghidra symbol: FUN_011452a0 */


void FUN_011452a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01145250();
  return;
}

