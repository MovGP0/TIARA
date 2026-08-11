/* Ghidra address: 0042a4a0 */
/* Ghidra symbol: FUN_0042a4a0 */


undefined8 FUN_0042a4a0(void)

{
  undefined8 uVar1;
  
  if (DAT_0200c2e8 == 0) {
    DAT_0200c2e8 = thunk_FUN_04163be6(L"hhctrl.ocx");
    if (DAT_0200c2e8 != 0) {
      DAT_0200c2f0 = FUN_00427c10(DAT_0200c2e8,L"HtmlHelpA");
      DAT_0200c2f8 = FUN_00427c10(DAT_0200c2e8,L"HtmlHelpW");
    }
  }
  if ((DAT_0200c2f0 == 0) || (DAT_0200c2f8 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

