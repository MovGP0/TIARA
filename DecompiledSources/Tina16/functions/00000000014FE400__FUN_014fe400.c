/* Ghidra address: 014fe400 */
/* Ghidra symbol: FUN_014fe400 */


undefined8 FUN_014fe400(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong local_res10 [3];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_3c [3];
  
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_58 = 0;
  local_68 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    FUN_00414480(param_1);
  }
  else {
    plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    if (*(char *)(DAT_0210ec08 + 0x741) == '\0') {
      uVar3 = FUN_014fe260(local_res10[0]);
      lVar7 = FUN_01cc5b10(*(undefined8 *)PTR_DAT_02001440,uVar3,DAT_0210ec18,&local_60,local_3c,
                           &local_58);
      FUN_004b4b10(plVar6,local_58);
      iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (iVar4 != 0) {
        local_3c[0] = (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      FUN_004169f0(param_1,local_3c[0]);
      iVar13 = 1;
      iVar4 = *(int *)(local_60 + 0x10);
      if (0 < iVar4) {
        do {
          iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
          if (iVar5 == 0) {
LAB_014fe55d:
            uVar2 = FUN_01aa0a40(*(undefined1 *)(lVar7 + -1 + (longlong)iVar4));
            lVar9 = FUN_00414de0(param_1);
            *(undefined2 *)(lVar9 + -2 + (longlong)iVar13 * 2) = uVar2;
            iVar13 = iVar13 + 1;
          }
          else {
            uVar8 = FUN_004aeac0(local_60,iVar4 + -1);
            FUN_01cc0ae0(uVar8,&local_70);
            iVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_70);
            if (-1 < iVar5) goto LAB_014fe55d;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      plVar10 = (longlong *)
                FUN_019ac500(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_res10[0])
      ;
      plVar11 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      uVar3 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
      cVar1 = FUN_015266c0(uVar3,plVar11,&local_50);
      if (cVar1 != '\0') {
        (**(code **)(*plVar10 + 0x2d0))(plVar10,1,&local_48);
        FUN_004169a0(&local_68,local_48);
        FUN_004169a0(&local_80,local_50 + 0x2d8);
        FUN_017c4060(&local_78,local_80,local_68);
        FUN_004b4b10(plVar6,local_78);
        iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
        if (iVar4 == 0) {
          uVar3 = (**(code **)(*plVar11 + 0x28))(plVar11);
          FUN_004169f0(param_1,uVar3);
        }
        else {
          uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
          FUN_004169f0(param_1,uVar3);
        }
        iVar13 = 1;
        iVar4 = (**(code **)(*plVar11 + 0x28))(plVar11);
        iVar4 = iVar4 + -1;
        if (-1 < iVar4) {
          do {
            iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
            if (iVar5 == 0) {
LAB_014fe6c5:
              if (*PTR_DAT_02003fc8 == '\0') {
                uVar12 = (**(code **)(*plVar11 + 0x30))(plVar11,iVar4);
              }
              else {
                uVar3 = (**(code **)(*plVar11 + 0x30))(plVar11,iVar4);
                uVar12 = FUN_01aa8f70(*(undefined8 *)(DAT_0210ec08 + 0x728),uVar3);
              }
              uVar2 = FUN_01aa0a40(*(undefined1 *)
                                    (*(longlong *)(DAT_0210ec08 + 0x730) + (uVar12 & 0xffff)));
              lVar7 = FUN_00414de0(param_1);
              *(undefined2 *)(lVar7 + -2 + (longlong)iVar13 * 2) = uVar2;
              iVar13 = iVar13 + 1;
            }
            else {
              (**(code **)(*plVar11 + 0x18))(plVar11,&local_88,iVar4);
              iVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_88);
              if (-1 < iVar5) goto LAB_014fe6c5;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != -1);
        }
      }
      FUN_00410f20(plVar11);
    }
    FUN_00410f20(plVar6);
  }
  FUN_00414560(&local_88,5);
  FUN_00414480(&local_58);
  FUN_00414480(local_res10);
  return param_1;
}

