/* Ghidra address: 004bee80 */
/* Ghidra symbol: FUN_004bee80 */


void FUN_004bee80(longlong param_1,ushort *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (0 < (longlong)param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *param_2 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + lVar1);
    if (1 < (longlong)param_3) {
      *param_2 = *param_2 | (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 1 + lVar1) << 8;
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

