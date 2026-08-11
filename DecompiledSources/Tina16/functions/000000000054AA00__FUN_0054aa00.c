/* Ghidra address: 0054aa00 */
/* Ghidra symbol: FUN_0054aa00 */


undefined8 FUN_0054aa00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10);
  uVar4 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar3 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar4 * 8);
      cVar2 = FUN_004113d0(lVar3,&PTR_FUN_005487c8);
      if ((cVar2 != '\0') &&
         (plVar1 = *(longlong **)(lVar3 + 0x38), lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1),
         lVar3 == param_2)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

