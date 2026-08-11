/* Ghidra address: 00af2880 */
/* Ghidra symbol: FUN_00af2880 */


void FUN_00af2880(longlong param_1,undefined8 param_2,short *param_3,undefined1 *param_4)

{
  int local_30;
  int local_2c;
  
  if (*param_3 == 0x104) {
    if ((*(byte *)(param_3 + 6) & 1) == 0) {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x740) + 0x130) + 0x21) & 1) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x994) - *(int *)(param_3 + 2);
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x740) + 0x130) + 0x21) & 2) == 0) {
        local_2c = 0;
      }
      else {
        local_2c = *(int *)(param_1 + 0x998) - *(int *)(param_3 + 4);
      }
      FUN_00af27f0(param_1,&local_30);
      *param_4 = 1;
    }
    *(undefined8 *)(param_1 + 0x990) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0x9a0) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(param_3 + 0xc);
  }
  return;
}

