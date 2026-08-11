/* Ghidra address: 0110da80 */
/* Ghidra symbol: FUN_0110da80 */


undefined8 FUN_0110da80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_1f0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [256];
  undefined8 local_c0 [2];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_8d [81];
  int local_3c;
  longlong local_38;
  char local_29;
  
  local_1d0 = 0;
  local_1c8 = 0;
  local_c0[0] = 0;
  local_1f0 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_1 + 8));
    iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if ((*(int *)(param_1 + 0x1c) <= iVar5 + -1) && (-1 < *(int *)(param_1 + 0x1c))) {
      uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,*(undefined4 *)(param_1 + 0x1c));
      local_1f0 = FUN_004113f0(uVar8,&PTR_FUN_01105d80);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
    FUN_01538880(&local_38,&local_3c,0,1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
    if ((local_38 == 0) || (local_3c == 0)) {
      lVar9 = FUN_01107520(&PTR_FUN_01105d80,1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                (*(longlong **)(param_1 + 8),*(undefined8 *)(lVar9 + 8),lVar9);
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    else {
      iVar10 = 0;
      iVar5 = local_3c;
      if (-1 < local_3c + -1) {
        do {
          plVar1 = *(longlong **)(local_38 + (longlong)iVar10 * 8);
          (**(code **)(*plVar1 + 0x288))(plVar1,local_c0);
          FUN_00416910(local_1c0,local_c0[0],0xff);
          FUN_00415020(local_8d,local_1c0,0x50);
          FUN_004169a0(&local_1c8,local_8d);
          iVar6 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_1c8);
          if (iVar6 == -1) {
            local_1d8 = FUN_01107520(&PTR_FUN_01105d80,1);
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          else {
            uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar6);
            local_1d8 = FUN_004113f0(uVar8,&PTR_FUN_01105d80);
            (**(code **)(*plVar7 + 0x98))(plVar7,iVar6);
          }
          plVar1 = *(longlong **)(local_38 + (longlong)iVar10 * 8);
          *(longlong **)(local_1d8 + 0x20) = plVar1;
          sVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if (sVar4 == 100) {
            FUN_00415110(local_8d,&DAT_0110e0b0,0x50);
          }
          else {
            sVar4 = (**(code **)(**(longlong **)(local_1d8 + 0x20) + 0xf8))
                              (*(longlong **)(local_1d8 + 0x20));
            if ((sVar4 == 0x3e) ||
               (sVar4 = (**(code **)(**(longlong **)(local_1d8 + 0x20) + 0xf8))
                                  (*(longlong **)(local_1d8 + 0x20)), sVar4 == 0x66)) {
              FUN_00415110(local_8d,&DAT_0110e0b8,0x50);
            }
          }
          FUN_004169a0(&local_1d0,local_8d);
          iVar6 = FUN_00416db0(*(undefined8 *)(local_1d8 + 8),local_1d0);
          if (iVar6 != 0) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          FUN_004169a0(local_1d8 + 8,local_8d);
          local_a0 = *(double *)(local_1d8 + 0x130);
          local_98 = *(double *)(local_1d8 + 0x118);
          local_a8 = *(double *)(local_1d8 + 0x120);
          local_29 = *(char *)(local_1d8 + 0x110);
          local_b0 = *(double *)(local_1d8 + 0x128);
          FUN_01538c10(*(undefined8 *)(local_1d8 + 0x20),&local_29,&local_a8,&local_98,&local_a0,
                       &local_b0);
          cVar2 = FUN_015399d0(*(undefined8 *)(local_1d8 + 0x20));
          if (cVar2 != *(char *)(local_1d8 + 0x148)) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          *(char *)(local_1d8 + 0x148) = cVar2;
          sVar4 = (**(code **)(**(longlong **)(local_1d8 + 0x20) + 0xf8))
                            (*(longlong **)(local_1d8 + 0x20));
          if (sVar4 == 0xf) {
            *(undefined1 *)(local_1d8 + 0x149) = 3;
          }
          else {
            *(undefined1 *)(local_1d8 + 0x149) = 1;
          }
          if ((*(char *)(local_1d8 + 0x110) != local_29) ||
             (*(double *)(local_1d8 + 0x128) != local_b0)) {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          *(char *)(local_1d8 + 0x110) = local_29;
          *(double *)(local_1d8 + 0x128) = local_b0;
          bVar3 = *(char *)(local_1d8 + 0x110) - 1;
          if (bVar3 == 0xff) {
            if (*(double *)(local_1d8 + 0x120) != local_a8) {
              *(undefined1 *)(param_1 + 0x20) = 1;
            }
            *(double *)(local_1d8 + 0x120) = local_a8;
          }
          else if (bVar3 < 3) {
            if (((*(double *)(local_1d8 + 0x130) != local_a0) ||
                (*(double *)(local_1d8 + 0x118) != local_98)) ||
               (*(double *)(local_1d8 + 0x120) != local_a8)) {
              *(undefined1 *)(param_1 + 0x20) = 1;
            }
            *(double *)(local_1d8 + 0x130) = local_a0;
            *(double *)(local_1d8 + 0x118) = local_98;
            *(double *)(local_1d8 + 0x120) = local_a8;
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                    (*(longlong **)(param_1 + 8),*(undefined8 *)(local_1d8 + 8),local_1d8);
          iVar10 = iVar10 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_004095f0(local_38,(longlong)(local_3c * 8));
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))
                      (*(longlong **)(param_1 + 8),local_1f0);
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if (0 < iVar5) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    FUN_00410f20(plVar7);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_00414560(&local_1d0,2);
  FUN_00414480(local_c0);
  return uVar8;
}

