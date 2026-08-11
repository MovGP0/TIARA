/* Ghidra address: 01444810 */
/* Ghidra symbol: FUN_01444810 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01444810(undefined4 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_2 + 0x92) == '\0') {
    if (*PTR_DAT_020052b8 == '\0') {
      _DAT_0210e4d0 = 0x46293e5939a08cea;
    }
    else {
      _DAT_0210e4d0 = 0x4197d78400000000;
    }
    FUN_01444670(param_2);
    FUN_01442560(param_1,param_2,param_3,param_4);
  }
  return;
}

