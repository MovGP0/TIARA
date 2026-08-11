/* Ghidra address: 01a9fb00 */
/* Ghidra symbol: FUN_01a9fb00 */


void FUN_01a9fb00(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0xb8))(param_1,*param_2);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2[1]);
  (**(code **)(*param_1 + 200))(param_1,param_2[2]);
  (**(code **)(*param_1 + 0xe0))(param_1,*(undefined1 *)(param_2 + 3));
  (**(code **)(*param_1 + 0xe8))(param_1,*(undefined1 *)((longlong)param_2 + 0xd));
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined1 *)((longlong)param_2 + 0xe));
  return;
}

