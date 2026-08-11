/* Ghidra address: 00a59b40 */
/* Ghidra symbol: FUN_00a59b40 */


void FUN_00a59b40(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_38 = 0;
  local_30[0] = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x140))
                    (*(longlong **)(param_1 + 0x1b8),param_2,&local_1c);
  iVar3 = local_1c;
  if (cVar1 != '\0') {
    if (param_3 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))
                        (*(longlong **)(param_1 + 0x1b8),local_1c);
      uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00a4ffc0);
      FUN_00a580e0(param_1,uVar4,0);
      while( true ) {
        local_1c = local_1c + 1;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))
                          (*(longlong **)(param_1 + 0x1b8));
        if (iVar3 <= local_1c) break;
        (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))
                  (*(longlong **)(param_1 + 0x1b8),&local_38,local_1c);
        iVar3 = FUN_00416db0(local_38,param_2);
        if (iVar3 != 0) break;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))
                          (*(longlong **)(param_1 + 0x1b8),local_1c);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00a4ffc0);
        FUN_00a580e0(param_1,uVar4,0);
      }
    }
    else {
      do {
        local_1c = local_1c + 1;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))
                          (*(longlong **)(param_1 + 0x1b8));
        if (iVar2 <= local_1c) break;
        (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))
                  (*(longlong **)(param_1 + 0x1b8),local_30,local_1c);
        iVar2 = FUN_00416db0(local_30[0],param_2);
      } while (iVar2 == 0);
      while (iVar3 < local_1c) {
        local_1c = local_1c + -1;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))
                          (*(longlong **)(param_1 + 0x1b8),local_1c);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_00a4ffc0);
        FUN_00a580e0(param_1,uVar4,param_3);
      }
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

