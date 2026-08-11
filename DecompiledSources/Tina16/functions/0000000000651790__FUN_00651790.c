/* Ghidra address: 00651790 */
/* Ghidra symbol: FUN_00651790 */


void FUN_00651790(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x130) + 0x30) != '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_00668090(*(longlong *)(param_1 + 0x130),
                   *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x130) + 0x39));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x130) + 0x30) = 1;
  }
  return;
}

