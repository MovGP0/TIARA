/* Ghidra address: 00d59770 */
/* Ghidra symbol: FUN_00d59770 */


void FUN_00d59770(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int local_84;
  int local_6c;
  int local_60;
  int local_5c;
  undefined1 local_58 [28];
  int local_3c;
  int iStack_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    plVar1 = *(longlong **)(param_1 + 8);
    iVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
    lVar10 = FUN_0060a050(plVar1,iVar3 + -1);
    if (lVar10 != 0) {
      lVar10 = FUN_0060a050(*(undefined8 *)(param_1 + 8),0);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
      if (iVar3 < 2) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_0060a050(*(undefined8 *)(param_1 + 8),1);
        local_60 = local_60 - (int)lVar10;
      }
      local_84 = FUN_00d5a110(param_1);
      iVar3 = FUN_00d5a0e0(param_1);
      if (local_84 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - local_84) + 1;
        do {
          local_6c = FUN_00d5a0f0(param_1);
          iVar4 = FUN_00d5a100(param_1);
          if (local_6c <= iVar4 + -1) {
            iVar4 = ((iVar4 + -1) - local_6c) + 1;
            do {
              if (((((-1 < local_6c) && (-1 < local_84)) &&
                   (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                                      (*(longlong **)(param_1 + 8)), local_6c < iVar5)) &&
                  (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                                     (*(longlong **)(param_1 + 8)), local_84 < iVar5)) &&
                 ((iVar5 = *(int *)(lVar10 + local_84 * local_60 + (longlong)local_6c * 4),
                  iVar5 == 0x7f007f ||
                  (local_2c._3_1_ = (char)((uint)iVar5 >> 0x18), bVar11 = local_2c._3_1_ != -1,
                  local_2c = iVar5, bVar11)))) {
                *(undefined1 *)(param_1 + 0x28) = 1;
                *(undefined1 *)(param_1 + 0x29) = 1;
                *(undefined1 *)(param_1 + 0x2a) = 1;
                return;
              }
              local_6c = local_6c + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_84 = local_84 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    iVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
    lVar10 = FUN_0060a050(plVar1,iVar3 + -1);
    if (lVar10 != 0) {
      lVar10 = FUN_0060a050(*(undefined8 *)(param_1 + 8),0);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
      if (iVar3 < 2) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_0060a050(*(undefined8 *)(param_1 + 8),1);
        local_60 = local_60 - (int)lVar10;
      }
      local_84 = FUN_00d5a110(param_1);
      iVar3 = FUN_00d5a0e0(param_1);
      if (local_84 <= iVar3 + -1) {
        local_5c = ((iVar3 + -1) - local_84) + 1;
        do {
          local_6c = FUN_00d5a0f0(param_1);
          iVar3 = FUN_00d5a100(param_1);
          if (local_6c <= iVar3 + -1) {
            iVar3 = ((iVar3 + -1) - local_6c) + 1;
            do {
              if ((((-1 < local_6c) && (-1 < local_84)) &&
                  ((iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                                      (*(longlong **)(param_1 + 8)), local_6c < iVar4 &&
                   (iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                                      (*(longlong **)(param_1 + 8)), local_84 < iVar4)))) &&
                 ((local_2c = *(int *)(lVar10 + local_84 * local_60 + (longlong)local_6c * 4),
                  local_2c == 0x7f007f ||
                  (local_2c._3_1_ = (char)((uint)local_2c >> 0x18), bVar11 = local_2c._3_1_ != -1,
                  bVar11)))) {
                local_3c = local_6c;
                iStack_38 = local_84;
                local_34 = CONCAT44(local_84,local_6c);
                uVar6 = FUN_00d5a0f0(param_1);
                uVar7 = FUN_00d5a110(param_1);
                iVar4 = FUN_00d5a0f0(param_1);
                iVar5 = FUN_00d5a110(param_1);
                FUN_00423010(local_58,uVar6,uVar7,iVar4 + *param_2,iVar5 + param_2[1]);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x29) = 1;
                }
                iVar4 = FUN_00d5a100(param_1);
                uVar6 = FUN_00d5a110(param_1);
                uVar7 = FUN_00d5a100(param_1);
                iVar5 = FUN_00d5a110(param_1);
                FUN_00423010(local_58,iVar4 - param_2[2],uVar6,uVar7,iVar5 + param_2[1]);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x29) = 1;
                }
                iVar4 = FUN_00d5a100(param_1);
                iVar5 = FUN_00d5a0e0(param_1);
                uVar6 = FUN_00d5a100(param_1);
                uVar7 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,iVar4 - param_2[2],iVar5 - param_2[3],uVar6,uVar7);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x29) = 1;
                }
                uVar6 = FUN_00d5a0f0(param_1);
                iVar4 = FUN_00d5a0e0(param_1);
                iVar5 = FUN_00d5a0f0(param_1);
                uVar7 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,uVar6,iVar4 - param_2[3],iVar5 + *param_2,uVar7);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x29) = 1;
                }
                iVar4 = FUN_00d5a0f0(param_1);
                uVar6 = FUN_00d5a110(param_1);
                iVar5 = FUN_00d5a100(param_1);
                iVar8 = FUN_00d5a110(param_1);
                FUN_00423010(local_58,iVar4 + *param_2,uVar6,iVar5 - param_2[2],iVar8 + param_2[1]);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x28) = 1;
                }
                iVar4 = FUN_00d5a0f0(param_1);
                iVar5 = FUN_00d5a0e0(param_1);
                iVar8 = FUN_00d5a100(param_1);
                uVar6 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,iVar4 + *param_2,iVar5 - param_2[3],iVar8 - param_2[2],uVar6);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x28) = 1;
                }
                uVar6 = FUN_00d5a0f0(param_1);
                iVar4 = FUN_00d5a110(param_1);
                iVar5 = FUN_00d5a0f0(param_1);
                iVar8 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,uVar6,iVar4 + param_2[1],iVar5 + *param_2,iVar8 - param_2[3]);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x28) = 1;
                }
                iVar4 = FUN_00d5a100(param_1);
                iVar5 = FUN_00d5a110(param_1);
                uVar6 = FUN_00d5a100(param_1);
                iVar8 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,iVar4 - param_2[2],iVar5 + param_2[1],uVar6,iVar8 - param_2[3]
                            );
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x28) = 1;
                }
                iVar4 = FUN_00d5a0f0(param_1);
                iVar5 = FUN_00d5a110(param_1);
                iVar8 = FUN_00d5a100(param_1);
                iVar9 = FUN_00d5a0e0(param_1);
                FUN_00423010(local_58,iVar4 + *param_2,iVar5 + param_2[1],iVar8 - param_2[2],
                             iVar9 - param_2[3]);
                cVar2 = FUN_004231e0(local_58,&local_34);
                if (cVar2 != '\0') {
                  *(undefined1 *)(param_1 + 0x2a) = 1;
                }
              }
              local_6c = local_6c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_84 = local_84 + 1;
          local_5c = local_5c + -1;
        } while (local_5c != 0);
      }
    }
  }
  return;
}

