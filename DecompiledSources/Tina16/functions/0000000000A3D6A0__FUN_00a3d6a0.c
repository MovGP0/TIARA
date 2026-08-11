/* Ghidra address: 00a3d6a0 */
/* Ghidra symbol: FUN_00a3d6a0 */


void FUN_00a3d6a0(void)

{
  DAT_020133c4 = DAT_020133c4 + -1;
  if (DAT_020133c4 == -1) {
    DAT_020133c8 = 0;
    DAT_020137d0 = 0;
    FUN_00a330f0();
    FUN_00604dd0(&DAT_005f7500,&DAT_00a3d700,L"Portable Network Graphics",&PTR_FUN_00a2f148);
  }
  return;
}

