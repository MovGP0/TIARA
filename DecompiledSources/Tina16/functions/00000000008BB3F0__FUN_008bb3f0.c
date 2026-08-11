/* Ghidra address: 008bb3f0 */
/* Ghidra symbol: FUN_008bb3f0 */


undefined8 FUN_008bb3f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

