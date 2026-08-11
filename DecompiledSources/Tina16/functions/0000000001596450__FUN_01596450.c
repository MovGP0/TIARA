/* Ghidra address: 01596450 */
/* Ghidra symbol: FUN_01596450 */


longlong FUN_01596450(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_1c;
  
  lVar1 = FUN_004095c0((longlong)*(int *)(param_1 + 0x18));
  iVar2 = *(int *)(param_1 + 0x18);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(undefined1 *)(lVar1 + local_1c) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_1c);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return lVar1;
}

