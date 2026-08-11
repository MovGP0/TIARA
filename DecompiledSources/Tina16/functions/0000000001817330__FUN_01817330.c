/* Ghidra address: 01817330 */
/* Ghidra symbol: FUN_01817330 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01817330(void)

{
  DAT_0211027c = DAT_0211027c + -1;
  if (DAT_0211027c == -1) {
    DAT_02110280 = thunk_FUN_04163be6(L"user32.dll");
    DAT_02110288 = 0;
    _DAT_02110290 = 0;
    if (DAT_02110280 != 0) {
      DAT_02110288 = FUN_00427c10(DAT_02110280,L"GetDpiForWindow");
      _DAT_02110290 = FUN_00427c10(DAT_02110280,L"SetProcessDpiAwarenessContext");
      DAT_02110298 = FUN_00427c10(DAT_02110280,L"GetThreadDpiAwarenessContext");
      DAT_021102a0 = FUN_00427c10(DAT_02110280,L"SetThreadDpiAwarenessContext");
    }
  }
  return;
}

