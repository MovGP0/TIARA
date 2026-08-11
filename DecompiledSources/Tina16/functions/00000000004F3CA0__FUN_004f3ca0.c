/* Ghidra address: 004f3ca0 */
/* Ghidra symbol: FUN_004f3ca0 */


undefined8 FUN_004f3ca0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

