/* Ghidra address: 0068f4b0 */
/* Ghidra symbol: FUN_0068f4b0 */


void FUN_0068f4b0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_00655b90();
  }
  return;
}

