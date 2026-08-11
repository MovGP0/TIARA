/* Ghidra address: 01807f00 */
/* Ghidra symbol: FUN_01807f00 */


void FUN_01807f00(void)

{
  DAT_021101c0 = DAT_021101c0 + -1;
  if (DAT_021101c0 == -1) {
    DAT_01fa7e48 = 0;
    DAT_01fa7e50 = thunk_FUN_04163be6(L"HHCtrl.OCX");
    if (DAT_01fa7e50 != 0) {
      DAT_01fa7e48 = FUN_00427c10(DAT_01fa7e50,L"HtmlHelpW");
    }
  }
  return;
}

