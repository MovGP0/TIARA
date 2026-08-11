/* Ghidra address: 0186ff30 */
/* Ghidra symbol: FUN_0186ff30 */


longlong FUN_0186ff30(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x80) + 0x30))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x80);
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar6);
      cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01918c28);
      if ((cVar2 != '\0') &&
         (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x80),
         lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,iVar6),
         *(longlong *)(lVar5 + 0xd8) == (longlong)param_2)) {
        return lVar5;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

