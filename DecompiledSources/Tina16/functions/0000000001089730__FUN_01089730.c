/* Ghidra address: 01089730 */
/* Ghidra symbol: FUN_01089730 */


void FUN_01089730(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [103];
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x510);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xad0) + 0xe8) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00414b50(&local_20,L"        ");
      FUN_01089590(param_1,&local_28,iVar5);
      iVar3 = FUN_00416db0(local_28,&PTR_DAT_01089c10);
      if (iVar3 == 0) {
        uVar4 = FUN_0108bb30(param_1);
        local_39 = '\x01';
        if ((*(int *)(param_1 + 0xad8) == 0x100) || (*(int *)(param_1 + 0xad8) == 0x800)) {
          FUN_015fa440(local_a0,uVar4,0x20);
          FUN_004169a0(&local_38,local_a0);
        }
        else {
          FUN_015fa440(local_a0,uVar4,0x10);
          FUN_004169a0(&local_38,local_a0);
        }
      }
      else if ((*(int *)(param_1 + 0xad8) == 0x100) || (*(int *)(param_1 + 0xad8) == 0x800)) {
        local_d8 = 0x20;
        FUN_01089620(auStack_f8,&local_a8,iVar5,&local_39);
        FUN_00414b50(&local_38,local_a8);
      }
      else {
        iVar3 = FUN_00416db0(local_28,&PTR_DAT_01089c10);
        if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_28,&PTR_DAT_01089c24), iVar3 == 0)) ||
           (iVar3 = FUN_00416db0(local_28,&DAT_01089c38), iVar3 == 0)) {
          local_d8 = 0x10;
          FUN_01089620(auStack_f8,&local_b0,iVar5,&local_39);
          FUN_00414b50(&local_38,local_b0);
        }
        else {
          local_d8 = 8;
          FUN_01089620(auStack_f8,&local_b8,iVar5,&local_39);
          FUN_00414b50(&local_38,local_b8);
        }
      }
      if (local_39 != '\0') {
        FUN_015f4420(&local_30,local_28,10);
        if ((((*(int *)(param_1 + 0xad8) != 0x20) ||
             (iVar3 = FUN_00416db0(local_28,&DAT_01089c4c), iVar3 != 0)) &&
            ((*(int *)(param_1 + 0xad8) != 1 ||
             (iVar3 = FUN_00416db0(local_28,L"STATUS"), iVar3 != 0)))) &&
           ((*(int *)(param_1 + 0xad8) != 0x100 ||
            (iVar3 = FUN_00416db0(local_28,L"CPSR"), iVar3 != 0)))) {
          if ((*(int *)(param_1 + 0xad8) == 0x100) || (*(int *)(param_1 + 0xad8) == 0x800)) {
            FUN_015fa320(&local_38,*(undefined4 *)(param_1 + 0x4c74),8);
          }
          else {
            iVar3 = FUN_00416db0(local_28,&PTR_DAT_01089c10);
            if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_28,&PTR_DAT_01089c24), iVar3 == 0)) ||
               (iVar3 = FUN_00416db0(local_28,&DAT_01089c38), iVar3 == 0)) {
              FUN_015fa320(&local_38,*(undefined4 *)(param_1 + 0x4c74),4);
            }
            else {
              FUN_015fa320(&local_38,*(undefined4 *)(param_1 + 0x4c74),2);
            }
          }
        }
        FUN_00416ad0(&local_20,local_38);
        FUN_00416ba0(&local_c0,local_30,local_20);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8d8) + 0x510);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_c0);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_010a6f30(*(undefined8 *)(param_1 + 0x8d8),*(undefined4 *)(param_1 + 0x4c6c));
  FUN_00414560(&local_c0,4);
  FUN_00414560(&local_38,4);
  return;
}

