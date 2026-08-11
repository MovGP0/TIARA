/* Ghidra address: 00bfb420 */
/* Ghidra symbol: FUN_00bfb420 */


void FUN_00bfb420(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e0) != param_2) {
    *(char *)(param_1 + 0x4e0) = param_2;
    FUN_00c0ddc0();
  }
  return;
}

