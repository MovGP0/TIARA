/* Ghidra address: 0138aff0 */
/* Ghidra symbol: FUN_0138aff0 */


void FUN_0138aff0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  int local_90;
  undefined1 local_8c [12];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [14];
  char local_2a [26];
  
  local_c0 = auStack_108;
  if (((*(char *)((longlong)param_1 + 0x7ed) == '\0') ||
      (puVar2 = auStack_108, (char)param_1[0x107] != '\0')) &&
     (puVar2 = auStack_108, *(char *)((longlong)param_1 + 0xe81) != '\0')) {
    cVar3 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
    if (cVar3 == '\0') {
      return;
    }
    cVar3 = FUN_010e2d90(param_1);
    if ((cVar3 == '\0') ||
       ((*(char *)((longlong)param_1 + 0x7ed) != '\0' && ((char)param_1[0x107] != '\0')))) {
      uVar6 = FUN_0065b870(param_1);
      FUN_00f83670(uVar6,param_2);
      return;
    }
    *(undefined1 *)(param_1 + 0x107) = 0;
    FUN_0082a6c0(param_1[0xf7],1);
    plVar1 = (longlong *)param_1[0x17e];
    if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
      (**(code **)(*plVar1 + 600))(plVar1);
    }
    uVar4 = FUN_00f04d50(param_1[0x187]);
    *(undefined4 *)(param_1 + 0x1ce) = uVar4;
    lVar7 = FUN_00b90090(param_1[0x186]);
    param_1[0x1cb] = lVar7;
    lVar7 = FUN_00b90090(param_1[0x185]);
    param_1[0x1ca] = lVar7;
    *(undefined1 *)((longlong)param_1 + 0xe45) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
    *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
    (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],0);
    (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],0);
    FUN_010f7d70(param_1);
    local_94 = '\0';
    local_2a[0] = -1;
    cVar3 = FUN_010e1a60(param_1);
    if ((cVar3 != '\0') &&
       ((((*(char *)((longlong)param_1 + 0x7fa) == '\x04' &&
          (cVar3 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
          cVar3 == '\0')) ||
         ((*(char *)((longlong)param_1 + 0x7fa) == '\x04' &&
          (iVar5 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
          iVar5 == 5)))) || (*(char *)((longlong)param_1 + 0x7fa) == '\b')))) {
      uVar6 = FUN_010e1b10(param_1);
      local_a0 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01133e90);
      FUN_0113d290(local_a0,*(undefined1 *)((longlong)param_1 + 0x7fa));
      local_94 = FUN_01136fa0(local_a0);
      (**(code **)(*local_a0 + 0x480))(local_a0);
      local_e8 = (longlong *)local_48;
      local_e0 = (undefined8 *)local_50;
      FUN_01138af0(local_a0,local_2a,local_38,local_40);
      local_60[0] = 0;
      local_e8 = (longlong *)local_48;
      local_e0 = local_60;
      FUN_01138b30(local_a0,1,local_38,local_40);
      local_e8 = (longlong *)local_8c;
      local_e0 = (undefined8 *)&local_91;
      local_d8 = &local_92;
      local_d0 = &local_93;
      FUN_01138d40(local_a0,local_70,local_78,local_80);
      local_e8 = param_1 + 0x1ce;
      local_e0 = (undefined8 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,*(undefined1 *)((longlong)param_1 + 0xe74));
      local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,1);
      FUN_01138e40(local_a0,param_1 + 0x1ca,param_1 + 0x1cb,local_80);
      FUN_010e4300(param_1,7,1000,0);
      local_8c._4_8_ = FUN_00b921a0(param_1[0x11c]);
      if (((double)param_1[0x11c] <= 0.0 && (double)param_1[0x11c] != 0.0) ||
         (600.0 < (double)local_8c._4_8_)) {
        (**(code **)(*(longlong *)param_1[0x1d1] + 0x1a0))((longlong *)param_1[0x1d1]);
        lVar7 = FUN_00b921a0(0);
        param_1[0x11c] = lVar7;
      }
      FUN_010e4410(param_1,param_1);
      FUN_00f835c0(1000);
      uVar6 = FUN_010e1b10(param_1);
      local_a8 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01133e90);
      uVar6 = FUN_0065b870(param_1);
      FUN_01139080(local_a8,uVar6,0x52f);
      (**(code **)(*local_a8 + 0x488))(local_a8);
    }
    cVar3 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x178))((longlong *)param_1[0x1d1]);
    if (cVar3 != '\0') {
      if ((*(char *)((longlong)param_1 + 0x7fa) == '\x0f') ||
         (((*(char *)((longlong)param_1 + 0x7fa) == '\x04' &&
           (cVar3 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
           cVar3 != '\0')) &&
          (iVar5 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
          iVar5 != 5)))) {
        FUN_010f6a20(param_1,1,1);
        FUN_010e4410(param_1,param_1);
        do {
          do {
            FUN_010e4300(param_1,8,1000,0);
            local_90 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x188))
                                 ((longlong *)param_1[0x1d1],param_1 + 0x110);
            FUN_010e4410(param_1,param_1);
            FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          } while (local_90 == 1);
          if (local_90 == 0) {
            if (*(char *)(param_1[0x17a] + 0x328) != '\0') {
              local_e8 = (longlong *)CONCAT71(local_e8._1_7_,1);
              (**(code **)(*(longlong *)param_1[0x1d1] + 0x80))
                        ((longlong *)param_1[0x1d1],param_1[0x10e] + 0x2a,&local_68);
              FUN_00b90440(param_1[0x197],local_68);
            }
            FUN_010f67e0(param_1,1,1);
            *(undefined1 *)((longlong)param_1 + 0xe45) = 0;
          }
          if (local_90 == -1) {
            uVar6 = FUN_0044d490(&PTR_FUN_01384358,1,L"Signal Analyzer: Read Data Failed!");
            FUN_004134c0(uVar6);
          }
          cVar3 = FUN_010e2b90(param_1);
        } while (((cVar3 == '\0') && (local_90 != -1)) &&
                (iVar5 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xb8))
                                   ((longlong *)param_1[0x1d1]), iVar5 != 0));
      }
      else {
        FUN_010e8e30(param_1[0x136],1);
      }
    }
    FUN_0082a6c0(param_1[0xf8],1);
    (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
    *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
    (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],1);
    (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],1);
    cVar3 = FUN_010e1a60(param_1);
    if (((cVar3 != '\0') && (local_2a[0] != -1)) &&
       ((*(char *)((longlong)param_1 + 0x7fa) == '\b' ||
        ((*(char *)((longlong)param_1 + 0x7fa) == '\x04' &&
         ((cVar3 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
          cVar3 == '\0' ||
          (iVar5 = (**(code **)(*(longlong *)param_1[0x17e] + 0x260))((longlong *)param_1[0x17e]),
          iVar5 == 5)))))))) {
      uVar6 = FUN_010e1b10(param_1);
      local_b0 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01133e90);
      (**(code **)(*local_b0 + 0x480))(local_b0);
      local_e8 = (longlong *)local_48;
      local_e0 = (undefined8 *)local_50;
      FUN_01138b30(local_b0,local_2a[0],local_38,local_40);
      local_e8 = (longlong *)local_8c;
      local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,local_91);
      local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,local_92);
      local_d0 = (undefined1 *)CONCAT71(local_d0._1_7_,local_93);
      FUN_01138e40(local_b0,local_70,local_78,local_80);
      if (local_94 != '\0') {
        (**(code **)(*local_b0 + 0x488))(local_b0);
      }
    }
    puVar2 = local_c0;
    if (*(char *)((longlong)param_1 + 0x8d1) != '\0') {
      FUN_00805200(param_1);
      puVar2 = local_c0;
    }
  }
  local_c0 = puVar2;
  if (*(char *)((longlong)param_1 + 0xe81) == '\0') {
    FUN_0082a6c0(param_1[0xf8],1);
  }
  FUN_010e4410(param_1,param_1);
  return;
}

