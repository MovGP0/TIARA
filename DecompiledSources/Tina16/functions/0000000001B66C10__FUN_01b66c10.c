/* Ghidra address: 01b66c10 */
/* Ghidra symbol: FUN_01b66c10 */


void FUN_01b66c10(longlong *param_1)

{
  ushort uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e0;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b1;
  ushort *local_b0;
  int *local_a8;
  undefined8 local_a0 [2];
  longlong local_90;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  int local_7c;
  double local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [15];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_e0 = auStack_128;
  local_a0[0] = 0;
  local_a8 = (int *)0x0;
  local_b0 = (ushort *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  if ((int)param_1[0x1ad] == 0) {
    local_e0 = auStack_128;
    FUN_0082a6c0(param_1[0xf8],1);
    (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
    goto code_r0x01b672e9;
  }
  uVar5 = FUN_010e1b10(param_1);
  local_c0 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_01133e90);
  plVar2 = (longlong *)param_1[0x16d];
  uVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
  local_90 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar3);
  FUN_00414b50(local_a0,*(undefined8 *)(local_90 + 8));
  lVar6 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x30))
                    (*(longlong **)(param_1[0x196] + 0x4f0),1);
  FUN_00414b50(&local_a8,*(undefined8 *)(lVar6 + 8));
  iVar4 = (**(code **)(**(longlong **)(local_90 + 0x48) + 0xb0))
                    (*(longlong **)(local_90 + 0x48),local_a0[0]);
  if (iVar4 == 0) {
    FUN_00414480(local_20);
    local_c8 = param_1[0x1ac];
    local_108 = (longlong *)CONCAT44(local_108._4_4_,2);
    local_100 = PTR_DAT_02004830;
    FUN_00448510(local_20,local_c8,0,3);
    local_108 = (longlong *)local_a8;
    local_100 = &DAT_01b673b0;
    local_f8 = (undefined1 *)local_20[0];
    FUN_00416cd0(&local_b0,5,local_a0[0],&DAT_01b673a0);
    FUN_00414480(local_20);
    if ((short)*local_a8 == 0x49) {
      FUN_00416ad0(&local_b0,&LAB_01b673d0);
    }
    else if ((short)*local_a8 == 0x56) {
      FUN_00416ad0(&local_b0,&DAT_01b673c0);
    }
    (**(code **)(**(longlong **)(local_90 + 0x48) + 0x40))
              (*(longlong **)(local_90 + 0x48),0,local_b0);
    uVar5 = (**(code **)(**(longlong **)(local_90 + 0x48) + 0x30))
                      (*(longlong **)(local_90 + 0x48),*(undefined4 *)(local_90 + 0x160));
    FUN_01cc09f0(uVar5,local_b0);
  }
  param_1[0x1ac] = (longlong)((double)param_1[0x1ac] + (double)param_1[0x1ab]);
  *(int *)(param_1 + 0x1ad) = (int)param_1[0x1ad] + -1;
  *(int *)(local_90 + 0x160) = *(int *)(local_90 + 0x160) + 1;
  FUN_00414480(&local_28);
  local_d0 = param_1[0x1ac];
  local_108 = (longlong *)CONCAT44(local_108._4_4_,2);
  local_100 = PTR_DAT_02004830;
  FUN_00448510(&local_28,local_d0,0,3);
  local_108 = (longlong *)local_a8;
  local_100 = &DAT_01b673b0;
  local_f8 = (undefined1 *)local_28;
  FUN_00416cd0(&local_b0,5,local_a0[0],&DAT_01b673a0);
  FUN_00414480(&local_28);
  if ((short)*local_a8 == 0x49) {
    FUN_00416ad0(&local_b0,&LAB_01b673d0);
  }
  else if ((short)*local_a8 == 0x56) {
    FUN_00416ad0(&local_b0,&DAT_01b673c0);
  }
  uVar1 = *local_b0;
  if (uVar1 < 0x57) {
    if (uVar1 == 0x56) {
      local_b1 = 1;
    }
    else if (uVar1 == 0x49) {
      local_b1 = 2;
    }
    else {
      if (uVar1 != 0x52) goto LAB_01b6703f;
      local_b1 = 4;
    }
  }
  else if (uVar1 == 0x67) {
    local_b1 = 9;
  }
  else if (uVar1 == 0x68) {
    if (local_b0[1] == 0x69) {
      local_b1 = 4;
    }
    else if (local_b0[1] == 0x6f) {
      local_b1 = 9;
    }
    else {
      local_b1 = 0;
    }
  }
  else {
LAB_01b6703f:
    local_b1 = 0;
  }
  local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffffffff00);
  local_100 = (undefined *)0x0;
  local_f8 = (undefined1 *)CONCAT71(local_f8._1_7_,local_b1);
  local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
  uVar5 = FUN_01cc2930(*(undefined8 *)(param_1[0x110] + 8),local_b0,2,1);
  (**(code **)(**(longlong **)(local_90 + 0x48) + 0x80))
            (*(longlong **)(local_90 + 0x48),local_b0,uVar5);
  uVar5 = (**(code **)(**(longlong **)(local_90 + 0x48) + 0x30))
                    (*(longlong **)(local_90 + 0x48),*(undefined4 *)(local_90 + 0x160));
  uVar5 = FUN_004113f0(uVar5,&PTR_FUN_01cb30c8);
  *(undefined8 *)(local_90 + 0x40) = uVar5;
  local_90 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x30))
                       (*(longlong **)(param_1[0x196] + 0x4f0),1);
  FUN_0113d630(local_c0,*(undefined1 *)(local_90 + 0x2e));
  local_108 = (longlong *)local_48;
  local_100 = local_50;
  FUN_01138af0(local_c0,&local_29,local_38,local_40);
  local_108 = param_1 + 0x1ac;
  local_100 = local_50;
  FUN_01138b30(local_c0,0,local_38,local_40);
  local_90 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x30))
                       (*(longlong **)(param_1[0x196] + 0x4f0),0);
  FUN_0113d630(local_c0,*(undefined1 *)(local_90 + 0x2e));
  local_108 = (longlong *)&local_7c;
  local_100 = &local_7d;
  local_f8 = &local_7e;
  local_f0 = &local_7f;
  FUN_01138d40(local_c0,local_68,local_70,&local_78);
  local_7f = 1;
  local_78 = (double)param_1[0x1ae] * (double)local_7c;
  local_7e = *(char *)(param_1[0x1b5] + 0x158) == '\x01';
  local_7d = 0;
  local_108 = (longlong *)&local_7c;
  local_100 = (undefined *)((ulonglong)local_100 & 0xffffffffffffff00);
  local_f8 = (undefined1 *)CONCAT71(local_f8._1_7_,local_7e);
  local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,1);
  FUN_01138e40(local_c0,local_68,local_70,&local_78);
  uVar5 = FUN_0065b870(param_1);
  FUN_01139080(local_c0,uVar5,0x52f);
  (**(code **)(*local_c0 + 0x488))(local_c0);
code_r0x01b672e9:
  FUN_00414560(&local_b0,3);
  FUN_00414560(&local_28,2);
  return;
}

