/* Ghidra address: 006513d0 */
/* Ghidra symbol: FUN_006513d0 */


void FUN_006513d0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xb2) != '\0') {
    if (param_1[0xf] != 0) {
      (**(code **)(*param_1 + 0x140))(param_1,*(undefined1 *)(param_1[0xf] + 0xb1));
    }
    *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  }
  return;
}

