/* Ghidra address: 00c354f0 */
/* Ghidra symbol: FUN_00c354f0 */


void FUN_00c354f0(longlong param_1)

{
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  if (*(int *)(param_1 + 0xec) == 1) {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x50);
      (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x88))(*(longlong **)(param_1 + 0xe0));
    }
  }
  return;
}

