/* Ghidra address: 009ae840 */
/* Ghidra symbol: FUN_009ae840 */


undefined8 FUN_009ae840(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

