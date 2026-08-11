/* Ghidra address: 01681460 */
/* Ghidra symbol: FUN_01681460 */


undefined8 FUN_01681460(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

