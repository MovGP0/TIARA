/* Ghidra address: 007885b0 */
/* Ghidra symbol: FUN_007885b0 */


void FUN_007885b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 *local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  if (param_3 != (undefined8 *)0x0) {
    local_40 = *(undefined4 *)param_3;
    uStack_3c = *(undefined4 *)((longlong)param_3 + 4);
    local_28 = *param_3;
    local_38 = uStack_3c;
    local_34 = local_40;
  }
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar3 = FUN_00787cc0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_00787fa0(uVar3);
  uVar3 = FUN_00787cc0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_00787c80(uVar3);
  (**(code **)(*local_20 + 0xe0))(local_20,uVar1,uVar2);
  uVar3 = FUN_00788c30(param_1);
  uVar4 = FUN_00609e10(local_20);
  uVar4 = FUN_005ffa40(uVar4);
  thunk_FUN_041b2403(uVar3,0x14,uVar4,0x93);
  thunk_FUN_0415f9d2(*(undefined8 *)(param_1 + 8),&local_28);
  uVar3 = FUN_00788c30(param_1);
  thunk_FUN_0417e313(uVar3,&local_28);
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
    uVar3 = FUN_00609e10(local_20);
    local_80 = FUN_005ffa40(uVar3);
    local_78 = (undefined4)local_28;
    local_70 = local_28._4_4_;
    local_68 = 0xcc0020;
    local_88 = uVar2;
    thunk_FUN_0415fcd2(param_2,0,0,uVar1);
  }
  else {
    uVar1 = FUN_004230a0(param_3);
    uVar2 = FUN_004230c0(param_3);
    uVar3 = FUN_00609e10(local_20);
    local_80 = FUN_005ffa40(uVar3);
    local_78 = (undefined4)local_28;
    local_70 = local_28._4_4_;
    local_68 = 0xcc0020;
    local_88 = uVar2;
    thunk_FUN_0415fcd2(param_2,*(undefined4 *)param_3,*(undefined4 *)((longlong)param_3 + 4),uVar1);
  }
  FUN_00410f20(local_20);
  return;
}

