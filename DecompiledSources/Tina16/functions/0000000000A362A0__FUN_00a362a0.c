/* Ghidra address: 00a362a0 */
/* Ghidra symbol: FUN_00a362a0 */


void FUN_00a362a0(longlong param_1,uint param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (&DAT_01e71708)[(ulonglong)param_2 & 0xff];
  do {
    iVar2 = 6;
    do {
      pbVar1 = (byte *)(param_4 + iVar3 / 2);
      *pbVar1 = *pbVar1 | (byte)((*param_3 >> ((byte)iVar2 & 0x1f) & 3) <<
                                (4U - (char)((iVar3 * 4) % 8) & 0x1f));
      iVar3 = iVar3 + (&DAT_01e71740)[(ulonglong)param_2 & 0xff];
      iVar2 = iVar2 + -2;
    } while (-1 < iVar2);
    param_3 = param_3 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x30));
  return;
}

