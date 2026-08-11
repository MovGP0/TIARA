/* Ghidra address: 005e17d0 */
/* Ghidra symbol: FUN_005e17d0 */


void FUN_005e17d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

