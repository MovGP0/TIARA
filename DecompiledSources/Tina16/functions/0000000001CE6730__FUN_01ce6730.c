/* Ghidra address: 01ce6730 */
/* Ghidra symbol: FUN_01ce6730 */


undefined8 * FUN_01ce6730(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar4 != 0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80),0);
    cVar3 = FUN_004113d0(uVar6,&PTR_FUN_01aae560);
    if (cVar3 != '\0') {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),0);
      cVar3 = FUN_004113d0(*(undefined8 *)(lVar7 + 200),&PTR_FUN_01cb8940);
      if (cVar3 != '\0') {
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),0);
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xd0) + 8);
        bVar1 = *(byte *)(lVar7 + 0x434);
        if (bVar1 < 8) {
          bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) << (bVar1 & 0x1f) & 9U) != 0;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))
                            (*(longlong **)(param_1 + 0x80));
          if (iVar4 == 1) {
            lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                              (*(longlong **)(param_1 + 0x80),0);
            FUN_01cc0ae0(*(undefined8 *)(lVar7 + 0xe0),param_2);
          }
          else {
            plVar2 = *(longlong **)(param_1 + 0x80);
            lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                              (*(longlong **)(param_1 + 0x80),0);
            FUN_01cc1400(*(undefined8 *)(lVar7 + 0xe0),param_2,*(undefined8 *)PTR_DAT_02001f18);
            lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                              (*(longlong **)(param_1 + 0x80),0);
            FUN_01cc0ae0(*(undefined8 *)(lVar7 + 0xe0),&local_30);
            FUN_01ce7d90(&local_20,local_30);
            iVar4 = (**(code **)(*plVar2 + 0x28))();
            iVar8 = 0;
            if (-1 < iVar4 + -1) {
              do {
                lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                                  (*(longlong **)(param_1 + 0x80),iVar8);
                FUN_01cc1400(*(undefined8 *)(lVar7 + 0xe0),&local_38,*(undefined8 *)PTR_DAT_02001f18
                            );
                iVar5 = FUN_00416db0(*param_2,local_38);
                if (iVar5 != 0) {
                  FUN_00de8980(param_2,0x442,*(undefined8 *)PTR_DAT_02001f18);
                }
                lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                                  (*(longlong **)(param_1 + 0x80),iVar8);
                FUN_01cc0ae0(*(undefined8 *)(lVar7 + 0xe0),&local_40);
                FUN_01ce7d90(&local_28,local_40);
                iVar5 = FUN_00416db0(local_20,local_28);
                if (iVar5 != 0) {
                  FUN_00414b50(&local_20,&DAT_01ce6aac);
                }
                iVar8 = iVar8 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (local_20 == 0) {
              lVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                                (*(longlong **)(param_1 + 0x80),0);
              FUN_01cc1400(*(undefined8 *)(lVar7 + 0xe0),&local_48,*(undefined8 *)PTR_DAT_02001f18);
              FUN_01ce7d90(&local_20,local_48);
            }
            else {
              FUN_00de8980(param_2,0x442,*(undefined8 *)PTR_DAT_02001f18);
            }
            FUN_01ce7f10(&local_50,*param_2,local_20);
            FUN_00414ad0(param_2,local_50);
          }
          goto LAB_01ce6a5a;
        }
      }
    }
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x60));
LAB_01ce6a5a:
  FUN_00414560(&local_50,7);
  return param_2;
}

