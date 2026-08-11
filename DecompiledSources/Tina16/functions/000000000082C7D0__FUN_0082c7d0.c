/* Ghidra address: 0082c7d0 */
/* Ghidra symbol: FUN_0082c7d0 */


void FUN_0082c7d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar2 == '\0') {
    plVar4 = (longlong *)FUN_0082baa0(param_1[5]);
    cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (cVar2 == '\0') {
      return;
    }
  }
  cVar2 = FUN_004113d0(param_1[3],&PTR_FUN_0061c2b8);
  if (cVar2 != '\0') {
    lVar1 = param_1[3];
    if ((*(longlong *)(lVar1 + 0xc0) != 0) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0xc0) + 0xd0) != 0)) {
      if ((param_2 < 0) ||
         (plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + 0xd0),
         iVar3 = (**(code **)(*plVar4 + 0x90))(plVar4), iVar3 <= param_2)) {
        FUN_0082ba70(param_1[5],0);
      }
      else {
        cVar2 = FUN_0082c6a0(param_1,(int)param_1[6]);
        if (cVar2 == '\0') {
          plVar4 = (longlong *)FUN_0082baa0(param_1[5]);
          cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
          if (cVar2 == '\0') goto LAB_0082c8a6;
        }
        FUN_0082c020(param_1[5],*(undefined8 *)(*(longlong *)(lVar1 + 0xc0) + 0xd0),param_2);
      }
    }
  }
LAB_0082c8a6:
  *(int *)(param_1 + 6) = param_2;
  FUN_0082bab0(param_1[5],0);
  return;
}

