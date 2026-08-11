/* Ghidra address: 018ad980 */
/* Ghidra symbol: FUN_018ad980 */


void FUN_018ad980(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x841) = 0;
  FUN_0189d4e0(*(undefined8 *)(param_1 + 0x838),1);
  uVar5 = FUN_018af290(param_1);
  uVar6 = FUN_018af290(param_1);
  uVar6 = FUN_0196f540(uVar6);
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x288))
            (*(longlong **)(param_1 + 0x848),uVar5,uVar6);
  lVar7 = FUN_018af290(param_1);
  lVar7 = *(longlong *)(lVar7 + 0x220);
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x128))
            (*(longlong **)(param_1 + 0x780),*(undefined1 *)(lVar7 + 8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),(*(uint *)(lVar7 + 10) & 1) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),(*(uint *)(lVar7 + 10) & 2) != 0);
  uVar1 = *(uint *)(lVar7 + 10);
  if (((uVar1 & 4) == 0) && (uVar1 = *(uint *)(lVar7 + 10), (uVar1 & 8) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),uVar4);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),(*(uint *)(lVar7 + 10) & 0x20) != 0);
  if (((*(uint *)(lVar7 + 10) & 0x40000) == 0) || (*(char *)(lVar7 + 9) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(lVar7 + 10) >> 8),1);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x808),uVar4);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 2000),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x778),(*(uint *)(lVar7 + 10) & 0x10) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),(*(uint *)(lVar7 + 10) & 0x10) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),(*(uint *)(lVar7 + 10) & 0x10) != 0);
  if (((*(uint *)(lVar7 + 10) & 0x10) == 0) || ((*(uint *)(lVar7 + 10) & 0x2000) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(lVar7 + 10) >> 8),1);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c0),uVar4);
  if ((*(uint *)(lVar7 + 10) & 0x10) == 0) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),0);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),(*(uint *)(lVar7 + 10) & 0x40) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),(*(uint *)(lVar7 + 10) & 0x40) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),(*(uint *)(lVar7 + 10) & 0x80) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),(*(uint *)(lVar7 + 10) & 0x200) != 0);
  if ((*(char *)(*(longlong *)(param_1 + 0x700) + 0xa9) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x780) + 0xa9) == '\0')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),0);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),(*(uint *)(lVar7 + 10) & 0x400) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),(*(uint *)(lVar7 + 10) & 0x400) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),(*(uint *)(lVar7 + 10) & 0x400) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),(*(uint *)(lVar7 + 10) & 0x400) != 0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),(*(uint *)(lVar7 + 10) & 0x400) != 0);
  if ((*(uint *)(lVar7 + 10) & 0x400) == 0) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x770),0);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),(*(uint *)(lVar7 + 10) & 0x1000) == 0);
  if (*(char *)(lVar7 + 0xf) != '\0') {
    FUN_00800700(param_1,2);
  }
  if (*(char *)(lVar7 + 0x10) != '\0') {
    FUN_007ffc60(param_1,1);
  }
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_018a8d30(*(undefined8 *)(param_1 + 0x848),*(undefined8 *)(lVar7 + 0x20));
  }
  else {
    FUN_018a8d80(*(undefined8 *)(param_1 + 0x848),*(char *)(lVar7 + 0x28));
  }
  FUN_006fc970(*(undefined8 *)(param_1 + 0x6d8),*(undefined1 *)(lVar7 + 0x1c));
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x718) + 0x4f0));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x90))(plVar2);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_018adfe8);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_018adffc);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_018ae010);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"100%");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"150%");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,L"200%");
  uVar5 = FUN_0180bfb0();
  FUN_01809b60(uVar5,&local_20,L"zmPageWidth");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_20);
  uVar5 = FUN_0180bfb0();
  FUN_01809b60(uVar5,&local_28,L"zmWholePage");
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar2 + 0x78))(plVar2,local_28);
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x718) + 0x4f0));
  lVar7 = FUN_018af290(param_1);
  if (*(longlong *)(*(longlong *)(lVar7 + 0x240) + 0x38) == 0) {
    FUN_0180bfe0(&local_30,100);
    FUN_0064de00(param_1,local_30);
  }
  else {
    lVar7 = FUN_018af290(param_1);
    FUN_0064de00(param_1,*(undefined8 *)(*(longlong *)(lVar7 + 0x240) + 0x38));
  }
  FUN_018b0eb0(param_1);
  pcVar8 = (code *)FUN_00411550(param_1,0xffc5);
  cVar3 = (*pcVar8)(param_1);
  if (cVar3 != '\0') {
    pcVar8 = (code *)FUN_00411550(param_1,0xffb1);
    (*pcVar8)(param_1,1);
  }
  FUN_018ae240(param_1);
  FUN_0064dd50(param_1,*(undefined8 *)(param_1 + 0x7b8));
  FUN_00414560(&local_30,3);
  return;
}

