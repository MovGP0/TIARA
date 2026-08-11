/* Ghidra address: 00cac2c0 */
/* Ghidra symbol: FUN_00cac2c0 */


void FUN_00cac2c0(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  (**(code **)(*param_1 + 0x1b0))(param_1);
  FUN_00c8ac30(param_1[0x21]);
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  return;
}

