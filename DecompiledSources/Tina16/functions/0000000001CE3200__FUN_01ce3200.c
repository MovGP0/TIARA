/* Ghidra address: 01ce3200 */
/* Ghidra symbol: FUN_01ce3200 */


void FUN_01ce3200(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      iVar7 = iVar6 + -1;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar7);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aae560);
      if (cVar1 == '\0') {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01aaff18);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar7);
          uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01aaff18);
          FUN_01ab6de0(uVar4,&local_38);
          iVar3 = (**(code **)(*param_2 + 0xb0))(param_2,local_38);
          if (iVar3 != -1) {
            plVar5 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                               (*(longlong **)(param_1 + 0x80),iVar7);
            (**(code **)(*plVar5 + 0x50))(plVar5,1);
          }
        }
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01aae560);
        FUN_01ab2940(uVar4,local_30);
        iVar3 = (**(code **)(*param_2 + 0xb0))(param_2,local_30[0]);
        if (iVar3 != -1) {
          plVar5 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                             (*(longlong **)(param_1 + 0x80),iVar7);
          (**(code **)(*plVar5 + 0x50))(plVar5,1);
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

