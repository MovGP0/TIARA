/* Ghidra address: 01b9b040 */
/* Ghidra symbol: FUN_01b9b040 */


void FUN_01b9b040(void)

{
  DAT_02110dc0 = DAT_02110dc0 + 1;
  if (DAT_02110dc0 == 0) {
    FUN_00414480(&DAT_02110dc8);
    FUN_00414480(&DAT_02110dd0);
    FUN_00414480(&DAT_02110dd8);
  }
  return;
}

