/* Ghidra address: 01cedc70 */
/* Ghidra symbol: FUN_01cedc70 */


void FUN_01cedc70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_3c [3];
  
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01cecd80(param_1);
    FUN_01ced500(param_1);
    FUN_01cef810(param_1);
    local_3c[0] = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) +
                  *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    FUN_01d311c0(param_2,local_3c,4);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar6 + -1);
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        iVar7 = iVar6 + -1;
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar7);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01a5c280);
        if (cVar1 != '\0') {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar7);
          *(undefined1 *)(lVar5 + 0x80) = 0;
        }
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar7);
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

