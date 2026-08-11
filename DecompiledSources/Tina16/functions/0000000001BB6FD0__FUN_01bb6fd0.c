/* Ghidra address: 01bb6fd0 */
/* Ghidra symbol: FUN_01bb6fd0 */


char FUN_01bb6fd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char local_91;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  longlong local_30;
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  local_91 = '\x01';
  iVar11 = *(int *)(param_2 + 0x10);
  local_84 = 0;
  if (-1 < iVar11 + -1) {
    do {
      uVar6 = FUN_00b94e60(param_2,local_84);
      cVar1 = FUN_0198a580(uVar6);
      if (cVar1 == '\x04') {
        plVar7 = (longlong *)FUN_00b94e60(param_2,local_84);
        FUN_017ff5f0(plVar7,param_3);
        sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((sVar2 != 0x3a) && (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 != 0x96)) &&
           (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 != 0x68)) {
          cVar1 = FUN_01d04d50(plVar7);
          if (((cVar1 == '\0') || (*(char *)(plVar7[0x35] + 0xb0) != '\0')) ||
             ((*(longlong *)(plVar7[0x35] + 8) == 0 ||
              (cVar1 = FUN_019af180(*(undefined8 *)(plVar7[0x35] + 8)), cVar1 != '\0')))) {
LAB_01bb71b6:
            cVar1 = FUN_01bb7610(param_1,param_2,plVar7);
            if ((cVar1 == '\0') || (*(int *)((longlong)plVar7 + 0x18c) == 1)) {
              (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
              if ((*(char *)(param_1 + 0x6f8) != '\0') &&
                 (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xb8))
                                    (*(longlong **)(param_1 + 0x6e8),local_30), -1 < iVar3)) {
                uVar6 = FUN_00b89270();
                FUN_00b8e520(uVar6,&local_58,0x859);
                local_68 = local_30;
                local_60 = 0x11;
                FUN_00442f70(&local_50,local_58,&local_68,0);
                plVar8 = (longlong *)FUN_0072d3f0(local_50,0,0x283);
                iVar3 = FUN_00654c00();
                iVar10 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    uVar6 = FUN_00654bc0(plVar8,iVar10);
                    cVar1 = FUN_004113d0(uVar6,&PTR_FUN_00673008);
                    if ((cVar1 != '\0') &&
                       (lVar9 = FUN_00654bc0(plVar8,iVar10), *(int *)(lVar9 + 0x4f0) == 0xc)) {
                      uVar6 = FUN_00654bc0(plVar8,iVar10);
                      FUN_0064de00(uVar6,L"Renumber");
                    }
                    iVar10 = iVar10 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                sVar2 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
                FUN_00410f20(plVar8);
                if (sVar2 == 0xc) {
                  FUN_019acdc0(*(undefined8 *)(param_1 + 0x6f0));
                }
                if (sVar2 == 0xe) {
                  *(undefined1 *)(param_1 + 0x6f8) = 0;
                }
                if (sVar2 == 7) {
                  local_91 = '\0';
                  break;
                }
              }
              (**(code **)(*plVar7 + 0x288))(plVar7,&local_30);
              iVar3 = FUN_004170c0(&LAB_01bb7508,local_30,1);
              if (0 < iVar3) {
                uVar4 = FUN_004170c0(&LAB_01bb7508,local_30,1);
                uVar5 = 0;
                if (local_30 != 0) {
                  uVar5 = *(undefined4 *)(local_30 + -4);
                }
                FUN_00416e20(&local_30,uVar4,uVar5);
              }
              FUN_01d04330(plVar7,&local_80);
              FUN_0043ea00(&local_78,local_80);
              FUN_00416cd0(&local_70,3,local_30,&LAB_01bb7508,local_78);
              (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x80))
                        (*(longlong **)(param_1 + 0x6e8),local_70,plVar7);
            }
          }
          else {
            FUN_01d04330(plVar7,local_40);
            if (local_40[0] != 0) {
              FUN_01d04330(plVar7,&local_48);
              iVar3 = FUN_004170c0(L"NOPCB",local_48,1);
              if (iVar3 < 1) goto LAB_01bb71b6;
            }
            local_91 = FUN_01bb6fd0(param_1,*(undefined8 *)(plVar7[0x35] + 8),plVar7);
            if (local_91 == '\0') break;
          }
        }
      }
      local_84 = local_84 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return local_91;
}

