/* Ghidra address: 0081e4a0 */
/* Ghidra symbol: FUN_0081e4a0 */


void FUN_0081e4a0(void)

{
  DAT_02012688 = DAT_02012688 + -1;
  if (DAT_02012688 == -1) {
    FUN_00413b90(&DAT_0081e430);
    FUN_0080f640();
    DAT_0201268c = thunk_FUN_03ce67dd(L"TaskbarCreated");
    DAT_02012690 = thunk_FUN_03ce67dd(L"TaskbarButtonCreated");
    FUN_004a4f10(FUN_007f97d0);
    DAT_020126b0 = 0;
  }
  return;
}

