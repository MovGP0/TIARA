/* Ghidra address: 006804f0 */
/* Ghidra symbol: FUN_006804f0 */


void FUN_006804f0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a1) != param_2) {
    *(char *)(param_1 + 0x4a1) = param_2;
    FUN_00655b90();
  }
  return;
}

