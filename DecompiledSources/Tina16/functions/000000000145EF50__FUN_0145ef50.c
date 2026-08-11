/* Ghidra address: 0145ef50 */
/* Ghidra symbol: FUN_0145ef50 */


void FUN_0145ef50(short param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_019b5af0(*(undefined8 *)PTR_DAT_02002dd8);
  lVar1 = *(longlong *)PTR_DAT_02002dd8;
  *(undefined8 *)(lVar1 + 0xe78) = param_2;
  *(undefined1 *)(lVar1 + 0xb4) = 1;
  FUN_00ef4850(lVar1);
  FUN_0145e590();
  FUN_0145e640(lVar1);
  if (*PTR_DAT_020052b8 == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))
              (*(longlong **)(lVar1 + 0xe38),L"DC result:");
  }
  else if (param_1 == 0) {
    (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))
              (*(longlong **)(lVar1 + 0xe38),L"DC result:");
  }
  cVar3 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  iVar5 = 0;
  if (cVar3 == '\0') {
    uVar4 = FUN_0145e720();
    *(undefined8 *)PTR_DAT_020052f8 = uVar4;
    iVar5 = 0;
  }
  while (*(char *)(lVar1 + 0x92) == '\0') {
    cVar3 = FUN_01444810(1,lVar1,0,iVar5);
    if (cVar3 == '\0') break;
    if (iVar5 == 0) {
      FUN_019b9b30(lVar1);
    }
    if (param_1 == 0) {
      FUN_0145ef10(lVar1);
    }
    else {
      FUN_0145ef30(lVar1);
    }
    iVar5 = iVar5 + 1;
  }
  FUN_019b9b60(lVar1);
  cVar3 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if (cVar3 == '\0') {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020052f8);
    *(undefined8 *)PTR_DAT_020052f8 = 0;
  }
  if (*(char *)(lVar1 + 0x92) == '\0') {
    FUN_0145e590();
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80) == '\0') {
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x750) + 0x4d8);
      (**(code **)(*plVar2 + 0x90))(plVar2);
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x750) + 0x4d8);
    (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(lVar1 + 0xe38));
    FUN_0145e690(lVar1);
    FUN_01465300(*(undefined8 *)PTR_DAT_02005ba8);
    FUN_01463d20(*(undefined8 *)PTR_DAT_02005ba8,*(undefined8 *)PTR_DAT_02004030);
    FUN_00800700(*(undefined8 *)PTR_DAT_02005ba8,0);
    uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02005ba8);
    thunk_FUN_03ab0e43(uVar4,9);
    (**(code **)(**(longlong **)PTR_DAT_02005ba8 + 600))(*(longlong **)PTR_DAT_02005ba8);
  }
  return;
}

