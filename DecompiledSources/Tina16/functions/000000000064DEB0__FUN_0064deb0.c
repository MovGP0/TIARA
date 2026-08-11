/* Ghidra address: 0064deb0 */
/* Ghidra symbol: FUN_0064deb0 */


void FUN_0064deb0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18) + 0x28) !=
      *(int *)(param_1 + 0xf8)) {
    *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) | 0x10;
    *(undefined4 *)(param_1 + 0xf8) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18) + 0x28);
  }
  FUN_0064fca0(param_1,0xb00e,0,0);
  return;
}

