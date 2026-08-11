/* Ghidra address: 00c281a0 */
/* Ghidra symbol: FUN_00c281a0 */


void FUN_00c281a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined1 local_40;
  undefined8 local_38;
  int local_30;
  undefined1 *local_20;
  int local_18;
  byte local_11;
  longlong local_10;
  
  local_20 = auStack_68;
  local_18 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (local_18 < 1) {
    local_11 = FUN_00c32e40(*(undefined8 *)(param_1 + 8));
    local_18 = 1 << (local_11 & 0x1f);
  }
  else {
    local_20 = auStack_68;
    local_11 = FUN_00c239c0();
  }
  local_10 = FUN_00410e60(&LAB_00c27de8,1);
  plVar1 = *(longlong **)(param_1 + 8);
  *(longlong **)(local_10 + 0x10) = plVar1;
  *(undefined8 *)(local_10 + 8) = *(undefined8 *)(*plVar1 + 0xf0);
  local_40 = FUN_00c29da0(param_1);
  local_48 = (uint)*(ushort *)(param_1 + 0x4f);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_30 = local_18;
  FUN_00c27aa0(local_10,param_2,local_11,*(undefined2 *)(param_1 + 0x4d));
  FUN_00410f20(local_10);
  return;
}

