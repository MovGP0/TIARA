/* Ghidra address: 018c5ff0 */
/* Ghidra symbol: FUN_018c5ff0 */


void FUN_018c5ff0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                         (*(longlong **)(param_2 + 0x80),iVar4);
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_0192bd20);
      if (cVar1 == '\0') {
        FUN_004ae7e0(param_4,plVar3);
      }
      FUN_004ae7e0(param_3,plVar3);
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01923c30);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x330))(plVar3);
        plVar3[0x56] = plVar3[0x16];
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))(*(longlong **)(param_2 + 0x80));
  return;
}

