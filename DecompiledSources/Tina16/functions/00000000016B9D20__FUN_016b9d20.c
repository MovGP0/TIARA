/* Ghidra address: 016b9d20 */
/* Ghidra symbol: FUN_016b9d20 */


undefined1 FUN_016b9d20(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xd90) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xd90) + -4);
  }
  if (iVar1 < *(int *)(param_1 + 0x990)) {
    *(undefined1 *)(param_1 + 0x9a0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x9a0) =
         *(undefined1 *)(*(longlong *)(param_1 + 0xd90) + -1 + (longlong)*(int *)(param_1 + 0x990));
    *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
  }
  return *(undefined1 *)(param_1 + 0x9a0);
}

