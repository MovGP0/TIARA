/* Ghidra address: 00611a70 */
/* Ghidra symbol: FUN_00611a70 */


void FUN_00611a70(void)

{
  if (DAT_02012050 == 0) {
    DAT_02012050 = FUN_00427be0(L"comctl32.dll");
    if (DAT_02012050 != 0) {
      DAT_02012058 = FUN_00427c10(DAT_02012050,L"InitCommonControlsEx");
    }
  }
  return;
}

