/* Ghidra address: 005fbbe0 */
/* Ghidra symbol: FUN_005fbbe0 */


void FUN_005fbbe0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_30 = param_1;
  FUN_00427930(param_1 + 0x10);
  local_28 = param_2[3];
  if (local_28 != param_3) {
    if (*(int *)(local_28 + 0x1c) == *(int *)(param_3 + 0x1c)) {
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      param_2[3] = param_3;
      (**(code **)(*param_2 + 0x18))(param_2);
      FUN_005fb9a0(param_1,local_28);
    }
    else {
      FUN_005fbb00(param_1,param_2,param_3 + 0x20);
    }
  }
  local_20 = param_1;
  FUN_00427ff0(param_1 + 0x10);
  return;
}

