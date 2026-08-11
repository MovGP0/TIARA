/* Ghidra address: 0145e790 */
/* Ghidra symbol: FUN_0145e790 */


void FUN_0145e790(short param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_019b5af0(*(undefined8 *)PTR_DAT_02002dd8);
  lVar1 = *(longlong *)PTR_DAT_02002dd8;
  *(undefined8 *)(lVar1 + 0xe78) = param_2;
  *(undefined1 *)(lVar1 + 0xb4) = 0;
  FUN_0145e590();
  FUN_00ef4850(lVar1);
  FUN_0145e640(lVar1);
  if (*(char *)(lVar1 + 0xb1) == '\0') {
    if (param_1 == 0) {
      (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))
                (*(longlong **)(lVar1 + 0xe38),L"Transfer function:");
    }
  }
  else {
    if ((*(char *)(lVar1 + 0xb2) != '\0') && (param_1 == 0)) {
      (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))
                (*(longlong **)(lVar1 + 0xe38),L"Total resistance:");
    }
    if ((*(char *)(lVar1 + 0xb2) == '\0') && (param_1 == 0)) {
      (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))
                (*(longlong **)(lVar1 + 0xe38),L"Total impedance:");
    }
  }
  cVar3 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  iVar6 = 0;
  if (cVar3 == '\0') {
    uVar5 = FUN_0145e720();
    *(undefined8 *)PTR_DAT_020052f8 = uVar5;
    iVar6 = 0;
  }
  while (*(char *)(lVar1 + 0x92) == '\0') {
    cVar3 = FUN_01444810(1,lVar1,0,iVar6);
    if (cVar3 == '\0') break;
    if (iVar6 == 0) {
      FUN_019b9b30(lVar1);
    }
    FUN_00450070(&local_20,*(undefined8 *)(lVar1 + 0x68),&DAT_0145ec1c,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_20);
    FUN_00450070(&local_28,*(undefined8 *)(lVar1 + 0x68),&DAT_0145ec34,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_28);
    FUN_00450070(&local_30,*(undefined8 *)(lVar1 + 0x68),&DAT_0145ec44,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_30);
    iVar4 = FUN_004170c0(&DAT_0145ec54,*(undefined8 *)(lVar1 + 0x68),1);
    if (0 < iVar4) {
      iVar4 = FUN_004170c0(&DAT_0145ec54,*(undefined8 *)(lVar1 + 0x68),1);
      FUN_00416dc0(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x68),1,iVar4 + -1);
    }
    iVar4 = FUN_004170c0(&DAT_0145ec64,*(undefined8 *)(lVar1 + 0x68));
    if (0 < iVar4) {
      iVar4 = FUN_004170c0(&DAT_0145ec64,*(undefined8 *)(lVar1 + 0x68),1);
      FUN_00416dc0(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x68),1,iVar4 + -1);
    }
    if (param_1 == 0) {
      FUN_0145e6e0(lVar1);
    }
    else {
      FUN_0145e700(lVar1);
    }
    iVar6 = iVar6 + 1;
  }
  cVar3 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
  if (cVar3 == '\0') {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020052f8);
    *(undefined8 *)PTR_DAT_020052f8 = 0;
  }
  FUN_019b9b60(lVar1);
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
    uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02005ba8);
    thunk_FUN_03ab0e43(uVar5,9);
    (**(code **)(**(longlong **)PTR_DAT_02005ba8 + 600))(*(longlong **)PTR_DAT_02005ba8);
  }
  FUN_00414560(&local_30,3);
  return;
}

