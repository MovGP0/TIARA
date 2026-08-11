/* Ghidra address: 008068c0 */
/* Ghidra symbol: FUN_008068c0 */


void FUN_008068c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x631) != param_2) {
    *(char *)(param_1 + 0x631) = param_2;
    FUN_00806770();
  }
  return;
}

