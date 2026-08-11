/* Ghidra address: 01bfb630 */
/* Ghidra symbol: FUN_01bfb630 */


void FUN_01bfb630(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_01bfb5f0(param_1,iVar5);
      cVar2 = FUN_004113d0(*(undefined8 *)(lVar4 + 0x18),&PTR_FUN_01bd2410);
      if (cVar2 != '\0') {
        lVar4 = FUN_01bfb5f0(param_1,iVar5);
        plVar1 = *(longlong **)(lVar4 + 0x18);
        uVar3 = (**(code **)(*plVar1 + 0x398))(plVar1);
        (**(code **)(*plVar1 + 400))
                  (plVar1,(int)plVar1[0x12],*(undefined4 *)((longlong)plVar1 + 0x94),uVar3,
                   *(undefined4 *)((longlong)plVar1 + 0x9c));
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

