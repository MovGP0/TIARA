/* Ghidra address: 0054b110 */
/* Ghidra symbol: FUN_0054b110 */


undefined8 FUN_0054b110(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x10);
  uVar5 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar1 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8);
      cVar3 = FUN_004113d0(plVar2,&PTR_FUN_00549eb0);
      if ((cVar3 != '\0') && (iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2), iVar4 == param_2)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

