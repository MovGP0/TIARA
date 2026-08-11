/* Ghidra address: 0082c060 */
/* Ghidra symbol: FUN_0082c060 */


void FUN_0082c060(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_00687ed0(param_1,param_2,param_3);
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (((char)param_3 != '\0') &&
       (cVar2 = FUN_0082c6a0(lVar1,*(undefined4 *)(lVar1 + 0x30)), cVar2 == '\0')) {
      plVar4 = (longlong *)FUN_0082baa0(param_1);
      cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (cVar2 == '\0') {
        return;
      }
    }
    if (((((char)param_3 != '\0') || (*(int *)(lVar1 + 0x30) != -1)) ||
        (*(int *)(lVar1 + 0x30) != *(int *)(param_2 + 0x110))) &&
       (*(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_2 + 0x110),
       *(int *)(param_2 + 0x110) != -1)) {
      FUN_0082ba70(param_1,0);
    }
    plVar4 = (longlong *)FUN_0082baa0(param_1);
    cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (((cVar2 != '\0') && (*(longlong *)(param_2 + 0xc0) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0xd0) != 0 &&
        ((-1 < *(int *)(param_2 + 0x110) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_2 + 0xc0) + 0xd0),
         iVar3 = (**(code **)(*plVar4 + 0x90))(plVar4), *(int *)(param_2 + 0x110) < iVar3)))))) {
      FUN_0082c020(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0xd0),
                   *(undefined4 *)(param_2 + 0x110));
    }
  }
  return;
}

