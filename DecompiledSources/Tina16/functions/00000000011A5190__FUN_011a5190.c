/* Ghidra address: 011a5190 */
/* Ghidra symbol: FUN_011a5190 */


void FUN_011a5190(void)

{
  DAT_020420c0 = DAT_020420c0 + 1;
  if (DAT_020420c0 == 0) {
    FUN_00414480(&DAT_020c61b8);
    FUN_00414480(&DAT_020c6308);
  }
  return;
}

