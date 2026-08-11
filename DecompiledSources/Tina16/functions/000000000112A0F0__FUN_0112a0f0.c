/* Ghidra address: 0112a0f0 */
/* Ghidra symbol: FUN_0112a0f0 */


void FUN_0112a0f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  while (0x17 < *(ushort *)(param_1 + 0xe)) {
    uVar1 = (ulonglong)param_2 & 0xff;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + *(short *)(&DAT_01f240d0 + uVar1 * 4);
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + *(short *)(&DAT_01f240f0 + uVar1 * 4);
    FUN_0112a080(param_1,(ulonglong)param_2);
  }
  return;
}

