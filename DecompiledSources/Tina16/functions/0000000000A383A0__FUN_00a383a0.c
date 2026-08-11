/* Ghidra address: 00a383a0 */
/* Ghidra symbol: FUN_00a383a0 */


void FUN_00a383a0(longlong param_1,byte param_2,longlong param_3,ushort *param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (&DAT_01e71708)[param_2];
  pbVar2 = (byte *)(param_3 + iVar1);
  do {
    *param_4 = (ushort)*pbVar2;
    param_4 = param_4 + 1;
    pbVar2 = pbVar2 + (int)(&DAT_01e71740)[param_2];
    iVar1 = iVar1 + (&DAT_01e71740)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x30));
  return;
}

