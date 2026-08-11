/* Ghidra address: 006147d0 */
/* Ghidra symbol: FUN_006147d0 */


void FUN_006147d0(longlong *param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x49) == 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}

