/* Ghidra address: 00bd7300 */
/* Ghidra symbol: FUN_00bd7300 */


void FUN_00bd7300(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bd5550);
  if (cVar1 == '\0') {
    FUN_004b1ce0(param_1,param_2);
  }
  else {
    FUN_004b1e70(param_1);
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        plVar2 = (longlong *)FUN_00bd7240(param_1);
        uVar3 = FUN_00bd7720(param_2,iVar4);
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

