/* Ghidra address: 005ba810 */
/* Ghidra symbol: FUN_005ba810 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ba810(void)

{
  DAT_02011f0c = DAT_02011f0c + -1;
  if (DAT_02011f0c == -1) {
    DAT_02011f10 = 0x8000000000000000;
    _DAT_02011f18 = 0x7fffffffffffffff;
  }
  return;
}

