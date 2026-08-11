/* Ghidra address: 019c3910 */
/* Ghidra symbol: FUN_019c3910 */


undefined8
FUN_019c3910(longlong param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4,
            longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
            undefined8 *param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int local_9c;
  undefined8 local_90 [2];
  longlong local_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = (ulonglong *)0x0;
  local_68 = 0;
  local_80 = 0;
  uVar7 = *param_3;
  local_38 = *param_4;
  local_40 = *param_9;
  local_30._4_4_ = (int)(uVar7 >> 0x20);
  uVar3 = local_30._4_4_;
  local_30 = uVar7;
  cVar4 = FUN_019c33c0(param_1,uVar7 & 0xffffffff,uVar3,param_5,param_6,param_7,&local_30,&local_38,
                       param_10,param_11,1);
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
              (*(longlong **)(param_1 + 0x70),L"Start point is blocked");
  }
  cVar4 = FUN_019c33c0(param_1,local_38 & 0xffffffff,local_38._4_4_,param_5,param_6,param_7,
                       &local_30,&local_38,param_10,param_11,1);
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
              (*(longlong **)(param_1 + 0x70),L"End point is blocked");
  }
  FUN_00419260(&local_48,&DAT_019bffd0,2,(longlong)((int)local_40 + 1),
               (longlong)(local_40._4_4_ + 1));
  FUN_00419260(&local_50,&DAT_019c0048,2,(longlong)((int)local_40 + 1),
               (longlong)(local_40._4_4_ + 1));
  FUN_00419260(&local_58,&DAT_0147b748,1,1);
  *local_58 = local_30;
  *(undefined1 *)(*(longlong *)(local_48 + (longlong)(int)local_30 * 8) + (longlong)local_30._4_4_)
       = 1;
  local_9c = 0;
  while( true ) {
    uVar7 = 0;
    if (local_58 != (ulonglong *)0x0) {
      uVar7 = local_58[-1];
    }
    if ((longlong)uVar7 <= (longlong)local_9c) break;
    local_60 = local_58[local_9c];
    local_9c = local_9c + 1;
    cVar4 = FUN_00422c40(&local_60,&local_38);
    if (cVar4 != '\0') break;
    iVar11 = 4;
    piVar12 = &DAT_01fc1e30;
    piVar13 = &DAT_01fc1e40;
    do {
      iVar5 = (int)local_60 + *piVar12;
      iVar6 = local_60._4_4_ + *piVar13;
      if ((((-1 < iVar5) && (-1 < iVar6)) && (iVar5 <= (int)local_40)) &&
         (((iVar6 <= local_40._4_4_ &&
           (*(char *)(*(longlong *)(local_48 + (longlong)iVar5 * 8) + (longlong)iVar6) == '\0')) &&
          (cVar4 = FUN_019c33c0(param_1,iVar5,iVar6,param_5,param_6,param_7,&local_30,&local_38,
                                param_10,param_11,0), cVar4 == '\0')))) {
        *(undefined1 *)(*(longlong *)(local_48 + (longlong)iVar5 * 8) + (longlong)iVar6) = 1;
        *(ulonglong *)(*(longlong *)(local_50 + (longlong)iVar5 * 8) + (longlong)iVar6 * 8) =
             local_60;
        uVar7 = 0;
        if (local_58 != (ulonglong *)0x0) {
          uVar7 = local_58[-1];
        }
        FUN_00419260(&local_58,&DAT_0147b748,1,uVar7 + 1);
        uVar7 = 0;
        if (local_58 != (ulonglong *)0x0) {
          uVar7 = local_58[-1];
        }
        uVar8 = FUN_00498310(iVar5,iVar6);
        local_58[uVar7 - 1] = uVar8;
      }
      piVar13 = piVar13 + 1;
      piVar12 = piVar12 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (*(char *)(*(longlong *)(local_48 + (longlong)(int)local_38 * 8) + (longlong)local_38._4_4_) ==
      '\0') {
    if ((*(char *)(param_1 + 0x30) != '\0') && (*(longlong *)(param_1 + 0x70) != 0)) {
      iVar11 = 0;
      if (local_58 != (ulonglong *)0x0) {
        iVar11 = (int)local_58[-1];
      }
      local_9c = 0;
      if (iVar11 - 1U < 0x80000000) {
        do {
          uVar7 = local_58[local_9c];
          local_60._0_4_ = (int)uVar7;
          iVar1 = (int)local_60 * 8;
          local_60._4_4_ = (int)(uVar7 >> 0x20);
          iVar2 = local_60._4_4_ * 8;
          iVar5 = (int)local_60 * 8;
          iVar6 = local_60._4_4_ * 8;
          local_60 = uVar7;
          FUN_00498350(local_78,iVar1,iVar2,iVar5 + 8,iVar6 + 8);
          lVar9 = 0;
          if (param_5 != 0) {
            lVar9 = *(longlong *)(param_5 + -8);
          }
          lVar10 = 0;
          if (param_8 != 0) {
            lVar10 = *(longlong *)(param_8 + -8);
          }
          FUN_019c1860(&local_80,local_78,param_5,lVar9 + -1,param_8,lVar10 + -1);
          if (local_80 != 0) {
            FUN_00416ba0(local_90,L"  failed by ",local_80);
            (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                      (*(longlong **)(param_1 + 0x70),local_90[0]);
            break;
          }
          local_9c = local_9c + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (local_80 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                  (*(longlong **)(param_1 + 0x70),L"  failed");
      }
    }
    FUN_00419430(param_2,&DAT_0147b748);
  }
  else {
    local_60 = local_38;
    while (cVar4 = FUN_00422c60(&local_60,&local_30), cVar4 != '\0') {
      lVar9 = 0;
      if (local_68 != 0) {
        lVar9 = *(longlong *)(local_68 + -8);
      }
      FUN_00419260(&local_68,&DAT_0147b748,1,lVar9 + 1);
      lVar9 = 0;
      if (local_68 != 0) {
        lVar9 = *(longlong *)(local_68 + -8);
      }
      *(ulonglong *)(local_68 + (lVar9 + -1) * 8) = local_60;
      local_60 = *(ulonglong *)
                  (*(longlong *)(local_50 + (longlong)(int)local_60 * 8) +
                  (longlong)local_60._4_4_ * 8);
    }
    lVar9 = 0;
    if (local_68 != 0) {
      lVar9 = *(longlong *)(local_68 + -8);
    }
    FUN_00419260(&local_68,&DAT_0147b748,1,lVar9 + 1);
    lVar9 = 0;
    if (local_68 != 0) {
      lVar9 = *(longlong *)(local_68 + -8);
    }
    *(ulonglong *)(local_68 + (lVar9 + -1) * 8) = local_30;
    lVar9 = 0;
    if (local_68 != 0) {
      lVar9 = *(longlong *)(local_68 + -8);
    }
    iVar11 = (int)(lVar9 / 2);
    local_9c = 0;
    if (-1 < iVar11 + -1) {
      do {
        local_60 = *(ulonglong *)(local_68 + (longlong)local_9c * 8);
        lVar9 = 0;
        if (local_68 != 0) {
          lVar9 = *(longlong *)(local_68 + -8);
        }
        *(undefined8 *)(local_68 + (longlong)local_9c * 8) =
             *(undefined8 *)(local_68 + ((lVar9 + -1) - (longlong)local_9c) * 8);
        lVar9 = 0;
        if (local_68 != 0) {
          lVar9 = *(longlong *)(local_68 + -8);
        }
        *(ulonglong *)(local_68 + ((lVar9 + -1) - (longlong)local_9c) * 8) = local_60;
        local_9c = local_9c + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_004194b0(param_2,local_68,&DAT_0147b748);
  }
  FUN_00414480(local_90);
  FUN_00414480(&local_80);
  FUN_00419430(&local_68,&DAT_0147b748);
  FUN_00419430(&local_58,&DAT_0147b748);
  FUN_00419430(&local_50,&DAT_019c0048);
  FUN_00419430(&local_48,&DAT_019bffd0);
  return param_2;
}

