/* Ghidra address: 005fe4d0 */
/* Ghidra symbol: FUN_005fe4d0 */


void FUN_005fe4d0(longlong *param_1,int *param_2,longlong *param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b0;
  int local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  int local_88;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_60 = auStack_e8;
  if (param_3 != (longlong *)0x0) {
    FUN_005fdf10(param_1);
    (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*param_1 + 0x58))(param_1,9);
    uVar2 = FUN_00609e10(param_3);
    FUN_005fdf10(uVar2);
    local_70 = *param_2;
    local_3c = param_2[2] - local_70;
    local_6c = param_2[1];
    local_40 = param_2[3] - local_6c;
    local_68 = *param_4;
    local_34 = param_4[2] - local_68;
    local_64 = param_4[1];
    local_38 = param_4[3] - local_64;
    iVar1 = FUN_0060a330(param_3);
    if (iVar1 == param_5) {
      local_20 = (longlong *)0x0;
      local_28 = (**(code **)(*param_3 + 0xf0))(param_3);
      local_30 = thunk_FUN_04137b5f(0);
      local_28 = thunk_FUN_041a19a1(local_30,local_28);
    }
    else {
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_20 + 0x10))(local_20,param_3);
      FUN_0060a560(local_20,param_5);
      plVar3 = (longlong *)FUN_00609e10(local_20);
      (**(code **)(*plVar3 + 0x58))(plVar3,1);
      lVar4 = FUN_00609e10(local_20);
      local_30 = *(undefined8 *)(lVar4 + 0x60);
      local_28 = 0;
    }
    plVar3 = (longlong *)FUN_00609e10(param_3);
    (**(code **)(*plVar3 + 0x58))(plVar3,1);
    local_50 = param_1[0x10];
    if (*(char *)(*(longlong *)(local_50 + 0x18) + 0x38) == '\x01') {
      lVar4 = FUN_00609e10(param_3);
      local_c8 = local_40;
      local_c0 = *(undefined8 *)(lVar4 + 0x60);
      local_b8 = local_68;
      local_b0 = local_64;
      local_a8 = local_34;
      local_a0 = local_38;
      local_98 = local_30;
      local_90 = local_68;
      local_88 = local_64;
      FUN_00600290(param_1[0xc],local_70,local_6c,local_3c);
    }
    else {
      lVar4 = FUN_00609e10(param_3);
      local_c8 = local_40;
      local_c0 = *(undefined8 *)(lVar4 + 0x60);
      local_b8 = local_68;
      local_b0 = local_64;
      local_a8 = local_34;
      local_a0 = local_38;
      local_98._0_4_ = 0xcc0020;
      thunk_FUN_03c1ffbb(param_1[0xc],local_70,local_6c,local_3c);
      local_48 = thunk_FUN_0412a071(param_1[0xc],0);
      local_44 = thunk_FUN_03e3a7dc(param_1[0xc],0xffffff);
      local_c8 = local_40;
      local_c0 = local_30;
      local_b8 = local_68;
      local_b0 = local_64;
      local_a8 = local_34;
      local_a0 = local_38;
      local_98 = CONCAT44(local_98._4_4_,0xe20746);
      thunk_FUN_03c1ffbb(param_1[0xc],local_70,local_6c,local_3c);
      thunk_FUN_0412a071(param_1[0xc],local_48);
      thunk_FUN_03e3a7dc(param_1[0xc],local_44);
    }
    if (local_20 == (longlong *)0x0) {
      if (local_28 != 0) {
        thunk_FUN_041a19a1(local_30,local_28);
      }
      thunk_FUN_041a2fd8(local_30);
    }
    else {
      FUN_00410f20(local_20);
    }
    uVar2 = FUN_00609e10(param_3);
    FUN_005fe090(uVar2);
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_005fe090(param_1);
  }
  return;
}

