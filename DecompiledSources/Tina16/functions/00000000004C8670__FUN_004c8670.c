/* Ghidra address: 004c8670 */
/* Ghidra symbol: FUN_004c8670 */


void FUN_004c8670(longlong param_1,ushort *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0x80000000) {
    do {
      *param_2 = (ushort)(byte)(&DAT_01dc94b8)[*(byte *)(param_1 + iVar1) >> 4];
      param_2[1] = (ushort)(byte)(&DAT_01dc94b8)[*(byte *)(param_1 + iVar1) & 0xf];
      param_2 = param_2 + 2;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

