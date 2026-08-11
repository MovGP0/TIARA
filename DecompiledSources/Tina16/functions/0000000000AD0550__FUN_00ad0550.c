/* Ghidra address: 00ad0550 */
/* Ghidra symbol: FUN_00ad0550 */


undefined4 FUN_00ad0550(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  while( true ) {
    iVar5 = FUN_00611650(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x38)
                        );
    if (iVar5 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30);
      *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0xe8) + 0x28) =
           *(int *)(*(longlong *)(lVar2 + 0x28) + 8) - *(int *)(lVar2 + 8);
    }
    plVar3 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30) + 0x28);
    uVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((short)uVar6 != 0) break;
    cVar4 = FUN_006115d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x38)
                         ,1);
    if (cVar4 == '\0') break;
    FUN_00410f20(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30));
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x38);
    uVar7 = (**(code **)(*plVar3 + 8))(plVar3);
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30) = uVar7;
  }
  if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x83) == '\0') &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0xe8) + 0x20) != 0)) &&
     ((piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x40),
      *piVar1 = *piVar1 + 1, (short)uVar6 == 0 ||
      ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x40) & 0xfff) == 0)))) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x30);
    iVar5 = 0;
    if (*(longlong *)(lVar2 + 8) != 0) {
      iVar5 = (int)*(undefined8 *)(*(longlong *)(lVar2 + 8) + -8);
    }
    if (0 < iVar5 + -2) {
      iVar5 = 0;
      if (*(longlong *)(lVar2 + 8) != 0) {
        iVar5 = (int)*(undefined8 *)(*(longlong *)(lVar2 + 8) + -8);
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0x98);
      (**(code **)(*plVar3 + 0x460))
                (plVar3,(longlong)
                        ((*(int *)(*(longlong *)(lVar2 + 0x28) + 8) - *(int *)(lVar2 + 8)) *
                        *(int *)(*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50) + 0xe8) +
                                  0x20) + 0x2b8)) / (longlong)(iVar5 + -2) & 0xffffffff);
    }
  }
  return uVar6;
}

