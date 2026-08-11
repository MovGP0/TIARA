/* Ghidra address: 004b1e70 */
/* Ghidra symbol: FUN_004b1e70 */


void FUN_004b1e70(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  if (0 < *(int *)(param_1[2] + 0x10)) {
    (**(code **)(*param_1 + 0x40))(param_1);
    while( true ) {
      lVar1 = param_1[2];
      if (*(int *)(lVar1 + 0x10) < 1) break;
      local_28 = *(undefined8 *)
                  (*(longlong *)(lVar1 + 8) + (longlong)(*(int *)(lVar1 + 0x10) + -1) * 8);
      local_20 = lVar1;
      FUN_00410f20(local_28);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

