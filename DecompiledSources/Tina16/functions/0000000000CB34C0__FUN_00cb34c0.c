/* Ghidra address: 00cb34c0 */
/* Ghidra symbol: FUN_00cb34c0 */


void FUN_00cb34c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x184) = param_2;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x130) = param_2;
  }
  return;
}

