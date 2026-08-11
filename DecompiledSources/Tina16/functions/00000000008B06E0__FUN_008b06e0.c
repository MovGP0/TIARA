/* Ghidra address: 008b06e0 */
/* Ghidra symbol: FUN_008b06e0 */


void FUN_008b06e0(void)

{
  DAT_02012a68 = DAT_02012a68 + 1;
  if (DAT_02012a68 == 0) {
    FUN_00419430(&DAT_02012a58,&DAT_0089e998);
    FUN_00419430(&DAT_02012a60,&DAT_0089e9d8);
    FUN_00414480(&DAT_02012a70);
  }
  return;
}

