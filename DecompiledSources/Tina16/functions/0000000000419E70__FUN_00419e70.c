/* Ghidra address: 00419e70 */
/* Ghidra symbol: FUN_00419e70 */


void FUN_00419e70(void)

{
  byte bVar1;
  undefined8 uVar2;
  
  FUN_00406de0(&DAT_0200af00);
  DAT_0200af28 = 0x7f;
  bVar1 = thunk_FUN_04131dd8();
  DAT_0200aef8 = 5 < bVar1;
  if ((bool)DAT_0200aef8) {
    uVar2 = FUN_00406f00(L"kernel32.dll");
    DAT_0200aee0 = thunk_FUN_041aa1c3(uVar2,"GetThreadPreferredUILanguages");
    uVar2 = FUN_00406f00(L"kernel32.dll");
    DAT_0200aee8 = thunk_FUN_041aa1c3(uVar2,"SetThreadPreferredUILanguages");
    uVar2 = FUN_00406f00(L"kernel32.dll");
    DAT_0200aef0 = thunk_FUN_041aa1c3(uVar2,"GetThreadUILanguage");
  }
  return;
}

