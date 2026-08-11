/* Ghidra address: 006a45a0 */
/* Ghidra symbol: FUN_006a45a0 */


void FUN_006a45a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0;
  cVar1 = FUN_004113d0(param_1[3],&PTR_FUN_006a1278);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)param_1[5];
    cVar1 = FUN_004113d0(plVar3,&PTR_FUN_00645ff0);
    if (cVar1 != '\0') {
      (**(code **)(*plVar3 + 0x278))(plVar3);
    }
    plVar3 = (longlong *)param_1[3];
    cVar1 = FUN_004113d0(plVar3,&PTR_FUN_006a2930);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_006a1cb8);
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*plVar3 + 0x138))();
        iVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar4 = FUN_004113f0(param_1[3],&PTR_FUN_006a1cb8);
            cVar1 = FUN_006a3c80(uVar4,iVar5,&local_30,&local_34,&local_40);
            if (cVar1 != '\0') {
              (**(code **)(*param_1 + 0x170))(param_1,local_30,local_34,local_40);
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    else {
      plVar3 = (longlong *)FUN_004113f0(plVar3,&PTR_FUN_006a2930);
      iVar2 = (**(code **)(*plVar3 + 0x138))();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar4 = FUN_006a35d0(plVar3[0x31],iVar5);
          cVar1 = FUN_006a4330(plVar3,iVar5,uVar4);
          if (cVar1 != '\0') {
            uVar4 = FUN_006a35d0(plVar3[0x31],iVar5);
            (**(code **)(*param_1 + 0x168))(param_1,uVar4);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00414480(&local_30);
  return;
}

