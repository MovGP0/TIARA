/* Ghidra address: 01793db0 */
/* Ghidra symbol: FUN_01793db0 */


void FUN_01793db0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined7 uVar7;
  undefined8 uVar6;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  
  cVar8 = '\0';
  cVar9 = '\0';
  bVar2 = false;
  plVar5 = (longlong *)0x0;
  iVar10 = 0;
  iVar11 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  if (-1 < iVar11 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar10);
      cVar9 = cVar8;
      if (*(char *)(lVar4 + 0x21) != '\0') {
        cVar9 = '\x01';
        plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar10);
        if (bVar2) {
          bVar2 = false;
          plVar5 = (longlong *)0x0;
          break;
        }
        bVar2 = true;
        cVar9 = '\x01';
      }
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + -1;
      cVar8 = cVar9;
    } while (iVar11 != 0);
  }
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7e8),uVar3);
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f0),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))
            (*(longlong **)(param_1 + 0x728),*(undefined1 *)(*(longlong *)(param_1 + 0x7f0) + 0x81))
  ;
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x800),uVar3);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x818),cVar9);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))
            (*(longlong **)(param_1 + 0x6d8),*(undefined1 *)(*(longlong *)(param_1 + 0x818) + 0x81))
  ;
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x820),
               *(undefined1 *)(*(longlong *)(param_1 + 0x818) + 0x81));
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))
            (*(longlong **)(param_1 + 0x6d0),*(undefined1 *)(*(longlong *)(param_1 + 0x820) + 0x81))
  ;
  if ((bVar2) && (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), (char)uVar6 != '\0')) {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x830),uVar3);
  if ((*(char *)(*(longlong *)(param_1 + 0x7c8) + 0x81) != '\0') &&
     (*(longlong *)(param_1 + 0xd20) == 0)) {
    uVar6 = FUN_006a6030();
    uVar6 = FUN_006a5ff0(uVar6,DAT_01fa0ba0);
    if ((char)uVar6 != '\0') {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      goto LAB_01793fed;
    }
  }
  uVar3 = 0;
LAB_01793fed:
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f8),uVar3);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))
            (*(longlong **)(param_1 + 0x720),*(undefined1 *)(*(longlong *)(param_1 + 0x7f8) + 0x81))
  ;
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xbb0),uVar3);
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 3000),uVar3);
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xbc0),uVar3);
  if ((cVar9 == '\0') || (*(longlong *)(param_1 + 0xd20) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71(uVar7,1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xbc8),uVar3);
  uVar3 = FUN_00c5c850(*(undefined8 *)(param_1 + 0xd50));
  FUN_007e2da0(*(undefined8 *)(param_1 + 2000),uVar3);
  uVar3 = FUN_00c5c870(*(undefined8 *)(param_1 + 0xd50));
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7d8),uVar3);
  puVar1 = *(undefined8 **)(param_1 + 0xd20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  return;
}

