/* Ghidra address: 00f8ae10 */
/* Ghidra symbol: FUN_00f8ae10 */


void FUN_00f8ae10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_b8;
  undefined1 local_b0 [103];
  char local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_b8 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  lVar5 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  if (lVar5 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x510);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00414b50(local_30,L"        ");
        FUN_00f8b340(param_1,&local_38,iVar7);
        iVar3 = FUN_00416db0(local_38,&PTR_DAT_00f8b2bc);
        if ((iVar3 == 0) && (*(int *)(lVar5 + 0x1c) != 0x800)) {
          uVar6 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
          *(undefined8 *)(param_1 + 0x3468) = uVar6;
          uVar4 = FUN_00f90b40(param_1,uVar6);
          *(undefined4 *)(param_1 + 0x3404) = uVar4;
          local_49 = '\x01';
          iVar3 = *(int *)(param_1 + 0x3464);
          if (((iVar3 == 0x100) || (iVar3 == 0x800)) || (iVar3 == 0x400)) {
            FUN_015fa440(local_b0,uVar4,0x20);
            FUN_004169a0(&local_48,local_b0);
          }
          else {
            FUN_015fa440(local_b0,uVar4,0x10);
            FUN_004169a0(&local_48,local_b0);
          }
        }
        else {
          iVar3 = *(int *)(lVar5 + 0x1c);
          if ((iVar3 == 0x100) || (((iVar3 == 0x800 || (iVar3 == 0x200)) || (iVar3 == 0x400)))) {
            FUN_00f8b3c0(param_1,&local_48,iVar7,&local_49,0x20);
          }
          else {
            iVar3 = FUN_00416db0(local_38,&PTR_DAT_00f8b2bc);
            if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_38,&PTR_DAT_00f8b2d0), iVar3 == 0)) ||
               (iVar3 = FUN_00416db0(local_38,&DAT_00f8b2e4), iVar3 == 0)) {
              FUN_00f8b3c0(param_1,&local_48,iVar7,&local_49,0x10);
            }
            else {
              FUN_00f8b3c0(param_1,&local_48,iVar7,&local_49,8);
            }
          }
        }
        if (local_49 != '\0') {
          FUN_015f4420(&local_40,local_38,10);
          if (((*(int *)(lVar5 + 0x1c) != 0x20) ||
              (iVar3 = FUN_00416db0(local_38,&DAT_00f8b2f8), iVar3 != 0)) &&
             (((*(int *)(lVar5 + 0x1c) != 1 ||
               (iVar3 = FUN_00416db0(local_38,L"STATUS"), iVar3 != 0)) &&
              ((*(int *)(lVar5 + 0x1c) != 0x100 ||
               (iVar3 = FUN_00416db0(local_38,L"CPSR"), iVar3 != 0)))))) {
            iVar3 = *(int *)(lVar5 + 0x1c);
            if ((iVar3 == 0x100) || (((iVar3 == 0x800 || (iVar3 == 0x200)) || (iVar3 == 0x400)))) {
              FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),8);
            }
            else {
              iVar3 = FUN_00416db0(local_38,&PTR_DAT_00f8b2bc);
              if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_38,&PTR_DAT_00f8b2d0), iVar3 == 0))
                 || (iVar3 = FUN_00416db0(local_38,&DAT_00f8b2e4), iVar3 == 0)) {
                FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),4);
              }
              else {
                FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x33fc),2);
              }
            }
          }
          FUN_00416ad0(local_30,local_48);
          FUN_00416ba0(&local_b8,local_40,local_30[0]);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x510);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_b8);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_010a6f30(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x3498));
  }
  FUN_00414480(&local_b8);
  FUN_00414560(&local_48,4);
  return;
}

