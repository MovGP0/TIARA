/* Ghidra address: 006d72c0 */
/* Ghidra symbol: FUN_006d72c0 */


void FUN_006d72c0(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x538) != 0) {
    (**(code **)(*param_2 + 0x130))(param_2,*(longlong *)(param_1 + 0x538));
  }
  return;
}

