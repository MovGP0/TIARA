/* Ghidra address: 004f4f90 */
/* Ghidra symbol: FUN_004f4f90 */


undefined8 FUN_004f4f90(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

