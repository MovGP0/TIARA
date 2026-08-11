/* Ghidra address: 01ca5320 */
/* Ghidra symbol: FUN_01ca5320 */


void FUN_01ca5320(void)

{
  DAT_035667c0 = DAT_035667c0 + 1;
  if (DAT_035667c0 == 0) {
    FUN_00414480(&DAT_035667c8);
    FUN_00414480(&DAT_035667d0);
  }
  return;
}

