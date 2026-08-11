/* Ghidra address: 006d5190 */
/* Ghidra symbol: FUN_006d5190 */


void FUN_006d5190(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x498) != param_2) {
    *(char *)(param_1 + 0x498) = param_2;
    FUN_00655b90();
  }
  return;
}

