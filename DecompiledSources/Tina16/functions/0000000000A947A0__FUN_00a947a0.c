/* Ghidra address: 00a947a0 */
/* Ghidra symbol: FUN_00a947a0 */


void FUN_00a947a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x3c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4c);
  *(int *)(param_1 + 0x48) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x3c) +
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x44);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) + 0x31) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(*(longlong *)(param_1 + 0x38) + 0x3c) / 10;
  }
  FUN_005fcfa0(*(longlong *)(param_1 + 0x38),*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x50));
  return;
}

