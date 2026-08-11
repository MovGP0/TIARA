/* Ghidra address: 00a48ec0 */
/* Ghidra symbol: FUN_00a48ec0 */


void FUN_00a48ec0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  uint local_38;
  byte local_34;
  byte local_33;
  byte local_32;
  longlong *local_30;
  longlong *local_20;
  
  local_40 = auStack_98;
  if (param_1[4] == 0) {
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*local_30 + 0x88))(local_30,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*local_30 + 0x70))(local_30,uVar1);
    uVar2 = FUN_00609e10(local_30);
    uVar2 = FUN_005ffa40(uVar2);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    local_78 = (**(code **)(*param_1 + 0x10))(param_1);
    local_70 = 0x42;
    thunk_FUN_04161b78(uVar2,0,0,uVar1);
    plVar3 = (longlong *)FUN_00609e10(local_30);
    (**(code **)(*plVar3 + 0x88))(plVar3,0,0,param_1[3]);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*local_20 + 0x88))(local_20,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    (**(code **)(*local_20 + 0x70))(local_20,uVar1);
    FUN_0060bbf0(local_20,3);
    uVar2 = (**(code **)(*local_20 + 0x50))(local_20);
    thunk_FUN_041a3f2d(uVar2,0x73,1,&local_34);
    local_38 = (uint)local_32 << 0x10 | (uint)local_33 << 8 | (uint)local_34;
    lVar4 = FUN_00609e10(local_20);
    FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),local_38);
    plVar3 = (longlong *)FUN_00609e10(local_20);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    local_78 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_004238d0(local_50,0,0,uVar1);
    (**(code **)(*plVar3 + 0xa8))(plVar3,local_50);
    plVar3 = (longlong *)FUN_00609e10(local_20);
    (**(code **)(*plVar3 + 0x88))(plVar3,0,0,param_1[3]);
    uVar2 = FUN_00a447b0(local_20,0,local_38);
    local_78 = CONCAT31(local_78._1_3_,2);
    local_70 = CONCAT31(local_70._1_3_,1);
    local_68 = 1;
    lVar4 = FUN_00a47ee0(&PTR_FUN_00a432a0,1,local_30,uVar2);
    param_1[4] = lVar4;
    FUN_00410f20(local_20);
  }
  return;
}

