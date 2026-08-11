/* Ghidra address: 016d1080 */
/* Ghidra symbol: FUN_016d1080 */


undefined8 FUN_016d1080(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

