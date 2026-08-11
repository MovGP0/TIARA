/* Ghidra address: 010dcd60 */
/* Ghidra symbol: FUN_010dcd60 */


undefined8 FUN_010dcd60(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar12;
  int iVar13;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [88];
  undefined1 local_250 [256];
  undefined8 local_150 [2];
  int local_13c;
  longlong local_138;
  undefined4 local_12b [20];
  undefined2 local_da [40];
  undefined2 local_89 [44];
  undefined7 uVar11;
  
  local_2b0 = 0;
  local_150[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_2c0 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 8));
    iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
    if ((*(int *)(param_1 + 0x1c) <= iVar5 + -1) && (-1 < *(int *)(param_1 + 0x1c))) {
      uVar10 = (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(param_1 + 0x1c));
      local_2c0 = FUN_004113f0(uVar10,&PTR_FUN_011057c0);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))(*(longlong **)(param_1 + 0x60));
    local_138 = 0;
    uVar11 = (undefined7)((ulonglong)uVar10 >> 8);
    uVar6 = (undefined4)CONCAT71(uVar11,1);
    uVar12 = (ulonglong)*(byte *)(param_1 + 0x58);
    if (uVar12 < 5) {
      if (uVar12 == 4) {
        uVar6 = (undefined4)CONCAT71(uVar11,3);
      }
      else if (uVar12 < 2) {
        uVar6 = (undefined4)CONCAT71(uVar11,1);
      }
      else if (uVar12 - 2 < 2) {
        uVar6 = (undefined4)CONCAT71(uVar11,2);
      }
    }
    else if (uVar12 == 5) {
      uVar6 = (undefined4)CONCAT71(uVar11,1);
    }
    else if (uVar12 == 0x6c) goto LAB_010dd27b;
    if (*(byte *)(param_1 + 0x58) != 0x6c) {
      FUN_0153a7f0(&local_138,&local_13c,uVar6,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
      if ((-1 < local_13c) && (iVar5 = 0, -1 < local_13c)) {
        iVar13 = local_13c + 1;
        do {
          if ((iVar5 < local_13c) && (local_138 != 0)) {
            plVar2 = *(longlong **)(local_138 + (longlong)iVar5 * 8);
            (**(code **)(*plVar2 + 0x288))(plVar2,local_150);
            FUN_00416910(local_250,local_150[0],0xff);
            FUN_00415020(local_89,local_250,0x50);
            cVar3 = FUN_0198a580(*(undefined8 *)(local_138 + (longlong)iVar5 * 8));
            if ((cVar3 == '\x04') &&
               (plVar2 = *(longlong **)(local_138 + (longlong)iVar5 * 8),
               sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2), sVar4 == 4)) {
              FUN_00415020(local_da,local_89,0x50);
              local_12b[0] = 0x646e4703;
            }
            else {
              FUN_00414ff0(local_2a8,local_89);
              FUN_00415110(local_2a8,&DAT_010dd2d8,0x51);
              FUN_00415020(local_da,local_2a8,0x50);
              FUN_00414ff0(local_2a8,local_89);
              FUN_00415110(local_2a8,&DAT_010dd2da,0x51);
              FUN_00415020(local_12b,local_2a8,0x50);
            }
          }
          else {
            local_89[0] = 0x2001;
            local_da[0] = 0x2001;
            local_12b[0] = 0x646e4703;
          }
          FUN_004169a0(&local_2b0,local_da);
          iVar7 = (**(code **)(*plVar8 + 0xb0))(plVar8,local_2b0);
          if (iVar7 == -1) {
            local_2b8 = FUN_01106d50(&PTR_FUN_011057c0,1);
          }
          else {
            uVar10 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar7);
            local_2b8 = FUN_004113f0(uVar10,&PTR_FUN_011057c0);
            (**(code **)(*plVar8 + 0x98))(plVar8,iVar7);
          }
          if ((iVar5 < local_13c) && (local_138 != 0)) {
            *(undefined8 *)(local_2b8 + 0x18) = *(undefined8 *)(local_138 + (longlong)iVar5 * 8);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x78) + 8))(*(longlong **)(param_1 + 0x78));
            *(undefined8 *)(local_2b8 + 0x18) = *(undefined8 *)(param_1 + 0x78);
          }
          FUN_004169a0(local_2b8 + 0x110,local_da);
          FUN_004169a0(local_2b8 + 0x118,local_12b);
          FUN_004169a0(local_2b8 + 8,local_89);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                    (*(longlong **)(param_1 + 8),*(undefined8 *)(local_2b8 + 0x110),local_2b8);
          iVar7 = FUN_00416db0(*(undefined8 *)(local_2b8 + 0x118),&DAT_010dd2e8);
          if (iVar7 == 0) {
            iVar7 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0xb0))
                              (*(longlong **)(param_1 + 0x60),&DAT_010dd2e8);
            if (iVar7 == -1) {
              (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))
                        (*(longlong **)(param_1 + 0x60),&DAT_010dd2e8,0);
            }
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))
                      (*(longlong **)(param_1 + 0x60),*(undefined8 *)(local_2b8 + 0x118),local_2b8);
          }
          iVar5 = iVar5 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (local_138 != 0) {
        FUN_004095f0(local_138,(longlong)(local_13c * 8));
      }
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                      (*(longlong **)(param_1 + 8),local_2c0);
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    FUN_00410f20(plVar8);
    FUN_00410f20(plVar9);
  }
LAB_010dd27b:
  FUN_00414480(&local_2b0);
  FUN_00414480(local_150);
  return uVar1;
}

