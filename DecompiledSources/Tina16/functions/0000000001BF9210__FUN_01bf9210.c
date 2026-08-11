/* Ghidra address: 01bf9210 */
/* Ghidra symbol: FUN_01bf9210 */


void FUN_01bf9210(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  FUN_005b4830(param_1,param_2);
  local_30 = *(longlong *)(param_1 + 0x118);
  if (local_30 != 0) {
    local_20 = (longlong *)FUN_004b1a60(&DAT_004757b8,1,local_30);
    while( true ) {
      local_38 = local_20;
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      if (*(int *)(*(longlong *)(local_20[2] + 0x10) + 0x10) <= (int)local_20[1]) break;
      local_40 = *(longlong *)(local_20[2] + 0x10);
      local_28 = *(longlong *)(*(longlong *)(local_40 + 8) + (longlong)(int)local_20[1] * 8);
      (**(code **)(**(longlong **)(local_28 + 0x18) + 0x90))
                (*(longlong **)(local_28 + 0x18),param_2);
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  return;
}

