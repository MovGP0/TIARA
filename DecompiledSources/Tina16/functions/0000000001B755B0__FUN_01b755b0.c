/* Ghidra address: 01b755b0 */
/* Ghidra symbol: FUN_01b755b0 */


void FUN_01b755b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x748) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x100) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0x4a8);
  }
  return;
}

