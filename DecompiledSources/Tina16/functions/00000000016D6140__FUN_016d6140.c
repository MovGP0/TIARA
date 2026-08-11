/* Ghidra address: 016d6140 */
/* Ghidra symbol: FUN_016d6140 */


double FUN_016d6140(longlong param_1,int param_2)

{
  byte bVar1;
  int local_1c;
  undefined1 auStack_18 [8];
  
  local_1c = 0;
  if (((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0x60) + 0x20))) &&
     (*(int *)(param_1 + 0x70) <= (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x60) + 0x24))) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x60) + 0x26);
    FUN_00409a70(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) +
                 (longlong)
                 (int)(param_2 * (uint)*(byte *)(*(longlong *)(param_1 + 0x60) + 0x25) +
                      (*(int *)(param_1 + 0x70) + -1) * (uint)bVar1),auStack_18 + -(ulonglong)bVar1,
                 bVar1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x26) == '\x01') {
    local_1c = -0x80000000;
  }
  return (double)local_1c / 2147483648.0;
}

