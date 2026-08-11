/* Ghidra address: 0186b8a0 */
/* Ghidra symbol: FUN_0186b8a0 */


void FUN_0186b8a0(void)

{
  DAT_021104f4 = DAT_021104f4 + 1;
  if (DAT_021104f4 == 0) {
    thunk_FUN_0418b98f(DAT_021104fe);
    thunk_FUN_0418b98f(DAT_021104fc);
    FUN_00410f20(DAT_01fafa08);
    DAT_01fafa08 = 0;
    DAT_021104fa = 1;
    FUN_00414480(&DAT_02110500);
    FUN_00414480(&DAT_02110508);
  }
  return;
}

