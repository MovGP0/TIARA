/* Ghidra address: 0145f1a0 */
/* Ghidra symbol: FUN_0145f1a0 */


void FUN_0145f1a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res8 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_019b5af0(*(undefined8 *)PTR_DAT_02002dd8);
  lVar1 = *(longlong *)PTR_DAT_02002dd8;
  *(undefined8 *)(lVar1 + 0xe78) = param_2;
  FUN_00ef4850(lVar1);
  *(undefined1 *)(lVar1 + 0xb4) = 3;
  FUN_0145e590();
  FUN_0145e640(lVar1);
  (**(code **)(**(longlong **)(lVar1 + 0xe38) + 0x78))(*(longlong **)(lVar1 + 0xe38),local_res8[0]);
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
    FUN_00450070(&local_20,*(undefined8 *)(lVar1 + 0x68),&DAT_0145f4a8,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_20);
    FUN_00450070(&local_28,*(undefined8 *)(lVar1 + 0x68),&DAT_0145f4c0,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_28);
    FUN_00450070(&local_30,*(undefined8 *)(lVar1 + 0x68),&LAB_0145f4d0,0,0);
    FUN_00414ad0(lVar1 + 0x68,local_30);
    FUN_0145dec0(lVar1,0);
    iVar5 = iVar5 + 1;
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
    uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02005ba8);
    thunk_FUN_03ab0e43(uVar4,9);
    (**(code **)(**(longlong **)PTR_DAT_02005ba8 + 600))(*(longlong **)PTR_DAT_02005ba8);
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res8);
  return;
}

