/* Ghidra address: 00b04800 */
/* Ghidra symbol: FUN_00b04800 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b04800(void)

{
  if (DAT_01e80a08 == '\0') {
    DAT_01e80a0c = FUN_00409a00();
  }
  else {
    _DAT_01e80a10 = FUN_00409a00();
  }
  if ((DAT_01e80a08 == '\0') && (DAT_01e80a0c == 0)) {
    DAT_01e80a08 = 0;
  }
  else {
    DAT_01e80a08 = 1;
  }
  return;
}

