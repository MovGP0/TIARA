/* Ghidra address: 015b0c60 */
/* Ghidra symbol: FUN_015b0c60 */


void FUN_015b0c60(longlong param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  while ((local_c < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x88) + -6 &&
         (*(int *)(param_1 + 0x3c) <=
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x88)))) {
    while ((local_c < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x88) + -6 &&
           (*(int *)(param_1 + 0x38) < 4))) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x68) +
       (longlong)(*(int *)(param_1 + 0x3c) * 4 + *(int *)(param_1 + 0x38)) * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x20 + (longlong)local_c * 4);
      local_c = local_c + 1;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
    if (*(int *)(param_1 + 0x38) == 4) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
  return;
}

