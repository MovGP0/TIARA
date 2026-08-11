/* Ghidra address: 0082acb0 */
/* Ghidra symbol: FUN_0082acb0 */


void FUN_0082acb0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_00651a90(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(param_1 + 0xc0);
    cVar1 = (char)param_3;
    if ((cVar1 != '\0') &&
       (cVar2 = (**(code **)(*plVar5 + 0x140))(plVar5,(int)plVar5[6]), cVar2 == '\0')) {
      plVar4 = (longlong *)FUN_0082a4a0(param_1);
      cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (cVar2 == '\0') {
        return;
      }
    }
    if ((((cVar1 != '\0') || ((int)plVar5[6] != -1)) ||
        ((int)plVar5[6] != *(int *)(param_2 + 0x110))) &&
       (*(undefined4 *)(plVar5 + 6) = *(undefined4 *)(param_2 + 0x110),
       *(int *)(param_2 + 0x110) != -1)) {
      FUN_0082a4b0(param_1,0);
    }
    if ((cVar1 != '\0') || (*(int *)(param_1 + 0x318) == 0)) {
      FUN_0082a780(param_1,*(undefined4 *)(param_2 + 0xdc));
    }
    plVar5 = (longlong *)FUN_0082a4a0(param_1);
    cVar1 = (**(code **)(*plVar5 + 0x40))(plVar5);
    if (((cVar1 != '\0') && (*(longlong *)(param_2 + 0xc0) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0xd0) != 0 &&
        ((-1 < *(int *)(param_2 + 0x110) &&
         (plVar5 = *(longlong **)(*(longlong *)(param_2 + 0xc0) + 0xd0),
         iVar3 = (**(code **)(*plVar5 + 0x90))(plVar5), *(int *)(param_2 + 0x110) < iVar3)))))) {
      FUN_0082ac70(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0xd0),
                   *(undefined4 *)(param_2 + 0x110));
    }
  }
  return;
}

