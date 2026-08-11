/* Ghidra address: 00a98b50 */
/* Ghidra symbol: FUN_00a98b50 */


longlong * FUN_00a98b50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_30;
  
  local_30 = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar3 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar5);
      iVar6 = 0;
      while( true ) {
        uVar4 = FUN_00414480(&local_30);
        cVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,iVar6,uVar4);
        if (cVar1 == '\0') break;
        if (local_30 != 0) {
          (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
        }
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(&local_30);
  return plVar2;
}

