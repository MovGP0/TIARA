/* Ghidra address: 01502ff0 */
/* Ghidra symbol: FUN_01502ff0 */


longlong FUN_01502ff0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_a0;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [4];
  int local_64;
  longlong local_60 [6];
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_a0 = 0;
  FUN_01538880(local_60,&local_64,0,0,*(undefined8 *)(param_1[10] + 0x408));
  if ((param_1[1] != 0) && (local_60[0] != 0)) {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1[1]);
    iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if ((*(int *)((longlong)param_1 + 0x1c) <= iVar2 + -1) &&
       (-1 < *(int *)((longlong)param_1 + 0x1c))) {
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,*(undefined4 *)((longlong)param_1 + 0x1c));
      local_a0 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
    }
    (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1]);
    if (local_64 != 0) {
      dVar9 = 0.0;
      dVar10 = 1e+30;
      iVar7 = 0;
      iVar2 = local_64;
      dVar11 = 0.0;
      if (-1 < local_64 + -1) {
        do {
          lVar8 = (longlong)iVar7;
          plVar1 = *(longlong **)(local_60[0] + lVar8 * 8);
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_70);
          if (local_70 == 0) {
            FUN_0043f750(&local_80,iVar7);
            FUN_00416ba0(&local_70,&DAT_01503528,local_80);
            uVar6 = FUN_019a45d0();
            uVar6 = FUN_0198d430(uVar6);
            FUN_017bf050(*(undefined8 *)(local_60[0] + lVar8 * 8),uVar6,local_70);
          }
          FUN_010c08f0(&local_88,local_70,&local_78,local_68);
          FUN_00414b50(&local_70,local_88);
          if (local_70 == 0) {
            FUN_00414b50(&local_70,local_78);
          }
          if (local_78 == 0) {
            FUN_00414b50(&local_78,local_70);
          }
          iVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_70);
          if (iVar3 == -1) {
            local_90 = FUN_01107b90(&PTR_FUN_01106728,1);
            FUN_01107c90();
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar3);
            local_90 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
            (**(code **)(*plVar5 + 0x98))(plVar5,iVar3);
          }
          FUN_00414ad0(local_90 + 8,local_70);
          uVar6 = *(undefined8 *)(local_60[0] + lVar8 * 8);
          *(undefined8 *)(local_90 + 0x20) = uVar6;
          FUN_01502f60(param_1,uVar6,*(undefined8 *)(local_90 + 0x148));
          uVar6 = FUN_01d3ba80(*(undefined8 *)(local_90 + 0x148));
          dVar9 = (double)FUN_00b90620(uVar6,dVar9);
          uVar6 = FUN_01d3b9e0(*(undefined8 *)(local_90 + 0x148));
          dVar10 = (double)FUN_00b90650(uVar6,dVar10);
          *(int *)(local_90 + 0x80) = iVar7 % 0xb;
          *(int *)(local_90 + 0x94) = iVar7;
          (**(code **)(*(longlong *)param_1[1] + 0x80))((longlong *)param_1[1],local_78,local_90);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
          dVar11 = dVar9;
        } while (iVar2 != 0);
      }
      if (0.0 < dVar11) {
        dVar11 = dVar11 * 1.1;
        if ((1e+30 <= dVar10) || (dVar10 <= 1e-30)) {
          if ((int)param_1[0x15] != 0) {
            param_1[0x10] = (longlong)(dVar11 / (double)(int)param_1[0x15]);
          }
          (**(code **)(*param_1 + 0xb8))(param_1,param_1 + 0x10);
        }
        else {
          if (dVar10 != 0.0) {
            param_1[0x10] = (longlong)dVar10;
          }
          (**(code **)(*param_1 + 0xb8))(param_1,param_1 + 0x10);
          if (dVar11 / (double)param_1[0x10] <= 30000.0) {
            uVar4 = FUN_0040c770(dVar11 / (double)param_1[0x10]);
            *(undefined4 *)(param_1 + 0x15) = uVar4;
          }
          else {
            *(undefined4 *)(param_1 + 0x15) = 30000;
            param_1[0x10] = (longlong)(dVar11 / 30000.0);
          }
          (**(code **)(*param_1 + 0xe0))(param_1,param_1 + 0x15);
        }
        (**(code **)(*param_1 + 0xf0))(param_1,(int)param_1[0x15]);
        (**(code **)(*param_1 + 200))(param_1,param_1[0x10]);
      }
    }
    iVar2 = (**(code **)(*(longlong *)param_1[1] + 0xc0))((longlong *)param_1[1],local_a0);
    *(int *)((longlong)param_1 + 0x1c) = iVar2;
    if (iVar2 == -1) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    FUN_00410f20(plVar5);
    (**(code **)(*(longlong *)param_1[1] + 0x148))((longlong *)param_1[1]);
  }
  lVar8 = param_1[1];
  FUN_00414560(&local_88,4);
  return lVar8;
}

