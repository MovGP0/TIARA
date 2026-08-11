/* Ghidra address: 00dda560 */
/* Ghidra symbol: FUN_00dda560 */


void FUN_00dda560(void)

{
  DAT_0202db4c = DAT_0202db4c + 1;
  if (DAT_0202db4c == 0) {
    if (DAT_0202db50 != 0) {
      thunk_FUN_041b2403(DAT_0202db50,0x10,0,0);
      thunk_FUN_041c8eb3(L"DAXParkingWindow",PTR_IMAGE_DOS_HEADER_0200c280);
    }
    if (DAT_0202db58 != 0) {
      thunk_FUN_041c8c2f(DAT_0202db58);
    }
  }
  return;
}

