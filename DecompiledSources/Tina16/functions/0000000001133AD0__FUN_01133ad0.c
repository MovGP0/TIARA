/* Ghidra address: 01133ad0 */
/* Ghidra symbol: FUN_01133ad0 */


void FUN_01133ad0(void)

{
  DAT_020301a4 = DAT_020301a4 + 1;
  if (DAT_020301a4 == 0) {
    if (0x20 < DAT_01f25608) {
      thunk_FUN_041c8c2f(DAT_01f25608);
    }
    FUN_00410f20(DAT_020301a8);
  }
  return;
}

