/* Ghidra address: 00745550 */
/* Ghidra symbol: FUN_00745550 */


void FUN_00745550(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  FUN_00651da0(param_1);
  local_30 = *(undefined8 *)(param_1 + 0x4c0);
  local_20 = (longlong *)FUN_004b1a60(&DAT_004757b8,1,local_30);
  while( true ) {
    local_38 = local_20;
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    if (*(int *)(*(longlong *)(local_20[2] + 0x10) + 0x10) <= (int)local_20[1]) break;
    local_40 = *(longlong *)(local_20[2] + 0x10);
    local_28 = *(longlong *)(*(longlong *)(local_40 + 8) + (longlong)(int)local_20[1] * 8);
    local_68 = 1;
    FUN_007496c0(local_28,*(undefined4 *)(local_28 + 0x20),*(undefined4 *)(local_28 + 0x24),0);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return;
}

