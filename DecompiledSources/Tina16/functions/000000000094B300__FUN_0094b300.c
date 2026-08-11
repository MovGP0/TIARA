/* Ghidra address: 0094b300 */
/* Ghidra symbol: FUN_0094b300 */


int FUN_0094b300(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_3c = -1;
  iVar2 = local_3c;
  if (((*(longlong *)(param_1 + 0x20) != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 == '\x01')) {
    iVar6 = -1;
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
      while ((plVar3 == (longlong *)0x0 && (iVar5 = iVar5 + -1, 0 < iVar5))) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x170))(plVar4);
        plVar3 = (longlong *)(**(code **)(*plVar4 + 0x158))(plVar4);
      }
      iVar2 = local_3c;
      if (iVar5 < 1) break;
      cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3);
      if (cVar1 == '\x01') {
        (**(code **)(*plVar3 + 0x150))(plVar3,&local_30);
        iVar2 = FUN_00416420(local_30,*(undefined8 *)(param_1 + 0x10));
        if ((iVar2 == 0) ||
           (iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x10),&LAB_0094b4c0), iVar2 == 0)) {
          (**(code **)(*plVar3 + 0x148))(plVar3,&local_38);
          iVar2 = FUN_00416420(local_38,*(undefined8 *)(param_1 + 0x18));
          if (((iVar2 == 0) ||
              (iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x18),&LAB_0094b4c0), iVar2 == 0)) &&
             (iVar6 = iVar6 + 1, iVar2 = iVar6, plVar3 == param_2)) break;
        }
      }
      plVar4 = plVar3;
      iVar2 = local_3c;
    } while (0 < iVar5);
  }
  local_3c = iVar2;
  FUN_004145c0(&local_38,2);
  return local_3c;
}

