/* Ghidra address: 01c681b0 */
/* Ghidra symbol: FUN_01c681b0 */


void FUN_01c681b0(longlong param_1,longlong *param_2,char param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,char param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  double dVar9;
  longlong *local_res10;
  char local_res18;
  int local_res20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5e [2];
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  char local_42;
  longlong local_40;
  longlong local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_90 = auStack_108;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_01c87d20(param_1);
  FUN_010e33a0();
  iVar4 = FUN_004170c0(&DAT_01c69138,local_res10,1);
  if (iVar4 == 1) {
    FUN_00416e20(&local_res10,1,1);
  }
  local_50 = FUN_01c98770(param_1,local_res10);
  if (local_50 != 0) {
    FUN_01c8ab30(param_1,0,local_50);
    if (local_res18 != '\0') goto LAB_01c69074;
    cVar3 = FUN_01c93f00(param_1,local_50,1,1);
    if (cVar3 == '\0') goto LAB_01c69074;
  }
  *(undefined1 *)(param_1 + 0x182a) = 0;
  *(undefined1 *)(param_1 + 0x182b) = 0;
  local_20 = (longlong *)0x0;
  local_28 = (undefined8 *)0x0;
  FUN_00417c40(param_1 + 0x1b80,PTR_DAT_02004010,&DAT_01d0d0b8);
  local_5c = *(undefined4 *)(param_1 + 0x1924);
  local_58 = FUN_01c8a330(param_1,*(undefined8 *)(param_1 + 0x27a8));
  if (*(longlong *)(param_1 + 0x2788) != 0) {
    lVar6 = FUN_01c8a3c0(param_1,*(longlong *)(param_1 + 0x2788));
    if (lVar6 != 0) {
      if (((*(longlong *)(param_1 + 0x2768) != 0) &&
          (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x02')) &&
         (*(longlong *)PTR_DAT_020057d0 != 0)) {
        uVar5 = FUN_01c681a0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
        *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x98) = uVar5;
        uVar5 = FUN_00c08890(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
        *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x9c) = uVar5;
        uVar5 = FUN_00c0faf0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
        lVar6 = *(longlong *)(param_1 + 0x2768);
        *(undefined4 *)(lVar6 + 0xa0) = uVar5;
        if (*(char *)(lVar6 + 0x115) == '\0') {
          plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_98);
          (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x60))(*(longlong **)(lVar6 + 0xb0),local_98)
          ;
          if ((*(char *)(*(longlong *)(param_1 + 0x2768) + 0x111) != '\0') &&
             (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x5e0) != '\0')) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x2768) + 0x111) = 0;
          }
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x2768);
      if (((lVar6 != 0) && (*(char *)(lVar6 + 0x70) == '\x03')) &&
         (*(longlong *)PTR_DAT_02005100 != 0)) {
        (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x10))
                  (*(longlong **)(lVar6 + 0xb0),
                   *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
      }
      lVar6 = *(longlong *)(param_1 + 0x2768);
      if (((lVar6 != 0) && (*(char *)(lVar6 + 0x70) == '\x04')) &&
         (*(longlong *)PTR_DAT_02005100 != 0)) {
        (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x10))
                  (*(longlong **)(lVar6 + 0xb0),
                   *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
      }
      local_80 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
      cVar3 = FUN_01d0fb00(local_80 + 0x40,PTR_DAT_02004010);
      if (cVar3 == '\0') {
        FUN_0199e310(*(undefined8 *)(local_80 + 0x10),0,1,1);
      }
      FUN_00417c40(local_80 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
      if (local_58 != 0) {
        local_88 = local_58;
        *(undefined4 *)(local_58 + 0x97c) = *(undefined4 *)(param_1 + 0x1b60);
        *(undefined4 *)(local_58 + 0x980) = *(undefined4 *)(param_1 + 0x1b64);
        *(undefined4 *)(local_58 + 0x984) = *(undefined4 *)(param_1 + 0x1924);
        *(undefined *)(local_58 + 0x988) = *PTR_DAT_02001e78;
      }
    }
  }
  FUN_01d0e500();
  dVar9 = (double)FUN_01ca52b0(param_1);
  *(float *)(param_1 + 0x1924) = (float)dVar9;
  uVar7 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
  local_30 = FUN_014a7fd0(local_res10,uVar7);
  if (local_30 == 0) {
    *PTR_DAT_02002ce0 = 0;
    local_28 = (undefined8 *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
    local_40 = FUN_017708f0(local_res10);
    if (local_40 != 0) {
      local_20 = (longlong *)(**(code **)(local_40 + 0x20))(local_40,1,local_28);
      *(char *)(local_28 + 0x34) = (char)local_20[0xe];
      local_28[0x35] = local_20;
      (**(code **)(*local_20 + 0x28))(local_20,local_res10,0,*(undefined8 *)(param_1 + 0x27a8));
    }
    if (*PTR_DAT_02002ce0 != '\0') {
      if (local_20 != (longlong *)0x0) {
        FUN_00410f20(local_20);
      }
      local_20 = (longlong *)0x0;
      if (local_28 != (undefined8 *)0x0) {
        uVar7 = (**(code **)*local_28)(local_28);
        FUN_00418590(uVar7,&DAT_01cf1390);
      }
      local_28 = (undefined8 *)0x0;
    }
    if ((local_20 != (longlong *)0x0) && (local_28 != (undefined8 *)0x0)) {
      if (*(char *)(local_28 + 0x34) == '\x01') {
        if ((char)local_20[0x16] == '\0') {
          local_30 = local_20[1];
        }
        else {
          local_30 = 0;
        }
      }
      else if ((*(char *)(local_28 + 0x34) == '\x03') || (*(char *)(local_28 + 0x34) == '\x04')) {
        uVar7 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        local_30 = FUN_0198b200(0,&PTR_FUN_01984d18,0,uVar7);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(longlong *)PTR_DAT_02005100 == 0) {
          uVar7 = FUN_01aebb40(&PTR_FUN_0149f0b8,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_02005100 = uVar7;
          FUN_008059a0(*(undefined8 *)PTR_DAT_02005100);
          uVar7 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
          thunk_FUN_041b2403(uVar7,0x435,0,0x7fffffff);
        }
        else {
          cVar3 = (**(code **)(**(longlong **)PTR_DAT_02005100 + 0xf8))
                            (*(longlong **)PTR_DAT_02005100);
          if (cVar3 == '\0') {
            FUN_007fdf50(*(undefined8 *)PTR_DAT_02005100,1);
            FUN_0064e1d0(*(undefined8 *)PTR_DAT_02005100);
            uVar7 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
            thunk_FUN_041b2403(uVar7,0x435,0,0x7fffffff);
          }
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(char *)(local_28 + 0x34) == '\x03') {
          FUN_014a0a80(*(undefined8 *)PTR_DAT_02005100,local_20);
        }
        else {
          FUN_014a0ec0(*(undefined8 *)PTR_DAT_02005100,local_20);
        }
        FUN_014a0260(*(undefined8 *)PTR_DAT_02005100,1);
        FUN_00c0dad0(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740),0);
      }
      else {
        uVar7 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        local_30 = FUN_0198b200(0,&PTR_FUN_01984d18,0,uVar7);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        if (*(longlong *)PTR_DAT_020057d0 == 0) {
          uVar7 = FUN_01aebb40(&PTR_FUN_014b21c0,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_020057d0 = uVar7;
        }
        else {
          cVar3 = (**(code **)(**(longlong **)PTR_DAT_020057d0 + 0xf8))
                            (*(longlong **)PTR_DAT_020057d0);
          if (cVar3 == '\0') {
            FUN_007fdf50(*(undefined8 *)PTR_DAT_020057d0,1);
            FUN_0064e1d0(*(undefined8 *)PTR_DAT_020057d0);
          }
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        FUN_014b49f0(*(undefined8 *)PTR_DAT_020057d0,1);
        FUN_014b4700(*(undefined8 *)PTR_DAT_020057d0,local_20[9]);
        plVar1 = local_20;
        if (*(char *)((longlong)local_20 + 0x115) == '\0') {
          (**(code **)(*(longlong *)local_20[0x16] + 0x38))((longlong *)local_20[0x16],&local_a0);
          plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
          (**(code **)(*plVar2 + 0x60))(plVar2,local_a0);
        }
        else {
          local_68 = FUN_01770db0(local_20[0x16],1,1);
          plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
          (**(code **)(*plVar2 + 0x10))(plVar2,local_68);
          FUN_00410f20(local_68);
        }
        FUN_00c0dad0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860),0);
        FUN_00414ad0(*(longlong *)PTR_DAT_020057d0 + 0x878,plVar1[0x1f]);
      }
    }
  }
  if (local_30 == 0) {
    if (((local_20 == (longlong *)0x0) || ((char)local_20[0xe] != '\x01')) ||
       ((char)local_20[0x16] == '\0')) {
      if (local_res20 == 1) {
        local_e8 = 0;
        FUN_012cec90(2,local_res10,param_5,param_6);
      }
      else if (local_res20 == 2) {
        local_e8 = 0;
        FUN_01309160(2,local_res10,param_5,param_6);
      }
      else {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_c0,0x593);
        local_d0 = local_res10;
        local_c8 = 0x11;
        FUN_00442f70(&local_b8,local_c0,&local_d0,0);
        FUN_016fd940(local_b8);
      }
    }
    else {
      FUN_0072d440(L"Encrypted macro. Content can\'t be viewed.",2,4,0);
    }
    FUN_00417c40(PTR_DAT_02004010,param_1 + 0x1b80,&DAT_01d0d0b8);
    *(undefined4 *)(param_1 + 0x1924) = local_5c;
    *PTR_DAT_02002ce0 = 1;
  }
  else {
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_01c94500(param_1,0);
    }
    if (*PTR_DAT_020023b0 != '\0') {
      FUN_01c94060(param_1,0,local_5e,0);
    }
    local_42 = '\0';
    if (*(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) == 1) {
      lVar6 = FUN_01c8a3c0(param_1,0);
      if (lVar6 != 0) {
        FUN_0043e130(&local_a8,*(undefined8 *)PTR_DAT_02004ec0);
        puVar8 = (undefined8 *)FUN_01c8a3c0(param_1,0);
        FUN_0043e130(&local_b0,*puVar8);
        iVar4 = FUN_004170c0(local_a8,local_b0,1);
        if (iVar4 != 0) {
          lVar6 = FUN_01c8a3c0(param_1,0);
          cVar3 = FUN_01c8cf20(param_1,*(undefined8 *)(lVar6 + 0x10));
          if (cVar3 == '\0') {
            local_42 = '\x01';
          }
        }
      }
    }
    if (local_42 != '\0') {
      FUN_01c94060(param_1,0,local_5e,0);
    }
    *(longlong *)(param_1 + 0x27a8) = local_30;
    *(longlong *)(param_1 + 0x2788) = local_30;
    FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,0,0);
    *(undefined8 *)(param_1 + 0x2768) = 0;
    *(undefined8 *)(param_1 + 0x2770) = 0;
    if (local_20 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x2768) = local_20;
      *(undefined8 **)(param_1 + 0x2770) = local_28;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x27a8) + 0x98) =
         *(undefined1 *)(*(longlong *)(param_1 + 0xca8) + 0x80);
    FUN_014a1260(local_res10,0);
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),0);
    FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),0);
    (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
    FUN_01c7d780(param_1,0);
    FUN_01c8ab30(param_1,0,0);
    lVar6 = *(longlong *)(param_1 + 0x27a8);
    if ((0.0 < *(double *)(lVar6 + 0xe8)) && (*PTR_DAT_020052b8 != '\0')) {
      FUN_01c67df0(param_1,(int)*(short *)(lVar6 + 0xe0) -
                           *(int *)(*(longlong *)(param_1 + 0xa10) + 0x98) / 2,
                   (int)*(short *)(lVar6 + 0xe2) -
                   *(int *)(*(longlong *)(param_1 + 0xa10) + 0x9c) / 2,0);
    }
    if (local_res20 == 0) {
      FUN_01c90c50(param_1,local_res10);
      FUN_01c920f0(param_1,local_res10);
    }
  }
  FUN_01c779c0(param_1,0);
  if (param_7 != '\0') {
    FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  }
LAB_01c69074:
  FUN_00414560(&local_c0,6);
  FUN_00414480(&local_70);
  FUN_00414480(&local_res10);
  FUN_00414560(&param_5,2);
  return;
}

