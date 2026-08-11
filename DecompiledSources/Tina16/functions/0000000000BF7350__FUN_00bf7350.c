/* Ghidra address: 00bf7350 */
/* Ghidra symbol: FUN_00bf7350 */


void FUN_00bf7350(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  longlong local_res10 [3];
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(&local_40,local_res10[0]);
  cVar12 = '\0';
  for (iVar11 = param_6 - param_4; (param_5 - param_4) + -1 < iVar11; iVar11 = iVar11 + -1) {
    iVar13 = 0;
    if (local_res10[0] != 0) {
      iVar13 = *(int *)(local_res10[0] + -4);
    }
    if (iVar11 <= iVar13) {
      if ((*(char *)(*(longlong *)(param_1 + 0x130) + 0x7e0) == '\0') ||
         (*(short *)(local_res10[0] + -2 + (longlong)iVar11 * 2) != 0x20)) {
        if (*(short *)(local_res10[0] + -2 + (longlong)iVar11 * 2) == 9) {
          lVar10 = FUN_00414de0(local_res10);
          *(undefined2 *)(lVar10 + -2 + (longlong)iVar11 * 2) = 0x20;
          cVar12 = *(char *)(*(longlong *)(param_1 + 0x130) + 0x7e0);
        }
      }
      else {
        lVar10 = FUN_00414de0(local_res10);
        *(undefined2 *)(lVar10 + -2 + (longlong)iVar11 * 2) = 0x2219;
      }
    }
  }
  if ((param_5 <= param_6) && (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x9c))) {
    iVar11 = FUN_00bf7320(param_1,param_5);
    param_5 = param_5 - param_4;
    if (param_3 < param_5) {
      local_34 = 0;
      FUN_00414480(local_30);
    }
    else {
      iVar7 = 0;
      iVar13 = param_5;
      while (*(short *)(local_res10[0] + -2 + (longlong)iVar13 * 2) == -0x2000) {
        iVar7 = iVar7 + 1;
        iVar13 = iVar13 + 1;
      }
      uVar6 = FUN_00bd4cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x620),
                           *(undefined2 *)(local_res10[0] + -2 + (longlong)iVar13 * 2));
      uVar5 = FUN_00bf1610(uVar6,*(undefined2 *)(*(longlong *)(param_1 + 0x130) + 0x4d4));
      iVar11 = iVar11 - *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4) *
                        (((uint)uVar5 - iVar7) + -1);
      local_34 = ((param_6 - param_4) - param_5) + 1;
      iVar13 = (param_3 - param_5) + 1;
      if (iVar13 <= local_34) {
        local_34 = iVar13;
      }
      cVar4 = FUN_00c10e70(*(undefined8 *)(param_1 + 0x130));
      if (cVar4 != '\0') {
LAB_00bf75a8:
        iVar13 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x130));
        if (iVar13 < iVar11 + *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4) * local_34) {
          do {
            local_34 = local_34 + -1;
            if (local_34 < 1) break;
          } while (*(short *)(local_res10[0] + -2 + (longlong)(param_5 + local_34 + -1) * 2) ==
                   -0x2000);
          goto LAB_00bf75a8;
        }
      }
      FUN_00bf6ea0(*(undefined8 *)(param_1 + 0x130),local_30,local_res10[0],param_5,&local_34);
    }
    uVar9 = FUN_00416740(local_30[0]);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
    (**(code **)(*plVar2 + 0x48))
              (plVar2,iVar11,*(undefined4 *)(param_1 + 0x98),3,param_1 + 0x94,uVar9,local_34);
    if (cVar12 != '\0') {
      iVar13 = param_5 + -1;
      iVar11 = 1;
      if (0 < iVar13) {
        do {
          if (*(short *)(local_40 + -2 + (longlong)iVar11 * 2) == 9) {
            lVar10 = FUN_00414de0(&local_40);
            *(undefined2 *)(lVar10 + -2 + (longlong)iVar11 * 2) = 0x20;
          }
          iVar11 = iVar11 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      iVar11 = FUN_004170c0(&LAB_00bf78e4,local_40,1);
      local_4c = *(undefined4 *)(param_1 + 0x98);
      local_44 = *(undefined4 *)(param_1 + 0xa0);
      while (((0 < iVar11 && (param_5 <= iVar11)) && (iVar11 <= param_6 - param_4))) {
        for (iVar13 = 1;
            (iVar11 + param_4 + iVar13 + -1) % *(int *)(*(longlong *)(param_1 + 0x130) + 0x618) != 0
            ; iVar13 = iVar13 + 1) {
        }
        FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x88));
        iVar7 = FUN_00bf7320(param_1,param_4 + iVar11 + iVar13 / 2 + -1);
        uVar3 = (longlong)iVar13 % 2;
        if ((int)uVar3 == 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4);
          iVar8 = iVar1 / 2;
          uVar3 = (longlong)iVar1 % 2;
        }
        else {
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x130) + 0x4d4);
        }
        iVar7 = iVar7 + iVar8;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
        local_50 = iVar7;
        local_48 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar3 & 0xffffffff);
        local_48 = iVar7 + local_48;
        uVar9 = FUN_00416740(local_30[0]);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x620);
        (**(code **)(*plVar2 + 0x48))(plVar2,iVar7,local_4c,3,&local_50,uVar9,1);
        iVar7 = 0;
        if (-1 < iVar13 + -1) {
          do {
            lVar10 = FUN_00414de0(&local_40);
            *(undefined2 *)(lVar10 + -2 + (longlong)(iVar11 + iVar7) * 2) = 0x20;
            iVar7 = iVar7 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        iVar11 = FUN_004170c0(&LAB_00bf78e4,local_40,1);
      }
    }
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x9c);
  }
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

