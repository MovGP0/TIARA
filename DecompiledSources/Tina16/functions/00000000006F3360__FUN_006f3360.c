/* Ghidra address: 006f3360 */
/* Ghidra symbol: FUN_006f3360 */


void FUN_006f3360(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4db)) {
    *(char *)(param_1 + 0x4db) = param_2;
    FUN_00655b90();
  }
  return;
}

