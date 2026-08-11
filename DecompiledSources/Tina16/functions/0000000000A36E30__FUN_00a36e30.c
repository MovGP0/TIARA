/* Ghidra address: 00a36e30 */
/* Ghidra symbol: FUN_00a36e30 */


void FUN_00a36e30(longlong param_1,byte *param_2,undefined1 *param_3,byte *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    do {
      *param_4 = param_2[6];
      *param_3 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_2[4]);
      param_3[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_2[2]);
      param_3[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)*param_2);
      param_3 = param_3 + 3;
      *param_5 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_2[5]);
      param_5[1] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_2[3]);
      param_5[2] = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x169 + (ulonglong)param_2[1]);
      param_5 = param_5 + 3;
      param_2 = param_2 + 8;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

