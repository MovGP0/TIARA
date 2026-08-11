/* Ghidra address: 004d0e50 */
/* Ghidra symbol: FUN_004d0e50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0e50(void)

{
  DAT_020115d4 = DAT_020115d4 + -1;
  if (DAT_020115d4 == -1) {
    FUN_004d0540();
    _DAT_020115d0 = *(undefined4 *)PTR_DAT_02005280;
  }
  return;
}

