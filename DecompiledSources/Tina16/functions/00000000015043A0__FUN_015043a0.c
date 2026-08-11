/* Ghidra address: 015043a0 */
/* Ghidra symbol: FUN_015043a0 */


void FUN_015043a0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  longlong local_90;
  longlong local_88;
  int local_7c;
  double local_78;
  double local_70;
  double local_68;
  int local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  longlong local_50 [4];
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0[0] = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_01538880(local_50,&local_58,0,0,*(undefined8 *)(param_1[10] + 0x408));
  if ((param_1[1] != 0) && (local_50[0] != 0)) {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_010d9a38,1);
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1[1]);
    if (local_58 != 0) {
      local_68 = 0.0;
      dVar11 = 1e+30;
      iVar8 = 0;
      iVar10 = local_58;
      if (-1 < local_58 + -1) {
        do {
          lVar9 = (longlong)iVar8;
          plVar1 = *(longlong **)(local_50[0] + lVar9 * 8);
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_88);
          if (local_88 == 0) {
            FUN_0043f750(local_a0,iVar8);
            FUN_00416ba0(&local_88,&LAB_01504a6c,local_a0[0]);
            uVar6 = FUN_019a45d0();
            uVar6 = FUN_0198d430(uVar6);
            FUN_017bf050(*(undefined8 *)(local_50[0] + lVar9 * 8),uVar6,local_88);
          }
          FUN_010c08f0(&local_a8,local_88,&local_90,local_5c);
          FUN_00414b50(&local_88,local_a8);
          if (local_88 == 0) {
            FUN_00414b50(&local_88,local_90);
          }
          if (local_90 == 0) {
            FUN_00414b50(&local_90,local_88);
          }
          cVar2 = (**(code **)(*param_1 + 0x40))(param_1,local_90,&local_54);
          if (cVar2 != '\0') {
            uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],local_54);
            lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
            uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5,lVar7);
            (**(code **)(*plVar5 + 0x98))(plVar5,uVar3);
            FUN_00414ad0(lVar7 + 8,local_88);
            uVar6 = *(undefined8 *)(local_50[0] + lVar9 * 8);
            *(undefined8 *)(lVar7 + 0x20) = uVar6;
            FUN_01502f60(param_1,uVar6,*(undefined8 *)(lVar7 + 0x148));
            uVar6 = FUN_01d3ba80(*(undefined8 *)(lVar7 + 0x148));
            local_68 = (double)FUN_00b90620(uVar6,local_68);
            uVar6 = FUN_01d3b9e0(*(undefined8 *)(lVar7 + 0x148));
            dVar11 = (double)FUN_00b90650(uVar6,dVar11);
            *(undefined8 *)(local_50[0] + lVar9 * 8) = 0;
          }
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iVar10 = 0;
      for (iVar8 = 0;
          (iVar10 <= local_58 + -1 &&
          (iVar4 = (**(code **)(*plVar5 + 0x28))(plVar5), iVar8 <= iVar4 + -1)); iVar8 = iVar8 + 1)
      {
        for (; (*(longlong *)(local_50[0] + (longlong)iVar10 * 8) == 0 && (iVar10 < local_58 + -1));
            iVar10 = iVar10 + 1) {
        }
        lVar9 = (longlong)iVar10;
        plVar1 = *(longlong **)(local_50[0] + lVar9 * 8);
        if ((plVar1 != (longlong *)0x0) && (iVar10 <= local_58 + -1)) {
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_88);
          FUN_010c08f0(&local_b0,local_88,&local_90,local_5c);
          FUN_00414b50(&local_88,local_b0);
          if (local_88 == 0) {
            FUN_00414b50(&local_88,local_90);
          }
          if (local_90 == 0) {
            FUN_00414b50(&local_90,local_88);
          }
          uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar8);
          lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
          FUN_00414ad0(lVar7 + 8,local_88);
          uVar6 = *(undefined8 *)(local_50[0] + lVar9 * 8);
          *(undefined8 *)(lVar7 + 0x20) = uVar6;
          FUN_01502f60(param_1,uVar6,*(undefined8 *)(lVar7 + 0x148));
          uVar6 = FUN_01d3ba80(*(undefined8 *)(lVar7 + 0x148));
          local_68 = (double)FUN_00b90620(uVar6,local_68);
          uVar6 = FUN_01d3b9e0(*(undefined8 *)(lVar7 + 0x148));
          dVar11 = (double)FUN_00b90650(uVar6,dVar11);
          *(undefined8 *)(local_50[0] + lVar9 * 8) = 0;
        }
        iVar10 = iVar10 + 1;
      }
      FUN_0153b6a0(&local_68);
      if (0.0 < local_68) {
        local_68 = local_68 * 1.1;
        if ((1e+30 <= dVar11) || (dVar11 <= 1e-30)) {
          if (local_60 != 0) {
            local_70 = local_68 / (double)local_60;
          }
          (**(code **)(*param_1 + 0xb8))(param_1,&local_70);
        }
        else {
          local_7c = 100000;
          (**(code **)(*param_1 + 0xe0))(param_1,&local_7c);
          local_78 = local_68 / (double)local_7c;
          (**(code **)(*param_1 + 0xb8))(param_1,&local_78);
          if (dVar11 != 0.0) {
            local_70 = dVar11;
            (**(code **)(*param_1 + 0xb8))(param_1,&local_70);
            dVar11 = (local_70 - dVar11) / dVar11;
            if (dVar11 / 0.001 <= 1.0) {
              dVar11 = 1.0;
            }
            else {
              dVar11 = dVar11 / 0.001;
            }
            local_70 = local_70 / dVar11;
            (**(code **)(*param_1 + 0xb8))(param_1,&local_70);
          }
          local_60 = FUN_0040c770(local_68 / local_70);
          (**(code **)(*param_1 + 0xe0))(param_1,&local_60);
        }
        (**(code **)(*param_1 + 0xf0))(param_1,local_60);
        (**(code **)(*param_1 + 200))(param_1,local_70);
      }
    }
    (**(code **)(*plVar5 + 0x90))(plVar5);
    FUN_00410f20(plVar5);
  }
  FUN_00414560(&local_b0,3);
  FUN_00414560(&local_90,2);
  return;
}

