/* Ghidra address: 012fc960 */
/* Ghidra symbol: FUN_012fc960 */


void FUN_012fc960(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  bool local_5a;
  bool local_59;
  wchar_t *local_58;
  int local_4c;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_70 = auStack_138;
  local_118 = 0;
  local_110 = (longlong *)0x0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_20 = 0;
  uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_012fb490(param_1,uVar4);
  uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,0,uVar4);
  if (param_2 == '\0') {
    local_58 = *(wchar_t **)(param_1 + 0xab0);
    if (local_58 == L"Noname") {
      local_59 = true;
    }
    else if (local_58 == (wchar_t *)0x0) {
      local_59 = false;
    }
    else {
      iVar3 = FUN_0043e420(local_58,L"Noname");
      local_59 = iVar3 == 0;
    }
    local_5a = local_59;
  }
  else {
    local_5a = true;
  }
  if (local_5a != false) {
    FUN_00724420(*(undefined8 *)(param_1 + 0x778),*(undefined8 *)PTR_DAT_02005010);
    FUN_00724380(*(undefined8 *)(param_1 + 0x778),*(undefined8 *)(param_1 + 0xab0));
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0xa8))(*(longlong **)(param_1 + 0x778));
    if (cVar1 == '\0') goto LAB_012fd2ef;
    FUN_00724270(*(undefined8 *)(param_1 + 0x778),&local_78);
    FUN_00414ad0(param_1 + 0xaa8,local_78);
    FUN_00441920(&local_88,*(undefined8 *)(param_1 + 0xaa8));
    FUN_004414c0(&local_80,local_88,0);
    FUN_00414ad0(param_1 + 0xab0,local_80);
    local_a0 = *(undefined8 *)(param_1 + 0xab0);
    local_98 = 0x11;
    FUN_00442f70(&local_90,*(undefined8 *)(param_1 + 0xaa0),&local_a0,0);
    FUN_0064de00(param_1,local_90);
  }
  *(undefined1 *)(param_1 + 0xab8) = 1;
  FUN_00bac3d0(&local_28);
  (**(code **)(*local_28 + 0x118))(local_28,0);
  (**(code **)(*local_28 + 0x158))
            (local_28,&local_b0,&DAT_012fd4a0,L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(*local_28 + 0x98))(local_28,&local_a8,local_b0);
  (**(code **)(*local_28 + 0x148))(local_28,&local_b8,L"testbench");
  (**(code **)(*local_28 + 0x108))(local_28,local_b8);
  (**(code **)(*local_28 + 0x100))(local_28,&local_30);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_c0);
  (**(code **)(*local_30 + 0x108))(local_30,L"rootFolder",local_c0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c0),&local_c8);
  (**(code **)(*local_30 + 0x108))(local_30,L"resultFolder",local_c8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_d0);
  (**(code **)(*local_30 + 0x108))(local_30,L"dataFileName",local_d0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  FUN_00440030(&local_d8,uVar2,1);
  (**(code **)(*local_30 + 0x108))(local_30,L"showReport",local_d8);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  FUN_00440030(&local_e0,uVar2,1);
  (**(code **)(*local_30 + 0x108))(local_30,L"filterGood",local_e0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  FUN_00440030(&local_e8,uVar2,1);
  (**(code **)(*local_30 + 0x108))(local_30,L"saveTest",local_e8);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  FUN_00440030(&local_f0,uVar2,1);
  (**(code **)(*local_30 + 0x108))(local_30,L"saveAsImage",local_f0);
  if (*(char *)(param_1 + 0xabd) == '\0') {
    (**(code **)(*local_30 + 0x108))(local_30,L"testMode",L"simulation");
  }
  else {
    (**(code **)(*local_30 + 0x108))(local_30,L"testMode",L"measurement");
  }
  FUN_00440030(&local_f8,*(undefined1 *)(param_1 + 0xaba),1);
  (**(code **)(*local_30 + 0x108))(local_30,L"multiThread",local_f8);
  FUN_0043f750(&local_100,*(undefined4 *)(param_1 + 0xac0));
  (**(code **)(*local_30 + 0x108))(local_30,L"maxThread",local_100);
  FUN_0043f750(&local_108,*(undefined4 *)(param_1 + 0xac4));
  (**(code **)(*local_30 + 0x108))(local_30,L"timeout",local_108);
  FUN_00414480(&local_20);
  local_68 = *(undefined8 *)(param_1 + 0xad8);
  FUN_00448450(&local_20,local_68,PTR_DAT_02004830);
  (**(code **)(*local_30 + 0x108))(local_30,L"version",local_20);
  FUN_00414480(&local_20);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x900) + 0x260))(*(longlong **)(param_1 + 0x900));
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x260))(*(longlong **)(param_1 + 0x8f8))
    ;
    if (cVar1 != '\0') {
      (**(code **)(*local_30 + 0x108))(local_30,L"simMode",L"Single");
    }
  }
  else {
    (**(code **)(*local_30 + 0x108))(local_30,L"simMode",&DAT_012fd720);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x260))(*(longlong **)(param_1 + 0x9f0));
  FUN_0043f750(&local_110,uVar2);
  (**(code **)(*local_30 + 0x108))(local_30,L"manufacturer",local_110);
  iVar3 = FUN_006decb0();
  local_4c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_40 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),local_4c);
      if ((*(uint *)(*(longlong *)(local_40 + 0x18) + 4) & 0x20) == 0x20) {
        (**(code **)(*local_28 + 0x148))(local_28,&local_38,L"testcase");
        lVar5 = FUN_006dd390(local_40);
        (**(code **)(*local_38 + 0x108))(local_38,L"folder",*(undefined8 *)(lVar5 + 0x10));
        (**(code **)(*local_38 + 0x108))(local_38,L"circuit",*(undefined8 *)(local_40 + 0x10));
        cVar1 = FUN_012fd990(param_1,local_40,local_28,local_38);
        if (cVar1 != '\0') {
          (**(code **)(*local_30 + 0x98))(local_30,&local_118,local_38);
        }
      }
      local_4c = local_4c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_28 + 0x180))(local_28,*(undefined8 *)(param_1 + 0xaa8),2);
LAB_012fd2ef:
  FUN_0041b800(&local_118);
  FUN_00414560(&local_110,8);
  FUN_00414560(&local_d0,3);
  FUN_0041b800(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414560(&local_90,3);
  FUN_00414480(&local_78);
  FUN_00414480(&local_48);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(&local_28);
  FUN_00414480(&local_20);
  return;
}

