/* Ghidra address: 007e7c40 */
/* Ghidra symbol: FUN_007e7c40 */


void FUN_007e7c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  code *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  int local_14;
  longlong local_10;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_14 = 0;
  if (-1 < param_6) {
    iVar2 = param_6 + 1;
    local_20 = param_5;
    do {
      *local_20 = 0;
      local_20 = local_20 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_10 = FUN_00410e60(&DAT_007e7a68,1);
  *(undefined8 *)(local_10 + 8) = param_2;
  FUN_007e7650(&local_38,param_3,param_4);
  FUN_004194b0(local_10 + 0x10,local_38,&DAT_004066f0);
  FUN_007e7650(&local_40,param_5,param_6);
  FUN_004194b0(local_10 + 0x18,local_40,&DAT_004066f0);
  uVar1 = FUN_007e6b10(param_1);
  *(undefined1 *)(local_10 + 0x20) = uVar1;
  local_48 = local_10;
  local_50 = FUN_007e7bb0;
  FUN_007dcc20(&local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xd0),
               *(longlong *)(param_1 + 0x80));
  local_14 = 0;
  if (-1 < param_6) {
    param_6 = param_6 + 1;
    local_28 = param_5;
    do {
      *local_28 = *(undefined4 *)(*(longlong *)(local_10 + 0x18) + (longlong)local_14 * 4);
      local_14 = local_14 + 1;
      local_28 = local_28 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  FUN_00410f20(local_10);
  FUN_00417840(&local_40,&DAT_004066f0,2);
  return;
}

