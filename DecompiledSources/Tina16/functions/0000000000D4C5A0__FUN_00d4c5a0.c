/* Ghidra address: 00d4c5a0 */
/* Ghidra symbol: FUN_00d4c5a0 */


void FUN_00d4c5a0(longlong *param_1,undefined8 param_2)

{
  FUN_00788d60(param_1,0);
  FUN_00788400(param_1,param_2);
  FUN_00788d60(param_1,1);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0;
  (**(code **)(*param_1 + 0x60))(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

