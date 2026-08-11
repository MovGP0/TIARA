/* Ghidra address: 004c8600 */
/* Ghidra symbol: FUN_004c8600 */


int FUN_004c8600(longlong param_1,int param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + param_2);
  pcVar2 = (char *)(*param_3 + (longlong)param_4);
  for (iVar1 = param_5; 0 < iVar1; iVar1 = iVar1 + -1) {
    if (((&DAT_01dc94c8)[*pbVar3] == -1) || ((&DAT_01dc94c8)[pbVar3[1]] == -1)) break;
    *pcVar2 = (&DAT_01dc94c8)[*pbVar3] * '\x10' + (&DAT_01dc94c8)[pbVar3[1]];
    pcVar2 = pcVar2 + 1;
    pbVar3 = pbVar3 + 2;
  }
  return param_5 - iVar1;
}

