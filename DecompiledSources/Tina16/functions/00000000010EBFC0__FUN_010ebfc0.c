/* Ghidra address: 010ebfc0 */
/* Ghidra symbol: FUN_010ebfc0 */


void FUN_010ebfc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar1 = false;
  if (*(char *)(param_2 + 0x58) == '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x28))(*(longlong **)(param_2 + 0x80));
    iVar6 = 1;
    bVar2 = false;
    if (0 < iVar3) {
      do {
        bVar1 = bVar2;
        lVar4 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))
                          (*(longlong **)(param_2 + 0x80),iVar6 + -1);
        if (*(longlong *)(lVar4 + 0xe0) == param_3) {
          bVar1 = true;
          iVar7 = iVar6 + -1;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
        bVar2 = bVar1;
      } while (iVar3 != 0);
    }
    if (bVar1) {
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))
                         (*(longlong **)(param_2 + 0x80),iVar7);
      (**(code **)(*plVar5 + 0x70))(plVar5,plVar5[0x33]);
      (**(code **)(**(longlong **)(param_2 + 0x80) + 0x98))(*(longlong **)(param_2 + 0x80),iVar7);
      FUN_004aee30(*(undefined8 *)(plVar5[0x1f] + 0xf8),plVar5);
      FUN_004aee80(*(undefined8 *)(plVar5[0x1f] + 0xf8));
      FUN_004aee30(*(undefined8 *)(plVar5[0x20] + 0xf8),plVar5);
      FUN_004aee80(*(undefined8 *)(plVar5[0x20] + 0xf8));
      FUN_00410f20(plVar5);
    }
  }
  return;
}

