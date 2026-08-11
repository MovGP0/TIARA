/* Ghidra address: 0095d0b0 */
/* Ghidra symbol: FUN_0095d0b0 */


void FUN_0095d0b0(longlong *param_1,longlong *param_2,undefined1 param_3,byte *param_4,char *param_5
                 )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  byte local_29;
  
  *param_5 = '\x01';
  *param_4 = 1;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090a420);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00909bd0);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090d088);
      if ((cVar1 != '\0') &&
         ((**(code **)(*param_1 + 0x98))(param_1,param_2,param_4,param_5), *param_5 != '\0')) {
        puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
        iVar2 = (**(code **)*puVar3)();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
            uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
            (**(code **)(*param_1 + 0xa0))(param_1,uVar5,param_3,&local_29,param_5);
            *param_4 = *param_4 & local_29;
            if (*param_5 == '\0') {
              return;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,param_2,param_4,param_5);
    if (*param_5 != '\0') {
      (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,&local_29,param_5);
      *param_4 = *param_4 & local_29;
      if (*param_5 != '\0') {
        puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x100))(param_2);
        iVar2 = (**(code **)*puVar3)();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar4 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
            uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
            (**(code **)(*param_1 + 0xa0))(param_1,uVar5,param_3,&local_29,param_5);
            *param_4 = *param_4 & local_29;
            if (*param_5 == '\0') {
              return;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
        iVar2 = (**(code **)*puVar3)();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
            uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
            (**(code **)(*param_1 + 0xa0))(param_1,uVar5,param_3,&local_29,param_5);
            *param_4 = *param_4 & local_29;
            if (*param_5 == '\0') {
              return;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  return;
}

