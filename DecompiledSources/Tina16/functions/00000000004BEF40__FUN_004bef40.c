/* Ghidra address: 004bef40 */
/* Ghidra symbol: FUN_004bef40 */


void FUN_004bef40(longlong param_1,uint *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (0 < (longlong)param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *param_2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x10) + lVar1);
    if (((1 < (longlong)param_3) &&
        (*param_2 = *param_2 | (uint)*(byte *)(*(longlong *)(param_1 + 0x10) + 1 + lVar1) << 8,
        2 < (longlong)param_3)) &&
       (*param_2 = *param_2 | (uint)*(byte *)(*(longlong *)(param_1 + 0x10) + 2 + lVar1) << 0x10,
       3 < (longlong)param_3)) {
      *param_2 = *param_2 | (uint)*(byte *)(*(longlong *)(param_1 + 0x10) + 3 + lVar1) << 0x18;
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

