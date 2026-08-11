/* Ghidra address: 018db760 */
/* Ghidra symbol: FUN_018db760 */


double FUN_018db760(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 local_71;
  longlong local_70;
  double local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  int local_40 [2];
  int local_38 [2];
  double local_30;
  
  local_80 = auStack_a8;
  local_48 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (iVar1 == 0) {
    local_30 = 0.0;
  }
  else {
    local_68 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
    local_5c = 0;
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))();
    local_4c = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_38[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                  (*(longlong **)(param_1 + 0xa0),&local_48,local_4c);
        local_54 = 0;
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') ||
           (iVar2 = FUN_018d4250(*(longlong *)(param_1 + 0x30)), iVar2 == 0)) {
LAB_018db9cd:
          uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x10));
          uVar6 = FUN_00415f70(local_48);
          uVar3 = FUN_00414cc0(local_48);
          thunk_FUN_040d447e(uVar4,uVar6,uVar3,local_38);
        }
        else {
          uVar4 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),local_4c);
          iVar2 = FUN_018d3e80(uVar4);
          if (iVar2 < 1) goto LAB_018db9cd;
          local_71 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
          uVar4 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),local_4c);
          local_50 = FUN_018d3e80(uVar4);
          uVar4 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),local_4c);
          local_70 = FUN_018d3e60(uVar4,0);
          FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),
                       *(undefined1 *)(local_70 + 0x14));
          do {
            local_58 = local_54;
            if (local_54 < local_50) {
              do {
                uVar4 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),local_4c);
                local_70 = FUN_018d3e60(uVar4,local_54);
                if (*(char *)(local_70 + 0x1c) == '\0') {
                  *(undefined1 *)(local_70 + 0x1c) = 1;
                  break;
                }
                local_54 = local_54 + 1;
              } while (local_54 < local_50);
            }
            uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x10));
            lVar5 = FUN_00415f70(local_48);
            thunk_FUN_040d447e(uVar4,lVar5 + (longlong)local_58 * 2,local_54 - local_58,local_40);
            FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),
                         *(undefined1 *)(local_70 + 0x14));
            local_38[0] = local_38[0] + local_40[0];
          } while (local_54 < local_50);
          FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),local_71);
        }
        iVar2 = FUN_00414cc0(local_48);
        iVar2 = FUN_0040c770((double)iVar2 * *(double *)(param_1 + 0x38) * local_68);
        local_38[0] = local_38[0] + iVar2;
        local_60 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))
                             (*(longlong **)(param_1 + 0xa0),local_4c);
        if ((local_60 & 1) != 0) {
          iVar2 = FUN_0040c770(*(double *)(param_1 + 0x60) * local_68);
          local_38[0] = local_38[0] + iVar2;
        }
        if (local_5c < local_38[0]) {
          local_5c = local_38[0];
        }
        local_4c = local_4c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
    local_30 = (double)local_5c / local_68;
  }
  FUN_00414520(&local_48);
  return local_30;
}

