/* Ghidra address: 01bdabc0 */
/* Ghidra symbol: FUN_01bdabc0 */


undefined4 FUN_01bdabc0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_124;
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
  
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
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
  local_124 = 0;
  thunk_FUN_04125dff(param_3);
  *(undefined2 *)param_3 = 3;
  plVar6 = (longlong *)0x0;
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_3 + 1) = 0x100084;
    uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_78,&local_40);
    FUN_004685b0(&local_90,1,1);
    FUN_0046f1e0(&local_78,&local_90);
    uVar2 = FUN_00462650(&local_78);
    lVar4 = FUN_01bfb960(uVar5,uVar2);
    *(uint *)(param_3 + 1) =
         *(uint *)(param_3 + 1) |
         *(uint *)(&DAT_01fe0f1c + (ulonglong)*(byte *)(*(longlong *)(lVar4 + 0x80) + 0xa9) * 4);
    uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_a8,&local_40);
    FUN_004685b0(&local_c0,1,1);
    FUN_0046f1e0(&local_a8,&local_c0);
    uVar2 = FUN_00462650(&local_a8);
    uVar5 = FUN_01bfb960(uVar5,uVar2);
    uVar3 = FUN_01bfaa20(uVar5);
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f14 + (uVar3 & 0xff) * 4);
    uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_d8,&local_40);
    FUN_004685b0(&local_f0,1,1);
    FUN_0046f1e0(&local_d8,&local_f0);
    uVar2 = FUN_00462650(&local_d8);
    lVar4 = FUN_01bfb960(uVar5,uVar2);
    uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0xf0))(*(longlong **)(lVar4 + 0x80));
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f0c + (uVar3 & 0xff) * 4);
    uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_108,&local_40);
    FUN_004685b0(&local_120,1,1);
    FUN_0046f1e0(&local_108,&local_120);
    uVar2 = FUN_00462650(&local_108);
    lVar4 = FUN_01bfb960(uVar5,uVar2);
    cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x228))(*(longlong **)(lVar4 + 0x80));
    if (cVar1 != '\0') {
      *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) | 0x10;
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
      local_124 = 0x80070057;
    }
    else {
      *(undefined4 *)(param_3 + 1) = 0x100084;
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) |
           *(uint *)(&DAT_01fe0f1c + (ulonglong)*(byte *)((longlong)plVar6 + 0xa9) * 4);
      uVar3 = (**(code **)(*plVar6 + 0xf0))(plVar6);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) | *(uint *)(&DAT_01fe0f0c + (uVar3 & 0xff) * 4);
      lVar4 = (**(code **)(*plVar6 + 0xd0))(plVar6);
      *(uint *)(param_3 + 1) =
           *(uint *)(param_3 + 1) |
           *(uint *)(&DAT_01fe0f24 + (ulonglong)*(byte *)(lVar4 + 0xd8) * 4);
    }
  }
  FUN_00417840(&local_120,&DAT_004013f0,9);
  FUN_00460ba0(&local_40);
  return local_124;
}

