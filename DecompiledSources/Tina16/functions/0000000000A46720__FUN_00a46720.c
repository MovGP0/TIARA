/* Ghidra address: 00a46720 */
/* Ghidra symbol: FUN_00a46720 */


void FUN_00a46720(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,
                 longlong *param_6,longlong *param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  int local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 *local_a0;
  int local_90 [2];
  double local_88;
  double local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68 [4];
  float local_58;
  float local_54;
  longlong *local_50;
  longlong *local_48;
  char local_39;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_a0 = auStack_f8;
  lVar3 = (**(code **)(*param_6 + 0xe8))(param_6);
  if ((lVar3 != 0) && (0 < param_9)) {
    iVar1 = (**(code **)(*param_6 + 0x60))(param_6);
    if (0 < iVar1) {
      iVar1 = (**(code **)(*param_6 + 0x48))(param_6);
      local_39 = iVar1 != param_9;
      if ((bool)local_39) {
        local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      }
      else {
        local_48 = param_6;
        local_50 = param_7;
      }
      if (local_39 != '\0') {
        (**(code **)(*local_48 + 0x10))(local_48,param_6);
        (**(code **)(*local_48 + 0x70))(local_48,param_9);
        uVar4 = FUN_00609e10(local_48);
        uVar4 = FUN_005ffa40(uVar4);
        uVar2 = (**(code **)(*param_6 + 0x60))(param_6);
        uVar5 = FUN_00609e10(param_6);
        local_d0 = (longlong *)FUN_005ffa40(uVar5);
        local_d8 = param_9;
        local_c8 = 0;
        local_c0 = param_8;
        local_b8 = 0xcc0020;
        thunk_FUN_0415fcd2(uVar4,0,0,uVar2);
        (**(code **)(*local_50 + 0x10))(local_50,param_7);
        (**(code **)(*local_50 + 0x70))(local_50,param_9);
        uVar4 = FUN_00609e10(local_50);
        uVar4 = FUN_005ffa40(uVar4);
        uVar2 = (**(code **)(*local_50 + 0x60))(local_50);
        uVar5 = FUN_00609e10(param_7);
        local_d0 = (longlong *)FUN_005ffa40(uVar5);
        local_d8 = param_9;
        local_c8 = 0;
        local_c0 = param_8;
        local_b8 = 0xcc0020;
        thunk_FUN_0415fcd2(uVar4,0,0,uVar2);
      }
      uVar4 = FUN_00609e10(local_48);
      uVar4 = FUN_005ffa40(uVar4);
      thunk_FUN_03e3a7dc(uVar4,0xffffff);
      uVar4 = FUN_00609e10(local_48);
      uVar4 = FUN_005ffa40(uVar4);
      thunk_FUN_0412a071(uVar4,0);
      uVar4 = FUN_00609e10(local_48);
      uVar4 = FUN_005ffa40(uVar4);
      uVar2 = (**(code **)(*param_6 + 0x60))(param_6);
      uVar5 = FUN_00609e10(local_50);
      local_d0 = (longlong *)FUN_005ffa40(uVar5);
      local_d8 = param_9;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0xee0086;
      thunk_FUN_0415fcd2(uVar4,0,0,uVar2);
      local_28 = FUN_005ffa40(param_1);
      thunk_FUN_041219c3(local_28,&local_70);
      thunk_FUN_0415f350(local_28,&local_78);
      thunk_FUN_040299ab(local_28,local_90);
      local_80 = (double)local_70 / (double)local_78;
      local_88 = (double)local_6c / (double)local_74;
      iVar1 = (**(code **)(*param_6 + 0x60))(param_6);
      local_68[0] = (float)(local_80 * ((double)param_4 / (double)iVar1));
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      local_68[3] = (float)(local_88 * ((double)param_5 / (double)param_9));
      local_58 = (float)(local_80 * (double)(param_2 - local_90[0]));
      local_54 = (float)(local_88 * (double)param_3);
      local_38 = FUN_00a45980(local_50,local_68,0xffffff);
      if (local_38 != 0) {
        local_30 = thunk_FUN_03976db5(0,0,1,1);
        local_1c = thunk_FUN_0411a732(local_28,local_30);
        if (local_1c == 1) {
          thunk_FUN_04199bfe(local_38,local_38,local_30,1);
        }
        thunk_FUN_039bba01(local_28,local_38);
        local_d8 = param_5;
        local_d0 = local_48;
        FUN_00a46490(param_1,param_2,param_3,param_4);
        if (local_1c == 1) {
          thunk_FUN_039bba01(local_28,local_30);
        }
        else {
          thunk_FUN_039bba01(local_28,0);
        }
        thunk_FUN_0416f828(local_38);
        thunk_FUN_0416f828(local_30);
      }
      if (local_39 != '\0') {
        FUN_00410f20(local_48);
        FUN_00410f20(local_50);
      }
    }
  }
  return;
}

