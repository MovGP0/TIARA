/* Ghidra address: 0094b170 */
/* Ghidra symbol: FUN_0094b170 */


int FUN_0094b170(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_3c = 0;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    iVar5 = 0;
    plVar4 = *(longlong **)(param_1 + 0x20);
    do {
      cVar1 = (**(code **)(*plVar4 + 0x278))(plVar4);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x158))(plVar4);
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x128))(plVar4);
        iVar5 = iVar5 + 1;
      }
      while (plVar3 == (longlong *)0x0) {
        iVar5 = iVar5 + -1;
        if (iVar5 < 1) break;
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x170))(plVar4);
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x158))(plVar4);
      }
      if (iVar5 < 1) break;
      cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
      if (cVar1 == '\x01') {
        (**(code **)(*plVar3 + 0x150))(plVar3,local_30);
        iVar2 = FUN_00416420(local_30[0],*(undefined8 *)(param_1 + 0x10));
        if (iVar2 != 0) {
          iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x10),&LAB_0094b2f0);
          if (iVar2 != 0) goto LAB_0094b2a4;
        }
        (**(code **)(*plVar3 + 0x148))(plVar3,&local_38);
        iVar2 = FUN_00416420(local_38,*(undefined8 *)(param_1 + 0x18));
        if (iVar2 != 0) {
          iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x18),&LAB_0094b2f0);
          if (iVar2 != 0) goto LAB_0094b2a4;
        }
        local_3c = local_3c + 1;
      }
LAB_0094b2a4:
      plVar4 = plVar3;
    } while (0 < iVar5);
  }
  FUN_004145c0(&local_38,2);
  return local_3c;
}

