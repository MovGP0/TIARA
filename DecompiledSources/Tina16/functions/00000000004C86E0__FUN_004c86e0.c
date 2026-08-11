/* Ghidra address: 004c86e0 */
/* Ghidra symbol: FUN_004c86e0 */


int FUN_004c86e0(ushort *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (0 < param_3) {
    while ((*param_1 < 0x100 && (param_1[1] < 0x100))) {
      if (((&DAT_01dc94c8)[*param_1] == -1) || ((&DAT_01dc94c8)[param_1[1]] == -1)) break;
      *param_2 = (&DAT_01dc94c8)[*param_1] * '\x10' + (&DAT_01dc94c8)[param_1[1]];
      param_2 = param_2 + 1;
      param_1 = param_1 + 2;
      iVar1 = iVar1 + -1;
      if (iVar1 < 1) break;
    }
  }
  return param_3 - iVar1;
}

