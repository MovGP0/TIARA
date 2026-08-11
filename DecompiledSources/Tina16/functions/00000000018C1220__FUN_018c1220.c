/* Ghidra address: 018c1220 */
/* Ghidra symbol: FUN_018c1220 */


void FUN_018c1220(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  double local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_38;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  iVar3 = (**(code **)**(undefined8 **)(param_1 + 0xa0))(*(undefined8 **)(param_1 + 0xa0));
  if (param_2 < iVar3) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    if (iVar3 != 0) {
      FUN_0043f750(&local_58,param_2 + 1);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xb0))
                        (*(longlong **)(param_1 + 0x70),local_58);
      if (iVar3 == -1) goto LAB_018c1702;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 200) = 1;
    local_28 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                         (*(longlong **)(param_1 + 0xa0),param_2);
    if (local_28 != 0) {
      FUN_018b9030(*(undefined8 *)(param_1 + 0xa0));
      if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xc1) == '\0') {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
        if (*(char *)(*(longlong *)(lVar1 + 0x1a8) + 0x20) == '\0') {
          if (*(longlong *)(lVar1 + 0x418) != 0) {
            (**(code **)(lVar1 + 0x418))(*(undefined8 *)(lVar1 + 0x420),lVar1,1,param_2 + 1);
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
      }
      else {
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20);
        (**(code **)(*plVar7 + 0x260))(plVar7,1,param_2 + 1);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xd8))
                (*(longlong **)(param_1 + 0xa8),local_28,param_2);
      FUN_0196bc80(local_28,param_2);
      local_20 = (longlong *)FUN_019665f0(&PTR_FUN_01929d50,1,0);
      (**(code **)(*local_20 + 0x50))(local_20,L"_pagebackground");
      uVar4 = FUN_0196bd00(local_28);
      FUN_0195cea0(local_20,uVar4);
      uVar6 = FUN_0196bc50(local_28);
      (**(code **)(*(longlong *)local_20[0x38] + 0x10))((longlong *)local_20[0x38],uVar6);
      plVar7 = (longlong *)FUN_01966ad0(local_20);
      uVar6 = FUN_0196bd40(local_28);
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar6);
      FUN_01966bf0(local_20,3,1);
      FUN_01966bf0(local_20,2,0);
      local_68 = *(double *)(local_28 + 0xb0) -
                 (*(double *)(local_28 + 0x1e0) + *(double *)(local_28 + 0x178)) *
                 *(double *)PTR_DAT_02002c30;
      FUN_01950580(local_20,*(undefined8 *)(local_28 + 0x98),*(undefined8 *)(local_28 + 0xa0),
                   *(double *)(local_28 + 0xa8) -
                   (*(double *)(local_28 + 0x1a8) + *(double *)(local_28 + 0x1c8)) *
                   *(double *)PTR_DAT_02002c30);
      FUN_018c0fb0(auStack_88,local_20);
      FUN_00410f20(local_20);
      iVar3 = (**(code **)(**(longlong **)(local_28 + 0x80) + 0x30))();
      local_2c = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_38 = (**(code **)(**(longlong **)(local_28 + 0x80) + 0x20))
                               (*(longlong **)(local_28 + 0x80),local_2c);
          cVar2 = FUN_004113d0(local_38,&PTR_FUN_0192c3a0);
          if ((cVar2 == '\0') ||
             ((((cVar2 = FUN_004113d0(local_38,&PTR_FUN_01930480), cVar2 == '\0' ||
                (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xd8) == '\0')) || (param_2 == 0)) &&
              (((cVar2 = FUN_004113d0(local_38,&PTR_FUN_01930a20), cVar2 == '\0' ||
                (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xd8) == '\0')) ||
               (iVar5 = (**(code **)**(undefined8 **)(param_1 + 0xa0))
                                  (*(undefined8 **)(param_1 + 0xa0)), param_2 == iVar5 + -1)))))) {
            FUN_018c0fb0(auStack_88,local_38);
            iVar5 = (**(code **)(**(longlong **)(local_38 + 0x80) + 0x30))
                              (*(longlong **)(local_38 + 0x80));
            if (iVar5 != 0) {
              iVar5 = (**(code **)(**(longlong **)(local_38 + 0x80) + 0x30))();
              local_30 = 0;
              if (-1 < iVar5 + -1) {
                do {
                  uVar6 = (**(code **)(**(longlong **)(local_38 + 0x80) + 0x20))
                                    (*(longlong **)(local_38 + 0x80),local_30);
                  FUN_018c0fb0(auStack_88,uVar6);
                  local_30 = local_30 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xd0))
                (*(longlong **)(param_1 + 0xa8),local_28,param_2);
      FUN_018b9080(*(undefined8 *)(param_1 + 0xa0));
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20) + 0x210) == 0) {
        FUN_018b7df0(*(undefined8 *)(param_1 + 0xa0));
      }
      else {
        FUN_0196b290(local_28);
      }
    }
  }
LAB_018c1702:
  FUN_00414480(&local_58);
  return;
}

