/* Ghidra address: 004c8560 */
/* Ghidra symbol: FUN_004c8560 */


void FUN_004c8560(longlong param_1,int param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_5 - 1U < 0x80000000) {
    do {
      iVar2 = param_4 + iVar1 * 2;
      *(undefined *)(*param_3 + (longlong)iVar2) =
           (&DAT_01dc94b8)[*(byte *)(param_1 + (param_2 + iVar1)) >> 4];
      *(undefined *)(*param_3 + (longlong)(iVar2 + 1)) =
           (&DAT_01dc94b8)[*(byte *)(param_1 + (param_2 + iVar1)) & 0xf];
      iVar1 = iVar1 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

