/* Ghidra address: 0112a150 */
/* Ghidra symbol: FUN_0112a150 */


void FUN_0112a150(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  while (0x3b < *(ushort *)(param_1 + 0x10)) {
    uVar1 = (ulonglong)param_2 & 0xff;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + *(short *)(&DAT_01f240d0 + uVar1 * 4);
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + *(short *)(&DAT_01f240f8 + uVar1 * 4);
    FUN_0112a0f0(param_1,(ulonglong)param_2);
  }
  return;
}

