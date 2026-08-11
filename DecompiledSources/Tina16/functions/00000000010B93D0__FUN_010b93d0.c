/* Ghidra address: 010b93d0 */
/* Ghidra symbol: FUN_010b93d0 */


void FUN_010b93d0(longlong param_1)

{
  FUN_01cf0ef0(param_1);
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x50);
  }
  return;
}

