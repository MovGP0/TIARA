/* Ghidra address: 01887a00 */
/* Ghidra symbol: FUN_01887a00 */


void FUN_01887a00(longlong param_1,undefined1 param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x28) = param_2;
  }
  return;
}

