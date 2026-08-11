/* Ghidra address: 0112a1b0 */
/* Ghidra symbol: FUN_0112a1b0 */


void FUN_0112a1b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  while (0x3b < *(ushort *)(param_1 + 0x12)) {
    uVar1 = (ulonglong)param_2 & 0xff;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + *(short *)(&DAT_01f240d0 + uVar1 * 4);
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + *(short *)(&DAT_01f24100 + uVar1 * 4);
    FUN_0112a150(param_1,(ulonglong)param_2);
  }
  return;
}

