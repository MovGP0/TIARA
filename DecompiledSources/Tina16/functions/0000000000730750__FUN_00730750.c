/* Ghidra address: 00730750 */
/* Ghidra symbol: FUN_00730750 */


void FUN_00730750(void)

{
  code *local_18;
  undefined *local_10;
  
  DAT_020124d0 = DAT_020124d0 + -1;
  if (DAT_020124d0 == -1) {
    FUN_00413b90(&DAT_00730498);
    FUN_007303b0();
    FUN_004a0c40(&PTR_FUN_0063d930);
    FUN_004a0d20(&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_00719158,&PTR_FUN_0063d930);
    FUN_004a0cb0(&PTR_FUN_0071d558,&PTR_FUN_0063d930);
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_007300e0;
    FUN_004d9960(0,&local_18);
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_0072fb00;
    FUN_004d9960(L"DefaultUsrPwDm",&local_18);
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_007300e0;
    FUN_004d9960(L"DefaultUsrPw",&local_18);
  }
  return;
}

