/* Ghidra address: 019b2660 */
/* Ghidra symbol: FUN_019b2660 */


undefined8 FUN_019b2660(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

