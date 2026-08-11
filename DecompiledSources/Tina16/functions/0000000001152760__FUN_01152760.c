/* Ghidra address: 01152760 */
/* Ghidra symbol: FUN_01152760 */


void FUN_01152760(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined *local_e0;
  longlong local_d0;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  int local_2c;
  
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_d0 = param_1;
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x6e8),*(char *)(param_1 + 0x8e0) == '\0');
  FUN_00848a70(*(undefined8 *)(local_d0 + 0x6b8),0x2d);
  local_c8 = 0;
  *(undefined8 *)(local_d0 + 0x8f0) = *(undefined8 *)(local_d0 + 0x740);
  local_38 = (char *)&DAT_02030200;
  local_2c = 0;
  do {
    if (*(char *)(local_d0 + 0x8e0) == '\0') {
      bVar1 = PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x27];
    }
    else {
      bVar1 = PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x26];
    }
    local_c4 = bVar1 - 1;
    lVar5 = (longlong)(local_2c + 1);
    if (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x01') {
      uVar3 = FUN_0040c770(*(undefined8 *)(local_d0 + 0x738 + lVar5 * 8));
      *(undefined4 *)local_38 = uVar3;
      if ((*(char *)(local_d0 + 0x8e0) == '\0') ||
         (PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x28] == '\x01')) {
        lVar5 = FUN_00b08760(&PTR_FUN_0142bbf0,1,local_38,local_c4);
        *(longlong *)(lVar5 + 0x68) = local_d0;
        *(code **)(lVar5 + 0x60) = FUN_011537e0;
        FUN_011526b0(auStack_108,&local_48,local_2c);
        uVar6 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (longlong)(local_2c + 1) * 8 + 0xc0)
                            );
        FUN_0043f780(&local_50,uVar6);
        local_e8 = local_50;
        local_e0 = &DAT_0115312c;
        FUN_00416cd0(&local_40,4,local_48,&DAT_01153118);
        FUN_00b0acb0(*(undefined8 *)(local_d0 + 0x6b8),local_c4,local_40,lVar5);
        (&DAT_0203031e)[local_c4 + 1] = (char)local_2c + '\x01';
        local_c8 = local_c8 + 1;
      }
      FUN_00b909d0(&local_38,4);
    }
    else if (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x02') {
      uVar3 = FUN_0040c770(*(undefined8 *)(local_d0 + 0x738 + lVar5 * 8));
      *(undefined4 *)local_38 = uVar3;
      if ((*(char *)(local_d0 + 0x8e0) == '\0') ||
         (PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x28] == '\x01')) {
        lVar5 = FUN_00b08760(&PTR_FUN_0142e7f8,1,local_38,local_c4);
        *(longlong *)(lVar5 + 0x68) = local_d0;
        *(code **)(lVar5 + 0x60) = FUN_011537e0;
        FUN_011526b0(auStack_108,&local_60,local_2c);
        uVar6 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (longlong)(local_2c + 1) * 8 + 0xc0)
                            );
        FUN_0043f780(&local_68,uVar6);
        local_e8 = local_68;
        local_e0 = &DAT_0115312c;
        FUN_00416cd0(&local_58,4,local_60,&DAT_01153118);
        FUN_00b0acb0(*(undefined8 *)(local_d0 + 0x6b8),local_c4,local_58,lVar5);
        (&DAT_0203031e)[local_c4 + 1] = (char)local_2c + '\x01';
        local_c8 = local_c8 + 1;
      }
      FUN_00b909d0(&local_38,4);
    }
    else if (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x03') {
      lVar5 = FUN_0040c770(*(undefined8 *)(local_d0 + 0x738 + lVar5 * 8));
      if (lVar5 == 0) {
        *local_38 = '\0';
      }
      else {
        *local_38 = '\x01';
      }
      if ((*(char *)(local_d0 + 0x8e0) == '\0') ||
         (PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x28] == '\x01')) {
        puVar7 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,local_38,local_c4);
        plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_70,0x5a8);
        (**(code **)(*plVar8 + 0x78))(plVar8,local_70);
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_78,0x5a9);
        (**(code **)(*plVar8 + 0x78))(plVar8,local_78);
        (**(code **)*puVar7)(puVar7,plVar8);
        FUN_011526b0(auStack_108,&local_88,local_2c);
        uVar3 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (longlong)(local_2c + 1) * 8 + 0xc0)
                            );
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_90,uVar3);
        local_e8 = local_90;
        local_e0 = &DAT_0115312c;
        FUN_00416cd0(&local_80,4,local_88,&DAT_01153118);
        FUN_00b0acb0(*(undefined8 *)(local_d0 + 0x6b8),local_c4,local_80,puVar7);
        (&DAT_0203031e)[local_c4 + 1] = (char)local_2c + '\x01';
        local_c8 = local_c8 + 1;
      }
      FUN_00b909d0(&local_38,1);
    }
    else if (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x04') {
      cVar2 = FUN_0040c770(*(undefined8 *)(local_d0 + 0x738 + lVar5 * 8));
      *local_38 = cVar2 + -1;
      if ((*(char *)(local_d0 + 0x8e0) == '\0') ||
         (PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x28] == '\x01')) {
        puVar7 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,local_38,local_c4);
        plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0115313c);
        (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0115314c);
        (**(code **)(*plVar8 + 0x78))(plVar8,&DAT_0115315c);
        (**(code **)*puVar7)(puVar7,plVar8);
        FUN_011526b0(auStack_108,&local_a0,local_2c);
        iVar4 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + (longlong)(local_2c + 1) * 8 + 0xc0)
                            );
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_a8,iVar4 + -1);
        local_e8 = local_a8;
        local_e0 = &DAT_0115312c;
        FUN_00416cd0(&local_98,4,local_a0,&DAT_01153118);
        FUN_00b0acb0(*(undefined8 *)(local_d0 + 0x6b8),local_c4,local_98,puVar7);
        (&DAT_0203031e)[local_c4 + 1] = (char)local_2c + '\x01';
        local_c8 = local_c8 + 1;
      }
      FUN_00b909d0(&local_38,1);
    }
    else {
      *(undefined8 *)local_38 = *(undefined8 *)(local_d0 + 0x738 + lVar5 * 8);
      if ((*(char *)(local_d0 + 0x8e0) == '\0') ||
         (PTR_DAT_02004b98[(longlong)(local_2c + 1) * 0x28 + -0x28] == '\x01')) {
        lVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_38,local_c4);
        *(longlong *)(lVar5 + 0x68) = local_d0;
        *(code **)(lVar5 + 0x60) = FUN_011537e0;
        FUN_011526b0(auStack_108,&local_b8,local_2c);
        local_e8 = CONCAT71(local_e8._1_7_,1);
        FUN_00b8fd60(&local_c0,
                     *(undefined8 *)(PTR_DAT_02001120 + (longlong)(local_2c + 1) * 8 + 0xc0),
                     *PTR_DAT_02005310,0);
        local_e8 = local_c0;
        local_e0 = &DAT_0115312c;
        FUN_00416cd0(&local_b0,4,local_b8,&DAT_01153118);
        FUN_00b0acb0(*(undefined8 *)(local_d0 + 0x6b8),local_c4,local_b0,lVar5);
        (&DAT_0203031e)[local_c4 + 1] = (char)local_2c + '\x01';
        local_c8 = local_c8 + 1;
      }
      FUN_00b909d0(&local_38,8);
    }
    local_2c = local_2c + 1;
  } while (local_2c != 0x2d);
  FUN_00848a70(*(undefined8 *)(local_d0 + 0x6b8),local_c8);
  FUN_00848a30(*(undefined8 *)(local_d0 + 0x6b8),0);
  FUN_008483b0(*(undefined8 *)(local_d0 + 0x6b8),0);
  FUN_0064de00(*(undefined8 *)(local_d0 + 0x720),*(undefined8 *)(local_d0 + 0x8d8));
  FUN_00414560(&local_c0,0x11);
  return;
}

