/* Ghidra address: 00a01900 */
/* Ghidra symbol: FUN_00a01900 */


ushort FUN_00a01900(longlong param_1)

{
  ushort *puVar1;
  undefined1 auStack_38 [46];
  ushort local_a;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (puVar1 < *(ushort **)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x1c) == 0x4b0) {
      local_a = *puVar1;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
    }
    else if (*(int *)(param_1 + 0x1c) == 0x4b1) {
      local_a = *puVar1;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
      FUN_00a018f0(auStack_38,&local_a);
    }
    else {
      local_a = (ushort)(byte)*puVar1;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
  }
  else {
    local_a = 0;
  }
  return local_a;
}

