/* Ghidra address: 01367df0 */
/* Ghidra symbol: FUN_01367df0 */


void FUN_01367df0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 7) = param_4;
  (**(code **)(*param_1 + 0x60))(param_1,0x3f4e,param_2);
  return;
}

