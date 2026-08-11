/* Ghidra address: 00682ee0 */
/* Ghidra symbol: FUN_00682ee0 */


void FUN_00682ee0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e0) != param_2) {
    *(char *)(param_1 + 0x4e0) = param_2;
    FUN_00655b90();
  }
  return;
}

