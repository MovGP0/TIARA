/* Ghidra address: 01bdb5a0 */
/* Ghidra symbol: FUN_01bdb5a0 */


undefined4 FUN_01bdb5a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  local_13c = 0;
  thunk_FUN_04125dff(param_3);
  *(undefined2 *)param_3 = 3;
  plVar6 = (longlong *)0x0;
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    lVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_004685b0(&local_78,*(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x10),0xfffffffffffffffc);
    cVar1 = FUN_0046f3b0(&local_40,&local_78);
    if (cVar1 == '\0') {
      uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
      FUN_00461840(&local_90,&local_40);
      FUN_004685b0(&local_a8,1,1);
      FUN_0046f1e0(&local_90,&local_a8);
      uVar2 = FUN_00462650(&local_90);
      lVar4 = FUN_01bfb960(uVar5,uVar2);
      if (*(longlong *)(lVar4 + 0x80) == 0) {
        thunk_FUN_03f3ed6d(0);
      }
      *(undefined4 *)(param_3 + 1) = 0x100004;
      uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
      FUN_00461840(&local_c0,&local_40);
      FUN_004685b0(&local_d8,1,1);
      FUN_0046f1e0(&local_c0,&local_d8);
      uVar2 = FUN_00462650(&local_c0);
      lVar4 = FUN_01bfb960(uVar5,uVar2);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) |
           *(uint *)(&DAT_01fe0f3c + (ulonglong)*(byte *)(*(longlong *)(lVar4 + 0x80) + 0xa9) * 4);
      uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
      FUN_00461840(&local_f0,&local_40);
      FUN_004685b0(&local_108,1,1);
      FUN_0046f1e0(&local_f0,&local_108);
      uVar2 = FUN_00462650(&local_f0);
      uVar5 = FUN_01bfb960(uVar5,uVar2);
      uVar3 = FUN_01bfaa20(uVar5);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f34 + (uVar3 & 0xff) * 4);
      uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
      FUN_00461840(&local_120,&local_40);
      FUN_004685b0(&local_138,1,1);
      FUN_0046f1e0(&local_120,&local_138);
      uVar2 = FUN_00462650(&local_120);
      lVar4 = FUN_01bfb960(uVar5,uVar2);
      uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0xf0))(*(longlong **)(lVar4 + 0x80));
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f2c + (uVar3 & 0xff) * 4);
    }
    else {
      local_13c = 0x80070057;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01bee940);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01bf1690);
      if (cVar1 != '\0') {
        plVar6 = *(longlong **)(lVar4 + 0x80);
      }
    }
    else {
      plVar6 = *(longlong **)(lVar4 + 0x18);
    }
    if (plVar6 == (longlong *)0x0) {
      *(undefined4 *)(param_3 + 1) = 0x100004;
      lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 0x18));
      if (lVar4 != 0) {
        lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 0x18));
        *(uint *)(param_3 + 1) =
             *(uint *)(param_3 + 1) |
             *(uint *)(&DAT_01fe0f3c + (ulonglong)*(byte *)(lVar4 + 0x100) * 4);
        lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 0x18));
        *(uint *)(param_3 + 1) =
             *(uint *)(param_3 + 1) |
             *(uint *)(&DAT_01fe0f2c + (ulonglong)*(byte *)(lVar4 + 0xd9) * 4);
      }
    }
    else {
      *(undefined4 *)(param_3 + 1) = 0x100004;
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) |
           *(uint *)(&DAT_01fe0f3c + (ulonglong)*(byte *)((longlong)plVar6 + 0xa9) * 4);
      uVar3 = (**(code **)(*plVar6 + 0xf0))(plVar6);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f2c + (uVar3 & 0xff) * 4);
      uVar3 = (**(code **)(*plVar6 + 0x228))(plVar6);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f44 + (uVar3 & 0xff) * 4);
    }
  }
  FUN_00417840(&local_138,&DAT_004013f0,10);
  FUN_00460ba0(&local_40);
  return local_13c;
}

