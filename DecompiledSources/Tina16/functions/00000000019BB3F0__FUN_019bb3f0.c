/* Ghidra address: 019bb3f0 */
/* Ghidra symbol: FUN_019bb3f0 */


void FUN_019bb3f0(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00742ed0(param_1[0x95],*(undefined2 *)((longlong)param_1 + 0x49c));
  if ((int)param_1[0x97] <= (int)param_1[0x94]) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  (**(code **)(*param_1 + 0x270))(param_1);
  *(int *)(param_1 + 0x94) = (int)param_1[0x94] + 1;
  if ((int)param_1[0x94] == (int)param_1[0x97]) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  return;
}

