/* Ghidra address: 004bed20 */
/* Ghidra symbol: FUN_004bed20 */


void FUN_004bed20(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (0 < (longlong)param_3) {
    *param_2 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20));
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

