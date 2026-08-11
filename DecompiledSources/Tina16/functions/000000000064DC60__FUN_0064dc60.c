/* Ghidra address: 0064dc60 */
/* Ghidra symbol: FUN_0064dc60 */


void FUN_0064dc60(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xaa) != param_2) {
    *(char *)(param_1 + 0xaa) = param_2;
    FUN_0064fca0(param_1,0xb00c,0,0);
  }
  return;
}

