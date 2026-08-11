/* Ghidra address: 0184cb40 */
/* Ghidra symbol: FUN_0184cb40 */


void FUN_0184cb40(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar3 = 0;
  while (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))
                           (*(longlong **)(param_1 + 0xa8)), iVar3 < iVar2) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                      (*(longlong **)(param_1 + 0xa8),iVar3);
    cVar1 = FUN_004113d0(lVar4,&PTR_FUN_018471b0);
    if ((cVar1 == '\0') &&
       ((cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01842f58), cVar1 == '\0' ||
        (*(longlong *)(lVar4 + 0x10) != 1)))) {
      FUN_00410f20(lVar4);
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x98))(*(longlong **)(param_1 + 0xa8),iVar3);
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  (**(code **)**(undefined8 **)(param_1 + 0x128))(*(undefined8 **)(param_1 + 0x128));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x30))
                        (*(longlong **)(param_1 + 0x140),iVar2);
      FUN_00410f20(uVar5);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x90))(*(longlong **)(param_1 + 0x140));
  FUN_00414480(param_1 + 0x90);
  FUN_00414480(param_1 + 0x88);
  FUN_00414480(param_1 + 0x98);
  return;
}

