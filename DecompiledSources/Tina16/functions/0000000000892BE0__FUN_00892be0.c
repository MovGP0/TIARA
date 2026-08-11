/* Ghidra address: 00892be0 */
/* Ghidra symbol: FUN_00892be0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00892be0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00874a20(&DAT_01e234c0,0);
  if (lVar1 != 0) {
    thunk_FUN_041c8c2f(lVar1);
  }
  lVar1 = FUN_00874a20(&DAT_01e234c8,0);
  if (lVar1 != 0) {
    thunk_FUN_041c8c2f(lVar1);
  }
  _DAT_01e23498 = 0;
  _DAT_01e234a0 = 0;
  DAT_01e234a8 = 0;
  _DAT_01e234b0 = 0;
  DAT_01e234b8 = 0;
  return;
}

