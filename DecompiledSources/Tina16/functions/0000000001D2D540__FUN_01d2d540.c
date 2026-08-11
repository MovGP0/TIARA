/* Ghidra address: 01d2d540 */
/* Ghidra symbol: FUN_01d2d540 */


undefined8 FUN_01d2d540(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  
  cVar1 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3 & 0xffffffff,param_4);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 == '\0')) {
    uVar6 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3 & 0xffffffff,param_4);
    if (cVar1 == '\0') {
      uVar6 = 0;
      iVar2 = (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9]);
      iVar5 = 1;
      if (0 < iVar2) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[9] + 0x30))((longlong *)param_1[9],iVar5 + -1);
          plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
          if (((char)uVar6 == '\0') &&
             (cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4,param_2,param_3 & 0xffffffff,param_4),
             cVar1 == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(*(longlong *)param_1[10] + 0x28))((longlong *)param_1[10]);
      iVar5 = 1;
      if (0 < iVar2) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[10] + 0x30))((longlong *)param_1[10],iVar5 + -1)
          ;
          plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
          if (((char)uVar6 == '\0') &&
             (cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4,param_2,param_3 & 0xffffffff,param_4),
             cVar1 == '\0')) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      uVar6 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),1);
      (**(code **)(*param_1 + 0x50))(param_1,1);
      iVar2 = (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9]);
      iVar5 = 1;
      if (0 < iVar2) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[9] + 0x30))((longlong *)param_1[9],iVar5 + -1);
          plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
          (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(*(longlong *)param_1[10] + 0x28))((longlong *)param_1[10]);
      iVar5 = 1;
      if (0 < iVar2) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[10] + 0x30))((longlong *)param_1[10],iVar5 + -1)
          ;
          plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
          (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return uVar6;
}

