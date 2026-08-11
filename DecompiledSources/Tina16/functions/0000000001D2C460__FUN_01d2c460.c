/* Ghidra address: 01d2c460 */
/* Ghidra symbol: FUN_01d2c460 */


void FUN_01d2c460(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  char local_9;
  
  local_30 = auStack_58;
  if (((*(int *)(param_1 + 0x48) < 3) ||
      (*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8) !=
       param_2)) ||
     (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)*(int *)(param_1 + 0x48) * 8) !=
      param_3)) {
    local_9 = '\x01';
    local_1c = *(undefined4 *)(param_1 + 0x48);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x48)) {
      local_18 = *(undefined8 *)(param_1 + 0x50);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x32;
      iVar1 = FUN_01d43610();
      if ((double)iVar1 / 8.0 < (double)*(int *)(param_1 + 0x58)) {
        *(undefined8 *)(param_1 + 0x50) = local_18;
        *(undefined4 *)(param_1 + 0x48) = local_1c;
        *(undefined4 *)(param_1 + 0x58) = local_20;
        return;
      }
      FUN_00409620(param_1 + 0x50,(longlong)(*(int *)(param_1 + 0x58) * 8));
    }
    if (local_9 != '\0') {
      *(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8) =
           param_2;
      *(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)*(int *)(param_1 + 0x48) * 8) =
           param_3;
    }
  }
  return;
}

