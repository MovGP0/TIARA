/* Ghidra address: 0042b5f0 */
/* Ghidra symbol: FUN_0042b5f0 */


void FUN_0042b5f0(void)

{
  DAT_0200c30c = DAT_0200c30c + 1;
  if ((DAT_0200c30c == 0) && (DAT_0200c310 != 0)) {
    thunk_FUN_041c8c2f(DAT_0200c310);
    DAT_0200c310 = 0;
  }
  return;
}

