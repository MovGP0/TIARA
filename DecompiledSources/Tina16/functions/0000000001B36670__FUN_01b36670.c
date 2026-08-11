/* Ghidra address: 01b36670 */
/* Ghidra symbol: FUN_01b36670 */


void FUN_01b36670(void)

{
  DAT_02110d1c = DAT_02110d1c + 1;
  if (DAT_02110d1c == 0) {
    FUN_00414480(&DAT_01fd66d0);
    FUN_00417840(&PTR_DAT_01fd66d8,&DAT_00401390,8);
    FUN_00417840(&PTR_DAT_01fd6718,&DAT_00401390,8);
    FUN_00414480(&DAT_02110d08);
    FUN_00414480(&DAT_02110d10);
  }
  return;
}

