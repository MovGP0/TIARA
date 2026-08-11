/* Ghidra address: 015c8420 */
/* Ghidra symbol: FUN_015c8420 */


void FUN_015c8420(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_10;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x38) = 0x7064b50;
  local_10 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98) +
                     0xc);
  if (local_10 < 1) {
    local_10 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x3c) = local_10;
  local_18 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18) + 0x98) +
                     0xc);
  if (local_18 < 1) {
    local_18 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x48) = local_18 + 1;
  FUN_004b89e0(*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8),
               *(longlong *)(param_1 + 0x1b0) + 0x38,0x14);
  return;
}

