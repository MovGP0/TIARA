/* Ghidra address: 004bed70 */
/* Ghidra symbol: FUN_004bed70 */


void FUN_004bed70(longlong param_1,ushort *param_2,ulonglong param_3)

{
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (param_3 == 1) {
    *param_2 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20));
  }
  else if (1 < (longlong)param_3) {
    *param_2 = CONCAT11(*(undefined1 *)
                         (*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)),
                        *(undefined1 *)
                         (*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)));
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

