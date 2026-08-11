/* Ghidra address: 017761b0 */
/* Ghidra symbol: FUN_017761b0 */


void FUN_017761b0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_3c [12];
  
  bVar3 = true;
  if (*(char *)(param_1 + 0x62) != '\0') {
    lVar7 = (longlong)(int)(uint)(param_3 == 2);
    if (*(longlong *)(param_2 + 8 + lVar7 * 0x10) == 0) {
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(param_2 + 8 + lVar7 * 0x10) = uVar6;
    }
    cVar4 = FUN_01b22340(*(undefined8 *)(param_2 + 8 + lVar7 * 0x10),*(undefined8 *)(param_1 + 0x48)
                         ,local_3c,1);
    if (cVar4 == '\0') {
      plVar2 = *(longlong **)(param_2 + 8 + lVar7 * 0x10);
      (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(param_1 + 0x48));
    }
    else {
      bVar3 = false;
    }
  }
  if (bVar3) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
    piVar1 = (int *)(param_2 + 4 + (longlong)(int)(uint)(param_3 == 2) * 0x10);
    *piVar1 = *piVar1 + iVar5;
  }
  return;
}

