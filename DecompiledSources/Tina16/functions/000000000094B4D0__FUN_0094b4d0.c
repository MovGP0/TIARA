/* Ghidra address: 0094b4d0 */
/* Ghidra symbol: FUN_0094b4d0 */


longlong * FUN_0094b4d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_40 = (longlong *)0x0;
  plVar1 = local_40;
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (-1 < param_2)) {
    iVar7 = -1;
    iVar6 = 0;
    plVar5 = *(longlong **)(param_1 + 0x20);
    do {
      cVar2 = (**(code **)(*plVar5 + 0x278))(plVar5);
      if (cVar2 == '\0') {
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x158))(plVar5);
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x128))(plVar5);
        iVar6 = iVar6 + 1;
      }
      while ((plVar4 == (longlong *)0x0 && (iVar6 = iVar6 + -1, 0 < iVar6))) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x170))(plVar5);
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x158))(plVar5);
      }
      plVar1 = local_40;
      if (iVar6 < 1) break;
      cVar2 = (**(code **)(*plVar4 + 0x168))(plVar4);
      if (cVar2 == '\x01') {
        (**(code **)(*plVar4 + 0x150))(plVar4,&local_30);
        iVar3 = FUN_00416420(local_30,*(undefined8 *)(param_1 + 0x10));
        if ((iVar3 == 0) ||
           (iVar3 = FUN_00416420(*(undefined8 *)(param_1 + 0x10),&LAB_0094b670), iVar3 == 0)) {
          (**(code **)(*plVar4 + 0x148))(plVar4,&local_38);
          iVar3 = FUN_00416420(local_38,*(undefined8 *)(param_1 + 0x18));
          if (((iVar3 == 0) ||
              (iVar3 = FUN_00416420(*(undefined8 *)(param_1 + 0x18),&LAB_0094b670), iVar3 == 0)) &&
             (iVar7 = iVar7 + 1, plVar1 = plVar4, iVar7 == param_2)) break;
        }
      }
      plVar5 = plVar4;
      plVar1 = local_40;
    } while (0 < iVar6);
  }
  local_40 = plVar1;
  FUN_004145c0(&local_38,2);
  return local_40;
}

