/* Ghidra address: 01c7cad0 */
/* Ghidra symbol: FUN_01c7cad0 */


void FUN_01c7cad0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1800) != '\0') && (0 < *(int *)(param_1 + 0x17f8))) {
    *(int *)(param_1 + 0x17f8) = *(int *)(param_1 + 0x17f8) + -1;
    FUN_01c7c9a0();
  }
  return;
}

