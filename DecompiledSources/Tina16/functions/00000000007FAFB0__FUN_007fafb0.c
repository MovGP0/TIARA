/* Ghidra address: 007fafb0 */
/* Ghidra symbol: FUN_007fafb0 */


void FUN_007fafb0(longlong param_1,short *param_2,undefined1 *param_3)

{
  if (*param_2 == 0x104) {
    *param_3 = 1;
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      FUN_007fa6c0(*(longlong *)(param_1 + 0x498),
                   *(int *)(*(longlong *)(param_1 + 0x498) + 0x14) -
                   (*(int *)(param_2 + 2) - *(int *)(param_1 + 0x4a0)));
      FUN_007fa6c0(*(longlong *)(param_1 + 0x4b0),
                   *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x14) -
                   (*(int *)(param_2 + 4) - *(int *)(param_1 + 0x4a4)));
      *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 2);
    }
    else {
      *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 2);
    }
  }
  return;
}

