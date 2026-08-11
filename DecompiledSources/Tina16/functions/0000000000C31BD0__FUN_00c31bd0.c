/* Ghidra address: 00c31bd0 */
/* Ghidra symbol: FUN_00c31bd0 */


void FUN_00c31bd0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x88))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff);
  (**(code **)(*param_1 + 0x78))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  return;
}

