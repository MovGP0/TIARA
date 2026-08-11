/* Ghidra address: 00dda310 */
/* Ghidra symbol: FUN_00dda310 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dda310(void)

{
  if (DAT_0202db58 == 0) {
    DAT_0202db58 = FUN_00452dc0(L"oleaut32.dll",0x8000);
    if (DAT_0202db58 != 0) {
      _DAT_0202db60 = FUN_00427c10(DAT_0202db58,L"OleCreatePropertyFrame");
      DAT_0202db68 = FUN_00427c10(DAT_0202db58,L"OleCreateFontIndirect");
      DAT_0202db70 = FUN_00427c10(DAT_0202db58,L"OleCreatePictureIndirect");
      DAT_0202db78 = FUN_00427c10(DAT_0202db58,L"OleLoadPicture");
    }
  }
  return;
}

