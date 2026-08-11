/* Ghidra address: 0070ea60 */
/* Ghidra symbol: FUN_0070ea60 */


void FUN_0070ea60(longlong *param_1,undefined8 param_2)

{
  FUN_00786040(param_1,0);
  FUN_00785c20(param_1,param_2);
  FUN_00786040(param_1,1);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  (**(code **)(*param_1 + 0x58))(param_1);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

