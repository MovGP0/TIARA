/* Ghidra address: 017f33e0 */
/* Ghidra symbol: FUN_017f33e0 */


void FUN_017f33e0(void)

{
  DAT_02110130 = DAT_02110130 + 1;
  if (DAT_02110130 == 0) {
    FUN_00414480(&DAT_02110140);
    FUN_00414480(&DAT_02110148);
    FUN_00414480(&DAT_02110150);
    FUN_00414480(&DAT_02110158);
  }
  return;
}

