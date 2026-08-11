/* Ghidra address: 014ba620 */
/* Ghidra symbol: FUN_014ba620 */


void FUN_014ba620(void)

{
  DAT_0210eb34 = DAT_0210eb34 + 1;
  if (DAT_0210eb34 == 0) {
    if (DAT_01f52ce0 != 0) {
      thunk_FUN_041c8c2f(DAT_01f52ce0);
    }
    FUN_00414480(&PTR_u_MAPI32_DLL_01f52cd8);
  }
  return;
}

