/* Ghidra address: 00730620 */
/* Ghidra symbol: FUN_00730620 */


void FUN_00730620(void)

{
  code *local_18;
  undefined *local_10;
  
  DAT_020124d0 = DAT_020124d0 + 1;
  if (DAT_020124d0 == 0) {
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_007300e0;
    FUN_004d9aa0(L"DefaultUsrPw",&local_18);
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_0072fb00;
    FUN_004d9aa0(L"DefaultUsrPwDm",&local_18);
    local_10 = &DAT_0072f6c0;
    local_18 = FUN_007300e0;
    FUN_004d9aa0(0,&local_18);
    if (DAT_01e050f8 != 0) {
      thunk_FUN_0418b98f(DAT_01e050f8);
    }
    FUN_00417840(&PTR_DAT_01e068d8,&DAT_00401390,0xc);
  }
  return;
}

