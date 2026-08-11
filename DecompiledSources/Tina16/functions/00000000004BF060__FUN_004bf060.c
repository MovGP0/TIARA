/* Ghidra address: 004bf060 */
/* Ghidra symbol: FUN_004bf060 */


void FUN_004bf060(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (0 < (longlong)param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *param_2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + lVar1);
    if ((((1 < (longlong)param_3) &&
         (*param_2 = *param_2 | (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 1 + lVar1) << 8
         , 2 < (longlong)param_3)) &&
        (*param_2 = *param_2 |
                    (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 2 + lVar1) << 0x10,
        3 < (longlong)param_3)) &&
       (((*param_2 = *param_2 |
                     (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 3 + lVar1) << 0x18,
         4 < (longlong)param_3 &&
         (*param_2 = *param_2 |
                     (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 4 + lVar1) << 0x20,
         5 < (longlong)param_3)) &&
        ((*param_2 = *param_2 |
                     (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 5 + lVar1) << 0x28,
         6 < (longlong)param_3 &&
         (*param_2 = *param_2 |
                     (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 6 + lVar1) << 0x30,
         7 < (longlong)param_3)))))) {
      *param_2 = *param_2 | (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 7 + lVar1) << 0x38;
    }
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

