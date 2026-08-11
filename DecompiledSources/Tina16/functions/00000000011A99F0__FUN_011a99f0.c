/* Ghidra address: 011a99f0 */
/* Ghidra symbol: FUN_011a99f0 */


void FUN_011a99f0(void)

{
  DAT_020c6570 = DAT_020c6570 + 1;
  if (DAT_020c6570 == 0) {
    FUN_00414480(&DAT_01f2a3f0);
    FUN_00417840(&PTR_DAT_01f2a3f8,&DAT_00401390,8);
    FUN_00417840(&DAT_020c6580,&DAT_00401390,0x100);
    FUN_00414480(&DAT_01f2a438);
    FUN_00414480(&DAT_01f2a458);
  }
  return;
}

