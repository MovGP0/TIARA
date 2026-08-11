/* Ghidra address: 0128ace0 */
/* Ghidra symbol: FUN_0128ace0 */


longlong *
FUN_0128ace0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
            undefined1 param_5,uint param_6,char param_7,longlong param_8,undefined8 param_9,
            undefined1 *param_10,byte param_11,undefined1 param_12,undefined1 param_13,
            undefined1 param_14,undefined1 param_15,undefined1 param_16,undefined8 param_17)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 *puVar10;
  undefined1 uVar11;
  bool bVar12;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_4228 [32];
  longlong *local_4208;
  undefined1 *local_4200;
  undefined1 local_41f8;
  longlong local_41f0;
  longlong local_41e8;
  undefined8 local_41e0;
  undefined4 local_41d8;
  undefined8 local_41d0;
  undefined8 local_41c0;
  undefined8 local_41b8;
  undefined8 local_41b0;
  undefined8 local_41a8;
  undefined8 local_41a0;
  undefined8 local_4198;
  undefined8 local_4190;
  longlong *local_4188;
  undefined8 local_4180;
  undefined8 local_4178;
  undefined8 local_4170;
  undefined8 local_4168;
  undefined8 local_4160;
  undefined8 local_4158;
  undefined8 local_4150;
  undefined8 local_4148;
  undefined8 local_4140;
  undefined8 local_4138;
  longlong local_4130;
  longlong *local_4128;
  undefined8 local_4120;
  undefined8 local_4118;
  longlong *local_4110;
  undefined8 local_4108;
  undefined8 local_4100;
  undefined8 local_40f8;
  undefined8 local_40f0;
  undefined8 local_40e8;
  undefined8 local_40e0;
  undefined8 local_40d8;
  undefined8 local_40d0;
  undefined8 local_40c8;
  undefined8 local_40c0;
  undefined8 local_40b8;
  undefined1 *local_40b0;
  undefined8 local_40a8;
  undefined8 local_40a0;
  undefined8 local_4098;
  undefined1 *local_4090;
  longlong *local_4080;
  undefined1 local_4073;
  undefined1 local_4072;
  undefined1 local_4071;
  int local_4070;
  int local_406c;
  int local_4068;
  byte local_4061;
  undefined8 local_4060;
  undefined8 local_4058;
  undefined8 local_4050;
  longlong *local_4048;
  undefined1 local_4040 [12328];
  undefined1 auStack_1018 [4056];
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong uVar9;
  
  uVar9 = 0xdf0;
  do {
    uVar8 = uVar9 - 0x1000;
    auStack_1018[uVar9] = (char)uVar8;
    uVar9 = uVar8;
  } while (0xffffffffffffbdf0 < uVar8);
  local_4090 = auStack_4228;
  local_41b8 = 0;
  local_41c0 = 0;
  local_41b0 = 0;
  local_41a8 = 0;
  local_41a0 = 0;
  local_4198 = 0;
  local_4190 = 0;
  local_4178 = 0;
  local_4180 = 0;
  local_4188 = (longlong *)0x0;
  local_4170 = 0;
  local_4150 = 0;
  local_4168 = 0;
  local_4158 = 0;
  local_4160 = 0;
  local_4138 = 0;
  local_4148 = 0;
  local_4140 = 0;
  local_4120 = 0;
  local_4128 = (longlong *)0x0;
  local_4130 = 0;
  local_4108 = 0;
  local_4110 = (longlong *)0x0;
  local_4118 = 0;
  local_4100 = 0;
  local_40f8 = 0;
  local_40f0 = 0;
  local_40e8 = 0;
  local_40e0 = 0;
  local_40d0 = 0;
  local_40d8 = 0;
  local_40c8 = 0;
  local_40c0 = 0;
  local_40b8 = 0;
  local_40a0 = 0;
  local_40a8 = 0;
  local_40b0 = (undefined1 *)0x0;
  local_4098 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_4050 = 0;
  local_4058 = 0;
  local_4060 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18);
  FUN_00414610(param_8);
  FUN_00414610(param_17);
  FUN_0041b800(param_1);
  (**(code **)(*local_res10 + 0x148))(local_res10,&local_30,L"component");
  (**(code **)(*local_res18 + 0x98))(local_res18,&local_4098,local_30);
  plVar1 = local_res20;
  local_4080 = local_res20;
  FUN_0043f750(&local_40a8,*(undefined4 *)((longlong)local_res20 + 0xc));
  FUN_0043f750(&local_40b0,(int)local_4080[2]);
  local_4208 = (longlong *)local_40b0;
  FUN_00416cd0(&local_40a0,3,local_40a8,&DAT_0128c06c);
  (**(code **)(*local_30 + 0x108))(local_30,L"position",local_40a0);
  FUN_0043f750(&local_40b8,*(undefined1 *)((longlong)local_4080 + 0xd3));
  (**(code **)(*local_30 + 0x108))(local_30,L"mirrored",local_40b8);
  local_4061 = *(byte *)((longlong)local_4080 + 0xd1);
  FUN_0043f750(&local_40c0,(longlong)(int)((uint)local_4061 * -0x5a + 0x168) % 0x168 & 0xffffffff);
  (**(code **)(*local_30 + 0x108))(local_30,L"orientation",local_40c0);
  uVar3 = (**(code **)(*local_4080 + 0xf8))(local_4080);
  FUN_0043f750(&local_40c8,uVar3);
  (**(code **)(*local_30 + 0x108))(local_30,L"typeid",local_40c8);
  FUN_013acbd0(&local_40d0,plVar1,param_8);
  FUN_004168b0(&local_40d8,local_40d0);
  (**(code **)(*local_30 + 0x108))(local_30,L"type",local_40d8);
  FUN_017ff4f0(local_4080,&local_40e0);
  (**(code **)(*local_30 + 0x108))(local_30,&PTR_DAT_0128c0f4,local_40e0);
  FUN_017ff570(local_4080,&local_40e8);
  (**(code **)(*local_30 + 0x108))(local_30,L"groupid",local_40e8);
  FUN_01d04330(local_4080,&local_40f0);
  (**(code **)(*local_30 + 0x108))(local_30,L"refid",local_40f0);
  FUN_0043f750(&local_40f8,(char)local_4080[0xa8]);
  (**(code **)(*local_30 + 0x108))(local_30,L"powertype",local_40f8);
  if (param_7 == '\x01') {
    sVar4 = (**(code **)(*local_4080 + 0xf8))(local_4080);
    if (sVar4 != 0x2c) {
      sVar4 = (**(code **)(*local_4080 + 0xf8))(local_4080);
      if (sVar4 != 0x71) goto LAB_0128b391;
    }
    local_4208 = (longlong *)&local_4072;
    local_4200 = &local_4073;
    puVar10 = (undefined8 *)FUN_01cfde70(local_4080,1,0x16,&local_4071);
    FUN_01742870(&local_4100,*puVar10);
    (**(code **)(*local_30 + 0x108))(local_30,L"usage",local_4100);
  }
LAB_0128b391:
  if ((param_6 & 2) != 0) {
    local_4208 = (longlong *)param_10;
    local_4200 = (undefined1 *)CONCAT71(local_4200._1_7_,(param_6 & 4) == 0);
    local_41f8 = 1;
    local_41f0 = CONCAT71(local_41f0._1_7_,param_11);
    local_41e8 = param_8;
    local_41e0 = CONCAT71(local_41e0._1_7_,param_7);
    local_41d8 = 0xffff;
    local_41d0 = param_17;
    FUN_01266400(param_9,local_res20,local_res10,local_30);
  }
  local_40 = FUN_01d06e20(local_4080);
  if (local_40 == 0) {
    uVar3 = (**(code **)(*local_4080 + 0xf8))(local_4080);
    FUN_01d04330(local_4080,&local_4130);
    local_4208 = (longlong *)CONCAT71(local_4208._1_7_,param_5);
    local_4200 = (undefined1 *)CONCAT71(local_4200._1_7_,(param_6 & 1) != 0);
    local_41f8 = param_7 == '\x01';
    local_41f0 = local_4130;
    FUN_0124c5b0(&local_4128,uVar3,local_res10,local_30);
    (**(code **)(*local_4128 + 0xd8))(local_4128,&local_4120,L"label");
    FUN_0041b890(param_1,local_4120,&DAT_0128c180);
  }
  else {
    uVar3 = (**(code **)(*local_4080 + 0xf8))(local_4080);
    sVar4 = (**(code **)(*local_4080 + 0xf8))(local_4080);
    if (sVar4 == 0x39) {
LAB_0128b4c7:
      uVar11 = 1;
    }
    else {
      sVar4 = (**(code **)(*local_4080 + 0xf8))(local_4080);
      if (sVar4 == 0xa1) goto LAB_0128b4c7;
      uVar5 = (**(code **)(*local_4080 + 0xf8))(local_4080);
      cVar2 = FUN_01d420f0(uVar5);
      if ((cVar2 != '\0') || ((param_6 & 1) != 0)) goto LAB_0128b4c7;
      uVar11 = 0;
    }
    FUN_01d04330(local_4080,&local_4118);
    local_4208 = local_30;
    local_4200 = (undefined1 *)local_40;
    local_41f8 = param_5;
    local_41f0 = CONCAT71(local_41f0._1_7_,uVar11);
    local_41e8 = CONCAT71(local_41e8._1_7_,param_7 == '\x01');
    local_41e0 = local_4118;
    FUN_0124aee0(&local_4110,local_res20,uVar3,local_res10);
    (**(code **)(*local_4110 + 0xd8))(local_4110,&local_4108,L"label");
    FUN_0041b890(param_1,local_4108,&DAT_0128c180);
  }
  if (*param_1 != 0) {
    FUN_00415dd0(&local_4140,param_8,0);
    FUN_00b0d0c0(&local_4138,local_4080[0x13],local_4140);
    FUN_004168b0(&local_4148,local_4138);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"textroot",local_4148);
    local_4208 = (longlong *)CONCAT71(local_4208._1_7_,param_14);
    local_4200 = (undefined1 *)CONCAT71(local_4200._1_7_,param_15);
    local_41f8 = param_16;
    local_41f0 = param_8;
    (**(code **)(*local_4080 + 0x280))(local_4080,&local_4158,param_12,param_13);
    FUN_00415dd0(&local_4160,param_8,0);
    FUN_00b0d0c0(&local_4150,local_4158,local_4160);
    FUN_004168b0(&local_4168,local_4150);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"text",local_4168);
    local_4061 = *(byte *)((longlong)local_4080 + 0xd1);
    if (*(byte *)(local_4080 + 0x15) < 8) {
      bVar12 = ((int)CONCAT71((int7)((ulonglong)local_4080 >> 8),1) <<
                (*(byte *)(local_4080 + 0x15) & 0x1f) & 10U) != 0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      local_4061 = FUN_01cefe30(local_4061,1);
    }
    local_4068 = (int)local_4080[0x14];
    local_406c = *(int *)((longlong)local_4080 + 0xa4);
    (**(code **)(*local_4080 + 0x270))(local_4080,&local_4068,&local_406c);
    local_4068 = local_4068 + *(int *)((longlong)local_4080 + 0xc);
    local_406c = local_406c + (int)local_4080[2];
    local_4208._0_1_ = param_14;
    local_4200 = (undefined1 *)CONCAT71(local_4200._1_7_,param_15);
    local_41f8 = param_16;
    local_41f0 = param_8;
    (**(code **)(*local_4080 + 0x280))(local_4080,&local_4170,param_12,param_13);
    local_4208 = (longlong *)CONCAT71(local_4208._1_7_,*(undefined1 *)((longlong)local_4080 + 0xd3))
    ;
    local_4200 = (undefined1 *)param_8;
    FUN_01242d80(local_4170,&local_4068,&local_406c,local_4061);
    FUN_0043f750(&local_4180,local_4068);
    FUN_0043f750(&local_4188,local_406c);
    local_4208 = local_4188;
    FUN_00416cd0(&local_4178,3,local_4180,&DAT_0128c06c);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"position",local_4178);
    FUN_0043f750(&local_4190,(ulonglong)((uint)*(byte *)(local_4080 + 0x15) * 0x5a) % 0x168);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"orientation",local_4190);
    uVar6 = (**(code **)(*local_4080 + 0xf8))(local_4080);
    if (uVar6 < 0x100) {
      uVar6 = (**(code **)(*local_4080 + 0xf8))(local_4080);
      if (uVar6 < 0xa8) {
        bVar12 = (*(byte *)((longlong)L"text" + ((longlong)((ulonglong)uVar6 + 0x38) >> 3) + 4) >>
                  ((ulonglong)uVar6 + 0x38 & 7) & 1) != 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        uVar7 = FUN_01242250(0x800080);
        FUN_0043f780(&local_4198,uVar7);
        (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_4198);
        goto LAB_0128ba94;
      }
    }
    uVar7 = FUN_01242250(FUN_00808000);
    FUN_0043f780(&local_41a0,uVar7);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_41a0);
  }
LAB_0128ba94:
  cVar2 = FUN_01d04d40(local_4080);
  if (((cVar2 != '\0') && ((char)local_4080[0x34] == '\x01')) &&
     (*(longlong *)(local_4080[0x35] + 8) != 0)) {
    (**(code **)(*local_res10 + 0x148))(local_res10,&local_38,L"subcircuit");
    (**(code **)(*local_30 + 0x98))(local_30,&local_41a8,local_38);
    if ((param_6 & 1) == 0) {
      local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      FUN_0176c1a0(*(undefined8 *)(local_4080[0x35] + 8),0,local_28);
      FUN_0043f750(&local_41b0,*(byte *)(local_4080[0x35] + 0xb0) | param_11);
      (**(code **)(*local_38 + 0x108))(local_38,L"encrypted",local_41b0);
      FUN_004b6dc0(local_28,0);
      local_4048 = (longlong *)FUN_00628260(&PTR_FUN_00626df0,1,local_20);
      do {
        local_4070 = (**(code **)(*local_28 + 0x18))(local_28,local_4040,0x4000);
        (**(code **)(*local_4048 + 0x20))(local_4048,local_4040,local_4070);
      } while (local_4070 != 0);
      FUN_00410f20(local_4048);
      FUN_004b6dc0(local_20,0);
      if (*(char *)(local_4080[0x35] + 0xb0) != '\0' || param_11 != 0) {
        FUN_0176c240(&local_20);
        FUN_004b6dc0(local_20,0);
      }
      FUN_00c7ba40(local_20,&local_4050);
      (**(code **)(*local_res10 + 0x128))(local_res10,&local_41c0,local_4050);
      (**(code **)(*local_38 + 0x98))(local_38,&local_41b8,local_41c0);
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
    }
  }
  FUN_0041b800(&local_41c0);
  FUN_0041b800(&local_41b8);
  FUN_00414480(&local_41b0);
  FUN_0041b800(&local_41a8);
  FUN_00414560(&local_41a0,8);
  FUN_004144d0(&local_4160);
  FUN_00414480(&local_4158);
  FUN_00414520(&local_4150);
  FUN_00414480(&local_4148);
  FUN_004144d0(&local_4140);
  FUN_00414520(&local_4138);
  FUN_00414480(&local_4130);
  FUN_0041b800(&local_4128);
  FUN_0041b800(&local_4120);
  FUN_00414480(&local_4118);
  FUN_0041b800(&local_4110);
  FUN_0041b800(&local_4108);
  FUN_00414560(&local_4100,6);
  FUN_00414520(&local_40d0);
  FUN_00414560(&local_40c8,6);
  FUN_0041b800(&local_4098);
  FUN_00414560(&local_4060,3);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res10);
  FUN_0041b800(&local_res18);
  FUN_00414480(&param_8);
  FUN_00414480(&param_17);
  return param_1;
}

