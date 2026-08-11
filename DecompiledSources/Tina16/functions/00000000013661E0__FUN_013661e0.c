/* Ghidra address: 013661e0 */
/* Ghidra symbol: FUN_013661e0 */


void FUN_013661e0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x23) == '\0') {
    if (*(char *)((longlong)param_1 + 0x24) == '\0') {
      FUN_013662d0(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x60))(param_1,0x3f4e,500);
    *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  }
  return;
}

