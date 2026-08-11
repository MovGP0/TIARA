/* Ghidra address: 0074e490 */
/* Ghidra symbol: FUN_0074e490 */


void FUN_0074e490(void)

{
  DAT_0201251c = DAT_0201251c + -1;
  if (DAT_0201251c == -1) {
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_007334d8,&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_007405a8,&PTR_FUN_0063d930);
    DAT_02012518 = thunk_FUN_03ce67dd(L"TaskbarCreated");
  }
  return;
}

