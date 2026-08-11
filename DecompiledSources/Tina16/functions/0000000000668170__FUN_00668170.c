/* Ghidra address: 00668170 */
/* Ghidra symbol: FUN_00668170 */


void FUN_00668170(void)

{
  byte bVar1;
  
  DAT_020122d4 = DAT_020122d4 + -1;
  if (DAT_020122d4 == -1) {
    bVar1 = thunk_FUN_04131dd8();
    DAT_020122d0 = 3 < bVar1;
    FUN_006652d0();
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_007d3710,&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_0061c2b8,&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_0061b768,&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_0063afc8,&PTR_FUN_0063d930);
  }
  return;
}

