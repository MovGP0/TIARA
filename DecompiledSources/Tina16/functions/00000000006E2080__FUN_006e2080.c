/* Ghidra address: 006e2080 */
/* Ghidra symbol: FUN_006e2080 */


void FUN_006e2080(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x491) != param_2) {
    *(char *)(param_1 + 0x491) = param_2;
    FUN_00655b90();
  }
  return;
}

