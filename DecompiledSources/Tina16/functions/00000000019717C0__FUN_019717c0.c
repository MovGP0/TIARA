/* Ghidra address: 019717c0 */
/* Ghidra symbol: FUN_019717c0 */


void FUN_019717c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  longlong local_98;
  undefined8 local_90 [2];
  longlong *local_80;
  undefined1 local_75;
  undefined4 local_74;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined1 local_59;
  longlong *local_50;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_32;
  char local_31;
  longlong *local_28;
  longlong *local_20;
  
  local_b0 = auStack_148;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_90[0] = 0;
  cVar2 = FUN_01977c80(param_1);
  if (cVar2 != '\0') {
    lVar4 = FUN_01980cb0(&PTR_FUN_0193f698,1,param_1,param_2);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + 0x10;
    }
    FUN_01980800(param_1[0x57],lVar4);
    goto LAB_019720af;
  }
  (**(code **)(*(longlong *)param_1[0x36] + 0x90))((longlong *)param_1[0x36]);
  local_20 = (longlong *)0x0;
  local_res10 = param_2;
  if (DAT_02110710 != 0) {
    local_20 = (longlong *)(**(code **)(DAT_02110710 + -0x30))(DAT_02110710);
    (**(code **)(*local_20 + 0x78))(local_20,0xff,0);
    local_20[0x11] = (longlong)param_1;
    FUN_0197baf0(local_20,1);
    FUN_0197bb10(local_20);
    cVar2 = (**(code **)(*local_20 + 0x88))(local_20,param_2);
    if (cVar2 != '\0') {
      local_res10 = local_20[0x12];
    }
  }
  FUN_00414ad0(param_1[0x48] + 0x48,*(undefined8 *)(param_1[0x48] + 0x88));
  local_28 = (longlong *)0x0;
  local_31 = '\0';
  if (DAT_02110718 != 0) {
    local_28 = (longlong *)(**(code **)(DAT_02110718 + -0x30))(DAT_02110718);
    (**(code **)(*local_28 + 0x78))(local_28,0xff,0);
    FUN_0197bcf0(local_28);
    FUN_00415dd0(&local_d8,*(undefined8 *)(param_1[0x48] + 0x48),0);
    local_31 = (**(code **)(*local_28 + 0x88))(local_28,local_res10,local_d8);
    if (local_31 != '\0') {
      local_res10 = local_28[0xf];
    }
  }
  local_50 = (longlong *)FUN_0196c390(&PTR_FUN_01937480,1);
  lVar4 = param_1[0x35];
  *(undefined1 *)(lVar4 + 0x10) = 1;
  (**(code **)(*local_50 + 0x10))(local_50,lVar4);
  local_80 = (longlong *)FUN_0196c590(&PTR_FUN_01938398,1);
  (**(code **)(*local_80 + 0x10))(local_80,param_1[0x44]);
  FUN_00414b50(local_90,param_1[0x39]);
  local_98 = param_1[0x42];
  local_99 = *(undefined1 *)((longlong)param_1 + 0x1e9);
  local_9a = (undefined1)param_1[0x4e];
  local_9b = *(undefined1 *)((longlong)param_1 + 0x271);
  *(undefined1 *)(param_1 + 0x56) = 1;
  param_1[0x3a] = local_res10;
  FUN_01971280(param_1);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  if (local_28 != (longlong *)0x0) {
    FUN_00410f20(local_28);
  }
  FUN_019712e0(param_1);
  FUN_01971570(auStack_148);
  plVar1 = (longlong *)param_1[0x35];
  local_32 = (undefined1)plVar1[1];
  local_41 = *(undefined1 *)((longlong)plVar1 + 0x32);
  local_42 = *(undefined1 *)((longlong)plVar1 + 0x33);
  local_43 = *(undefined1 *)((longlong)plVar1 + 10);
  local_44 = (undefined1)plVar1[2];
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50);
  lVar4 = param_1[0x35];
  *(undefined1 *)(lVar4 + 8) = local_32;
  *(undefined1 *)(lVar4 + 0x32) = local_41;
  *(undefined1 *)(lVar4 + 0x33) = local_42;
  *(undefined1 *)(lVar4 + 10) = local_43;
  *(undefined1 *)(lVar4 + 0x10) = local_44;
  FUN_00410f20(local_50);
  plVar1 = (longlong *)param_1[0x44];
  local_59 = *(undefined1 *)((longlong)plVar1 + 0x13);
  local_6c = *(undefined4 *)((longlong)plVar1 + 0x14);
  local_6d = *(undefined1 *)((longlong)plVar1 + 0x12);
  local_74 = (undefined4)plVar1[3];
  local_75 = *(undefined1 *)((longlong)plVar1 + 0x1d);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_80);
  lVar4 = param_1[0x44];
  *(undefined1 *)(lVar4 + 0x13) = local_59;
  *(undefined4 *)(lVar4 + 0x14) = local_6c;
  *(undefined1 *)(lVar4 + 0x12) = local_6d;
  *(undefined4 *)(lVar4 + 0x18) = local_74;
  *(undefined1 *)(lVar4 + 0x1d) = local_75;
  FUN_00410f20(local_80);
  FUN_00414ad0(param_1 + 0x39,local_90[0]);
  param_1[0x42] = local_98;
  *(undefined1 *)((longlong)param_1 + 0x1e9) = local_99;
  *(undefined1 *)(param_1 + 0x4e) = local_9a;
  *(undefined1 *)((longlong)param_1 + 0x271) = local_9b;
  if (local_31 == '\0') {
    FUN_019714c0(auStack_148,&local_100,*(undefined8 *)(param_1[0x48] + 0x48));
    FUN_00414ad0(param_1[0x48] + 0x48,local_100);
  }
  if (*(char *)(param_1[0x48] + 0x90) == '\0') {
    if ((((char)param_1[0x47] == '\0') && (*(char *)(param_1[0x35] + 0x20) == '\0')) &&
       (local_31 == '\0')) {
      cVar2 = FUN_0196cc90(param_1[0x48]);
      if (cVar2 == '\0') goto LAB_01972012;
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x28))((longlong *)param_1[0x36]);
    if (0 < iVar3) {
      uVar5 = FUN_0180bfb0();
      FUN_01809b60(uVar5,&local_110,L"clErrors");
      (**(code **)(*(longlong *)param_1[0x36] + 0x38))((longlong *)param_1[0x36],&local_118);
      local_128 = local_118;
      FUN_00416cd0(&local_108,3,local_110,&DAT_01972510);
      FUN_0180dc30(param_1,local_108);
    }
  }
  else {
LAB_01972012:
    (**(code **)(*param_1 + 0x1b8))(param_1);
  }
LAB_019720af:
  FUN_00414560(&local_118,8);
  FUN_004144d0(&local_d8);
  FUN_00414560(&local_d0,4);
  FUN_00414480(local_90);
  return;
}

