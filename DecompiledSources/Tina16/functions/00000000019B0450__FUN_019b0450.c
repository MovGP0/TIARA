/* Ghidra address: 019b0450 */
/* Ghidra symbol: FUN_019b0450 */


void FUN_019b0450(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_019b0400();
  return;
}

