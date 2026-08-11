/* Ghidra address: 01090500 */
/* Ghidra symbol: FUN_01090500 */


void FUN_01090500(void)

{
  DAT_0202f8a8 = DAT_0202f8a8 + 1;
  if (DAT_0202f8a8 == 0) {
    FUN_00414480(&DAT_0202f8b8);
    FUN_00414480(&DAT_0202f8c0);
    FUN_00414480(&DAT_0202f8c8);
    FUN_00414480(&DAT_0202f8d0);
  }
  return;
}

