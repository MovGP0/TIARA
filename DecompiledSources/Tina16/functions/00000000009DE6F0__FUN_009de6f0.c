/* Ghidra address: 009de6f0 */
/* Ghidra symbol: FUN_009de6f0 */


undefined8 FUN_009de6f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

