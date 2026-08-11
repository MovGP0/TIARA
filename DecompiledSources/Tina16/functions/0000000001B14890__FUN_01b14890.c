/* Ghidra address: 01b14890 */
/* Ghidra symbol: FUN_01b14890 */


undefined8 FUN_01b14890(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  return **(undefined8 **)(param_1 + 8);
}

