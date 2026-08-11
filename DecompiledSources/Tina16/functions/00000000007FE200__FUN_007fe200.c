/* Ghidra address: 007fe200 */
/* Ghidra symbol: FUN_007fe200 */


void FUN_007fe200(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined7 uVar7;
  bool bVar8;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  int *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  char local_61;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_2c;
  int *local_28;
  undefined8 local_20;
  
  local_90 = auStack_b8;
  iVar3 = *param_2;
  if (iVar3 < 0x31e) {
    if (iVar3 < 0x2d) {
      if (iVar3 == 0x2c) {
        local_88 = *(int **)(param_2 + 4);
        local_90 = auStack_b8;
        if ((*local_88 == 1) && (local_90 = auStack_b8, param_1[0xa0] != 0)) {
          local_90 = auStack_b8;
          local_48 = (longlong *)FUN_007e5b00(param_1[0xa0],local_88[2],0);
          if (local_48 != (longlong *)0x0) {
            uVar5 = FUN_0065b870(param_1);
            local_38 = thunk_FUN_0411fe47(uVar5);
            local_20 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
            local_2c = thunk_FUN_03b57162(local_38);
            FUN_005ffb10(local_20,local_38);
            FUN_005ff880(local_20,*(undefined8 *)(DAT_02012670 + 0x110));
            (**(code **)(*local_48 + 0x98))(local_48,local_20,local_88 + 3,local_88 + 4);
            FUN_005ffb10(local_20,0);
            thunk_FUN_0402759f(local_38,local_2c);
            FUN_00410f20(local_20);
            uVar5 = FUN_0065b870(param_1);
            thunk_FUN_041a9b5c(uVar5,local_38);
            return;
          }
        }
        goto LAB_007feaaf;
      }
      if (iVar3 - 6U < 3) {
        if (DAT_01e13fb8 == '\0') {
          return;
        }
        local_90 = auStack_b8;
        if ((*param_2 == 7) &&
           (local_90 = auStack_b8, (*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
          local_40 = 0;
          if (*(char *)((longlong)param_1 + 0x4d6) == '\x02') {
            local_90 = auStack_b8;
            lVar4 = FUN_007ff990(param_1);
            if (lVar4 != 0) {
              uVar5 = FUN_007ff990(param_1);
              local_40 = FUN_0065b870(uVar5);
            }
          }
          else {
            plVar1 = (longlong *)param_1[0x98];
            local_90 = auStack_b8;
            if ((plVar1 != (longlong *)0x0) && (local_90 = auStack_b8, plVar1 != param_1)) {
              local_90 = auStack_b8;
              local_40 = FUN_0065b870(plVar1);
            }
          }
          if (local_40 != 0) {
            thunk_FUN_03c244fb(local_40);
            return;
          }
        }
        goto LAB_007feaaf;
      }
      if (iVar3 == 0x2b) {
        local_28 = *(int **)(param_2 + 4);
        local_90 = auStack_b8;
        if (((*local_28 == 1) && (local_90 = auStack_b8, param_1[0xa0] != 0)) &&
           (local_90 = auStack_b8, cVar2 = FUN_00648630(*(undefined8 *)(local_28 + 6)),
           cVar2 == '\0')) {
          local_48 = (longlong *)FUN_007e5b00(param_1[0xa0],local_28[2],0);
          if (local_48 != (longlong *)0x0) {
            local_20 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
            local_2c = thunk_FUN_03b57162(*(undefined8 *)(local_28 + 8));
            FUN_005ffb10(local_20,*(undefined8 *)(local_28 + 8));
            FUN_005ff880(local_20,*(undefined8 *)(DAT_02012670 + 0x110));
            FUN_007e8c00(local_48,local_20,local_28 + 10,(short)local_28[4]);
            FUN_005ffb10(local_20,0);
            thunk_FUN_0402759f(*(undefined8 *)(local_28 + 8),local_2c);
            FUN_00410f20(local_20);
            return;
          }
        }
        goto LAB_007feaaf;
      }
    }
    else {
      if (iVar3 == 0x46) {
        local_90 = auStack_b8;
        if ((*(ushort *)((longlong)param_1 + 0x34) & 0x11) == 1) {
          local_70 = *(longlong *)(param_2 + 4);
          uVar7 = (undefined7)((ulonglong)param_1 >> 8);
          if (*(byte *)((longlong)param_1 + 0x4d7) < 8) {
            bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)((longlong)param_1 + 0x4d7) & 0x1f) & 6U)
                    != 0;
          }
          else {
            bVar8 = false;
          }
          if ((bVar8) && (*(char *)((longlong)param_1 + 0x4d2) != '\x02')) {
            *(uint *)(local_70 + 0x20) = *(uint *)(local_70 + 0x20) | 2;
            local_78 = local_70;
          }
          if (*(byte *)((longlong)param_1 + 0x4d7) < 8) {
            bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)((longlong)param_1 + 0x4d7) & 0x1f) & 10U)
                    != 0;
          }
          else {
            bVar8 = false;
          }
          local_90 = auStack_b8;
          if (bVar8) {
            if (*(byte *)((longlong)param_1 + 0x4d1) < 8) {
              bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)((longlong)param_1 + 0x4d1) & 0x1f) &
                      0x24U) != 0;
            }
            else {
              bVar8 = false;
            }
            local_90 = auStack_b8;
            if (bVar8) {
              *(uint *)(local_70 + 0x20) = *(uint *)(local_70 + 0x20) | 1;
              local_90 = auStack_b8;
              local_80 = local_70;
            }
          }
        }
        goto LAB_007feaaf;
      }
      if (iVar3 == 0x112) {
        if ((((*(ulonglong *)(param_2 + 2) & 0xfff0) == 0xf120) ||
            ((local_90 = auStack_b8, (*(ulonglong *)(param_2 + 2) & 0xfff0) == 0xf030 &&
             (local_90 = auStack_b8, *(char *)(DAT_02012668 + 0x78) != '\0')))) &&
           ((local_90 = auStack_b8, param_1 == *(longlong **)(DAT_02012668 + 0xa8) &&
            (local_90 = auStack_b8, *(char *)(DAT_02012668 + 0x193) != '\0')))) {
          local_90 = auStack_b8;
          uVar5 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
          iVar3 = thunk_FUN_03d44949(uVar5);
          local_61 = iVar3 != 0;
          FUN_00656570(param_1,param_2);
          if (local_61 == '\0') {
            return;
          }
          FUN_0080f7c0(DAT_02012668);
          return;
        }
        goto LAB_007feaaf;
      }
    }
  }
  else if (iVar3 < 0xb01c) {
    if (iVar3 == 0xb01b) {
      local_90 = auStack_b8;
      if (param_1[0x21] != 0) {
        local_90 = auStack_b8;
        pcVar6 = (code *)FUN_00411550(param_1,0xffaa);
        (*pcVar6)(param_1);
      }
      goto LAB_007feaaf;
    }
    if (iVar3 - 0x31eU < 2) {
      local_90 = auStack_b8;
      FUN_00806bc0(param_1,0);
      goto LAB_007feaaf;
    }
    if (iVar3 == 0xb01a) {
      local_90 = auStack_b8;
      if (param_1[0x21] != 0) {
        local_90 = auStack_b8;
        pcVar6 = (code *)FUN_00411550(param_1,0xffac);
        (*pcVar6)(param_1);
      }
      goto LAB_007feaaf;
    }
  }
  else {
    if (iVar3 == 0xb047) {
      local_58 = *(longlong *)(param_2 + 2);
      local_50 = 0;
      local_90 = auStack_b8;
      while ((local_58 != 0 && (local_50 == 0))) {
        local_50 = FUN_006485b0(local_58);
        local_58 = thunk_FUN_03de17fb(local_58);
      }
      if (((local_50 != 0) &&
          (((local_60 = (longlong *)FUN_007f9b70(local_50,1), param_1[0x98] != local_50 ||
            (local_50 != *(longlong *)(DAT_02012670 + 200))) && (local_60 != (longlong *)0x0)))) &&
         ((local_60 == param_1 || (local_60 != *(longlong **)(DAT_02012670 + 0xd0))))) {
        lVar4 = local_60[0x98];
        if ((lVar4 != 0) && (lVar4 != local_50)) {
          FUN_0064fca0(lVar4,8,0,0);
        }
        (**(code **)(*local_60 + 0x2c8))(local_60,local_50);
      }
      goto LAB_007feaaf;
    }
    if (iVar3 == 0xb059) {
      local_50 = param_1[0x98];
      FUN_0064fca0(param_1,0xb,0,0);
      FUN_0064fca0(param_1,0xb033,0,0);
      *param_2 = 0xb051;
      FUN_00654c30(param_1,param_2);
      if (local_50 != 0) {
        FUN_00801e40(param_1,local_50);
      }
      goto LAB_007feaaf;
    }
  }
  if (iVar3 == DAT_0201268c) {
    local_90 = auStack_b8;
    FUN_0064fca0(param_1,0xb025,0,0);
    FUN_0064fca0(param_1,0xb024,0,0);
    FUN_0064fca0(param_1,0xb035,0,0);
    FUN_0064fca0(param_1,0xb009,0,0);
    FUN_0064fca0(param_1,0xb008,0,0);
    FUN_0064fca0(param_1,0xb03d,0,0);
    FUN_0064fca0(param_1,0xb050,0,0);
  }
  else {
    local_90 = auStack_b8;
    if ((iVar3 == DAT_02012690) &&
       (plVar1 = (longlong *)param_1[0x97], local_90 = auStack_b8, plVar1 != (longlong *)0x0)) {
      local_90 = auStack_b8;
      (**(code **)(*plVar1 + 0xa8))(plVar1);
      (**(code **)(*(longlong *)param_1[0x97] + 0xa0))((longlong *)param_1[0x97]);
    }
  }
LAB_007feaaf:
  FUN_00656570(param_1,param_2);
  return;
}

