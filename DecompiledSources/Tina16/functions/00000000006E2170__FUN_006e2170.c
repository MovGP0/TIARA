/* Ghidra address: 006e2170 */
/* Ghidra symbol: FUN_006e2170 */


void FUN_006e2170(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x512) != param_2) {
    *(char *)(param_1 + 0x512) = param_2;
    FUN_006d3ef0(param_1,8,param_2 == '\0');
  }
  return;
}

