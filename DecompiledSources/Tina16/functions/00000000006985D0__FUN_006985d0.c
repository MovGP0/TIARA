/* Ghidra address: 006985d0 */
/* Ghidra symbol: FUN_006985d0 */


void FUN_006985d0(longlong *param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) == 0x20) {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

