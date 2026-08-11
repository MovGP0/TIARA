/* Ghidra address: 0128f4c0 */
/* Ghidra symbol: FUN_0128f4c0 */


void FUN_0128f4c0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4,
                 longlong *param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  ulonglong local_res20;
  undefined1 auStack_4248 [32];
  ulonglong local_4228;
  longlong *local_4220;
  undefined8 *local_4218;
  undefined8 local_4210;
  undefined4 local_4208;
  longlong *local_41f8;
  undefined8 local_41f0;
  undefined8 local_41e8;
  longlong local_41e0;
  undefined8 local_41d8;
  undefined8 local_41d0;
  undefined8 local_41c8;
  undefined8 local_41c0;
  undefined8 local_41b8;
  undefined8 local_41b0;
  undefined8 local_41a8;
  undefined8 local_41a0;
  undefined8 local_4198;
  undefined8 local_4190;
  ulonglong local_4188;
  undefined8 local_4180;
  undefined8 local_4178;
  undefined8 local_4170;
  undefined8 local_4168;
  undefined8 local_4160;
  ulonglong local_4158;
  undefined8 local_4150;
  undefined8 local_4148;
  undefined8 local_4140;
  undefined8 local_4138;
  undefined8 local_4130;
  undefined8 local_4128;
  undefined1 *local_4120;
  longlong *local_4118;
  undefined1 local_40f8 [4];
  int local_40f4;
  undefined1 local_40f0 [4];
  int local_40ec;
  int local_40e8;
  int local_40e4;
  undefined8 local_40e0;
  undefined8 local_40d8;
  undefined8 local_40d0;
  undefined8 local_40c8;
  undefined8 local_40c0;
  undefined8 local_40b8;
  undefined8 local_40b0;
  undefined8 local_40a8;
  undefined8 local_40a0;
  undefined8 local_4098;
  longlong local_4090;
  longlong local_4088;
  undefined8 local_4080;
  longlong local_4078;
  longlong local_4070;
  undefined1 local_4061;
  longlong *local_4060;
  undefined8 local_4058;
  undefined1 local_4050 [12344];
  undefined1 auStack_1018 [4040];
  longlong *local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong uVar8;
  
  uVar8 = 0xdd0;
  do {
    uVar7 = uVar8 - 0x1000;
    auStack_1018[uVar8] = (char)uVar7;
    uVar8 = uVar7;
  } while (0xffffffffffffbdd0 < uVar7);
  local_4120 = auStack_4248;
  local_41f8 = (longlong *)0x0;
  local_41f0 = 0;
  local_41e0 = 0;
  local_41e8 = 0;
  local_41d8 = 0;
  local_41d0 = 0;
  local_41c8 = 0;
  local_41c0 = 0;
  local_41b8 = 0;
  local_41b0 = 0;
  local_41a8 = 0;
  local_41a0 = 0;
  local_4198 = 0;
  local_4180 = 0;
  local_4188 = 0;
  local_4190 = 0;
  local_4160 = 0;
  local_4168 = 0;
  local_4170 = 0;
  local_4178 = 0;
  local_4158 = 0;
  local_4150 = 0;
  local_4148 = 0;
  local_4140 = 0;
  local_4138 = 0;
  local_4130 = 0;
  local_4128 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_4070 = 0;
  local_4078 = 0;
  local_4080 = 0;
  local_4088 = 0;
  local_4090 = 0;
  local_4098 = 0;
  local_40a0 = 0;
  local_40a8 = 0;
  local_40b0 = 0;
  local_40b8 = 0;
  local_40c0 = 0;
  local_40c8 = 0;
  local_40d0 = 0;
  local_40d8 = 0;
  local_40e0 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_1);
  FUN_00414610(param_5);
  FUN_00414610(param_7);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4080,L"typeid");
  local_40e4 = FUN_0043fc50(local_4080,0);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4070,&PTR_DAT_01290770);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4078,L"groupid");
  local_4060 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,(undefined2)local_40e4);
  uVar3 = (**(code **)(*local_4060 + 0x2c8))(local_4060);
  lVar9 = FUN_00409570(uVar3);
  local_4060[0x18] = lVar9;
  FUN_01d38290(local_4060,1);
  if (local_40e4 == 0x39) {
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_4128,L"macrotype");
    uVar1 = FUN_0043fc50(local_4128,0);
    *(undefined1 *)(local_4060 + 0x34) = uVar1;
    (**(code **)(*local_res8 + 0xd8))(local_res8,&local_4130,L"parameter[@type=\"mcucode\"]");
    FUN_0041b890(&local_40,local_4130,&DAT_012907f6);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x100))(local_40,&local_40e0,L"value");
      iVar5 = FUN_00416db0(local_40e0,L"Arduino project");
      if (iVar5 == 0) {
        *(undefined1 *)(local_4060 + 0x34) = 1;
      }
    }
    if ((char)local_4060[0x34] == '\0') {
      uVar10 = (**(code **)*local_4060)(local_4060);
      FUN_00418590(uVar10,&DAT_01cf1390);
      goto LAB_012904c5;
    }
  }
  local_4118 = local_4060;
  if (local_4070 != 0) {
    FUN_017ff510(local_4060,local_4070);
  }
  if (local_4078 != 0) {
    FUN_017ff590(local_4118,local_4078);
  }
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4138,L"refid");
  FUN_00414ad0(local_4118 + 0x30,local_4138);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4140,L"powertype");
  uVar1 = FUN_0043fc50(local_4140,0);
  *(undefined1 *)(local_4118 + 0xa8) = uVar1;
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4148,L"position");
  FUN_00416ba0(&local_4098,local_4148,&DAT_012908b0);
  uVar6 = FUN_012421e0(&local_4098);
  *(undefined4 *)((longlong)local_4118 + 0xc) = uVar6;
  uVar6 = FUN_012421e0(&local_4098);
  *(undefined4 *)(local_4118 + 2) = uVar6;
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_4150,L"mirrored");
  uVar1 = FUN_0043fc50(local_4150,0);
  *(undefined1 *)((longlong)local_4118 + 0xd3) = uVar1;
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_40a0,L"orientation");
  iVar5 = FUN_0043fc50(local_40a0,0);
  uVar8 = (longlong)(0x168 - iVar5 % 0x168) / 0x5a;
  *(char *)((longlong)local_4118 + 0xd1) =
       (char)((longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) % 4);
  (**(code **)(*local_res8 + 0xd8))(local_res8,&local_4158,L"image/label");
  FUN_0041b890(&local_30,local_4158,&DAT_012907f6);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x100))(local_30,&local_4168,L"textroot");
    FUN_004168e0(&local_4170,local_4168);
    FUN_00415dd0(&local_4178,param_5,0);
    FUN_00b0cfa0(&local_4160,local_4170,local_4178);
    FUN_00414ad0(local_4118 + 0x13,local_4160);
    (**(code **)(*local_30 + 0x100))(local_30,&local_4180,L"text");
    FUN_004168e0(&local_4188,local_4180);
    FUN_00415dd0(&local_4190,param_5,0);
    FUN_00b0cfa0(&local_4090,local_4188,local_4190);
    if (local_4090 != 0) {
      (**(code **)(*local_30 + 0x100))(local_30,&local_4198,L"position");
      FUN_00416ba0(&local_4098,local_4198,&DAT_012908b0);
      (**(code **)(*local_30 + 0x100))(local_30,&local_40a0,L"orientation");
      iVar5 = FUN_0043fc50(local_40a0,0);
      uVar8 = (longlong)
              ((ulonglong)(uint)((int)((longlong)iVar5 % 0x168) >> 0x1f) << 0x20 |
              (longlong)iVar5 % 0x168 & 0xffffffffU) / 0x5a;
      *(char *)(local_4118 + 0x15) =
           (char)((longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) % 4
                 );
      local_40e8 = FUN_012421e0(&local_4098);
      local_40ec = FUN_012421e0(&local_4098);
      local_4061 = *(undefined1 *)((longlong)local_4118 + 0xd1);
      if (*(byte *)(local_4118 + 0x15) < 8) {
        bVar12 = ((int)CONCAT71((int7)((ulonglong)local_4118 >> 8),1) <<
                  (*(byte *)(local_4118 + 0x15) & 0x1f) & 10U) != 0;
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        local_4061 = FUN_01cefe30(local_4061,1);
      }
      local_4228 = CONCAT71(local_4228._1_7_,*(undefined1 *)((longlong)local_4118 + 0xd3));
      local_4220 = param_5;
      FUN_012431c0(local_4090,&local_40e8,&local_40ec,local_4061);
      local_40e8 = local_40e8 - *(int *)((longlong)local_4118 + 0xc);
      local_40ec = local_40ec - (int)local_4118[2];
      FUN_01cf1530(*(undefined1 *)((longlong)local_4118 + 0xd1),
                   *(undefined1 *)((longlong)local_4118 + 0xd3),&local_40e8,&local_40ec);
      *(int *)(local_4118 + 0x14) = local_40e8;
      *(int *)((longlong)local_4118 + 0xa4) = local_40ec;
    }
  }
  sVar4 = (**(code **)(*local_4118 + 0xf8))(local_4118);
  if (sVar4 == 0xa1) {
LAB_0128fe5b:
    FUN_01d04330(local_4060,&local_41a0);
    lVar9 = FUN_0124fb40(local_res8,local_41a0);
    local_4118[0xa2] = lVar9;
    uVar6 = FUN_00c41060(lVar9,local_40f0);
    FUN_01d01990(local_4060,uVar6);
  }
  else {
    uVar3 = (**(code **)(*local_4118 + 0xf8))(local_4118);
    cVar2 = FUN_01d420f0(uVar3);
    if (cVar2 != '\0') goto LAB_0128fe5b;
  }
  if ((char)local_4060[0x34] == '\x02') {
    lVar9 = FUN_0176c970(&PTR_FUN_01761b48,1,local_4060);
    local_4060[0x35] = lVar9;
  }
  if ((char)local_4060[0x34] == '\x03') {
    lVar9 = FUN_01771870(&PTR_FUN_01763148,1,local_4060);
    local_4060[0x35] = lVar9;
  }
  if ((char)local_4060[0x34] == '\x04') {
    lVar9 = FUN_01776df0(&PTR_FUN_017649b8,1,local_4060);
    local_4060[0x35] = lVar9;
  }
  if ((char)local_4060[0x34] == '\x01') {
    puVar11 = (undefined8 *)FUN_0176a5d0(&PTR_FUN_017611c0,1,local_4060);
    local_4060[0x35] = (longlong)puVar11;
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_41a8,L"type");
    (**(code **)*puVar11)(puVar11,local_41a8);
    FUN_01d04330(local_4060,&local_41b0);
    uVar10 = FUN_0124fb40(local_res8,local_41b0);
    FUN_01768da0(local_4060[0x35],uVar10);
    uVar10 = FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
    *(undefined8 *)(local_4060[0x35] + 8) = uVar10;
    (**(code **)(*local_res8 + 0xd8))(local_res8,&local_41b8,L"subcircuit");
    FUN_0041b890(&local_38,local_41b8,&DAT_012907f6);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xb8))(local_38,&local_41c0);
      FUN_0043ea00(&local_4088,local_41c0);
      if (local_4088 != 0) {
        local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
        local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        FUN_00c7b9b0(local_4088,local_20);
        (**(code **)(*local_38 + 0x100))(local_38,&local_41c8,L"encrypted");
        cVar2 = FUN_0043fc50(local_41c8,0);
        if (cVar2 != '\0') {
          FUN_0176b4d0(&local_20);
        }
        FUN_004b6dc0(local_20,0);
        local_50 = (longlong *)FUN_00628b20(&PTR_FUN_00627390,1,local_20);
        do {
          local_40f4 = (**(code **)(*local_50 + 0x18))(local_50,local_4050,0x4000);
          (**(code **)(*local_28 + 0x20))(local_28,local_4050,local_40f4);
        } while (local_40f4 != 0);
        FUN_00410f20(local_50);
        FUN_004b6dc0(local_28,0);
        local_4228 = local_4228 & 0xffffffffffffff00;
        local_4220 = local_28;
        local_4218 = &local_4058;
        local_4210 = 0;
        FUN_0176b300(local_res10,0,local_4060,0);
        (**(code **)(*local_38 + 0x100))(local_38,&local_41d0,L"encrypted");
        uVar1 = FUN_0043fc50(local_41d0,0);
        lVar9 = local_4060[0x35];
        *(undefined1 *)(lVar9 + 0xb0) = uVar1;
        *(undefined8 *)(lVar9 + 8) = local_4058;
        FUN_00410f20(local_20);
        FUN_00410f20(local_28);
      }
    }
  }
  uVar3 = (**(code **)(*local_4060 + 0xf8))(local_4060);
  cVar2 = FUN_01d42040(uVar3);
  if (cVar2 == '\0') {
LAB_0129038f:
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_41f8,L"value");
    local_4228 = local_res20;
    local_4220 = local_41f8;
    local_4218 = (undefined8 *)CONCAT44(local_4218._4_4_,param_6);
    local_4210 = param_7;
    local_4208 = 0;
    cVar2 = FUN_01280470(local_res10,local_res18,local_4060,local_res8);
    if ((cVar2 == '\0') ||
       (((cVar2 = (char)local_4060[0x34], cVar2 != '\x02' && (cVar2 != '\x03')) && (cVar2 != '\x04')
        ))) {
      if (local_4060[0x30] != 0) {
        cVar2 = FUN_01d073b0(local_4060,local_4060[0x30],local_40f8);
        if (cVar2 != '\0') {
          *(undefined1 *)(local_4060 + 0x77) = local_40f8[0];
        }
      }
      (**(code **)(*local_res18 + 0x20))(local_res18,local_4060);
      FUN_01991990(local_res18,local_4060);
    }
    else {
      uVar10 = (**(code **)*local_4060)(local_4060);
      FUN_00418590(uVar10,&DAT_01cf1390);
    }
  }
  else {
    (**(code **)(*local_res8 + 0xd8))(local_res8,&local_41d8,L"parameter[@idx=\"0\"]");
    FUN_0041b890(&local_40,local_41d8,&DAT_012907f6);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0xb8))(local_40,&local_41e8);
      FUN_0043ea00(&local_41e0,local_41e8);
      if (local_41e0 != 0) goto LAB_0129038f;
    }
    local_48 = FUN_017105e0(local_res20);
    (**(code **)(*local_res8 + 0x100))(local_res8,&local_41f0,L"type");
    local_4228 = local_48;
    FUN_01700720(local_41f0,0,local_4060,0);
    FUN_01710700(local_48);
    (**(code **)(*local_res18 + 0x20))(local_res18,local_4060);
    FUN_01991990(local_res18,local_4060);
  }
LAB_012904c5:
  FUN_00414560(&local_41f8,4);
  FUN_0041b800(&local_41d8);
  FUN_00414560(&local_41d0,3);
  FUN_0041b800(&local_41b8);
  FUN_00414560(&local_41b0,4);
  FUN_004144d0(&local_4190);
  FUN_00414520(&local_4188);
  FUN_00414480(&local_4180);
  FUN_004144d0(&local_4178);
  FUN_00414520(&local_4170);
  FUN_00414560(&local_4168,2);
  FUN_0041b800(&local_4158);
  FUN_00414560(&local_4150,4);
  FUN_0041b800(&local_4130);
  FUN_00414480(&local_4128);
  FUN_00414560(&local_40e0,0xf);
  FUN_00417840(&local_40,&LAB_00b9fca0,3);
  FUN_0041b800(&local_res8);
  FUN_00414480(&param_5);
  FUN_00414480(&param_7);
  return;
}

