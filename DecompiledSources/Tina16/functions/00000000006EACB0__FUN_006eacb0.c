/* Ghidra address: 006eacb0 */
/* Ghidra symbol: FUN_006eacb0 */


void FUN_006eacb0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e8) != param_2) {
    *(char *)(param_1 + 0x4e8) = param_2;
    FUN_00655b90();
  }
  return;
}

