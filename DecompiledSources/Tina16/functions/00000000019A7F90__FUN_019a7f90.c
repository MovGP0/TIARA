/* Ghidra address: 019a7f90 */
/* Ghidra symbol: FUN_019a7f90 */


void FUN_019a7f90(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_50 = 0;
  local_40 = 0;
  puVar4 = (undefined8 *)FUN_01996b00(0,&PTR_FUN_01984b68);
  FUN_0199e850(param_2,puVar4,0);
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar8);
      if (plVar5 != (longlong *)0x0) {
        cVar1 = FUN_0198a580(plVar5);
        if ((cVar1 == '\x05') && (cVar1 = FUN_017c3740(plVar5), cVar1 == '\0')) {
          (**(code **)(*plVar5 + 0x1f0))(plVar5,0,&local_2c,&local_30);
          (**(code **)(*plVar5 + 0x1f0))(plVar5,1,&local_34,&local_38);
          iVar3 = FUN_019a7df0(param_1,param_2,puVar4,local_2c,local_30);
          if ((((iVar3 < 2) && (lVar6 = FUN_0199eaa0(param_2,local_2c,local_30,0), lVar6 == 0)) ||
              ((iVar3 = FUN_019a7df0(param_1,param_2,puVar4,local_34,local_38), iVar3 < 2 &&
               (lVar6 = FUN_0199eaa0(param_2,local_34,local_38,0), lVar6 == 0)))) &&
             (cVar1 = FUN_019a7ea0(param_1,param_2,plVar5), cVar1 == '\0')) {
            FUN_00de8980(&local_40,0x9c,*(undefined8 *)(param_1 + 0x450));
            local_48 = plVar5;
            uVar7 = FUN_019a74e0(param_1,1,&local_48,0);
            (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x80))
                      (*(longlong **)(param_1 + 0x4b8),local_40,uVar7);
            *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
          }
          if ((local_2c == local_34) && (local_30 == local_38)) {
            FUN_00de8980(&local_50,0x9d,*(undefined8 *)(param_1 + 0x450));
            local_48 = plVar5;
            uVar7 = FUN_019a74e0(param_1,1,&local_48,0);
            (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x80))
                      (*(longlong **)(param_1 + 0x4b8),local_50,uVar7);
            *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
          }
        }
        if ((((*PTR_DAT_02001ab0 != '\0') && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) &&
            (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x39)) &&
           (((char)plVar5[0x34] == '\x01' && (*(longlong *)(plVar5[0x35] + 8) != 0)))) {
          FUN_019a7f90(param_1,*(undefined8 *)(plVar5[0x35] + 8));
        }
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar7 = (**(code **)*puVar4)(puVar4);
  FUN_004095f0(uVar7);
  FUN_00414480(&local_50);
  FUN_00414480(&local_40);
  return;
}

