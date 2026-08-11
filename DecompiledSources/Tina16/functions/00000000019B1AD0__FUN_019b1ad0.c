/* Ghidra address: 019b1ad0 */
/* Ghidra symbol: FUN_019b1ad0 */


void FUN_019b1ad0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_019b1a80();
  return;
}

