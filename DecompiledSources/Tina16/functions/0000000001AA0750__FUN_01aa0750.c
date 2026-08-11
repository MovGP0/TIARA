/* Ghidra address: 01aa0750 */
/* Ghidra symbol: FUN_01aa0750 */


void FUN_01aa0750(void)

{
  DAT_02110a40 = DAT_02110a40 + 1;
  if (DAT_02110a40 == 0) {
    FUN_00414480(&DAT_01fcd500);
    FUN_00417840(&PTR_u_COL_Bckgrnd_01fcd578,&DAT_00401390,0x1b);
    FUN_00417840(&DAT_02110968,&DAT_00401390,0x1b);
  }
  return;
}

