/* Ghidra address: 01ce3070 */
/* Ghidra symbol: FUN_01ce3070 */


void FUN_01ce3070(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      iVar6 = iVar5 + -1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar6);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aaff18);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar6);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01aaff18);
          FUN_01ab6de0(lVar4,&local_38);
          (**(code **)(*param_2 + 0x80))(param_2,local_38,*(undefined8 *)(lVar4 + 0x98));
        }
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01aae560);
        FUN_01ab2940(lVar4,local_30);
        (**(code **)(*param_2 + 0x80))(param_2,local_30[0],*(undefined8 *)(lVar4 + 0xe0));
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

