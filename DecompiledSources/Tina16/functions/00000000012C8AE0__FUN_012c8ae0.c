/* Ghidra address: 012c8ae0 */
/* Ghidra symbol: FUN_012c8ae0 */


void FUN_012c8ae0(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_e8 = 0;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = 0;
  if (param_2 == '\0') {
    pwVar1 = *(wchar_t **)(param_1 + 0x988);
    if (pwVar1 == L"Noname") {
      bVar8 = true;
    }
    else if (pwVar1 == (wchar_t *)0x0) {
      bVar8 = false;
    }
    else {
      iVar4 = FUN_0043e420(pwVar1,L"Noname");
      bVar8 = iVar4 == 0;
    }
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    FUN_00724420(*(undefined8 *)(param_1 + 0x950),*(undefined8 *)PTR_DAT_02005010);
    FUN_00724380(*(undefined8 *)(param_1 + 0x950),*(undefined8 *)(param_1 + 0x988));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0xa8))(*(longlong **)(param_1 + 0x950));
    if (cVar2 == '\0') goto LAB_012c9232;
    FUN_00724270(*(undefined8 *)(param_1 + 0x950),&local_50);
    FUN_00414ad0(param_1 + 0x980,local_50);
    FUN_00441920(&local_60,*(undefined8 *)(param_1 + 0x980));
    FUN_004414c0(&local_58,local_60,0);
    FUN_00414ad0(param_1 + 0x988,local_58);
    local_78 = *(undefined8 *)(param_1 + 0x988);
    local_70 = 0x11;
    FUN_00442f70(&local_68,*(undefined8 *)(param_1 + 0x978),&local_78,0);
    FUN_0064de00(param_1,local_68);
  }
  *(undefined1 *)(param_1 + 0x990) = 1;
  FUN_00bac3d0(&local_30);
  (**(code **)(*local_30 + 0x118))(local_30,0);
  (**(code **)(*local_30 + 0x158))
            (local_30,&local_88,&DAT_012c93b4,L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(*local_30 + 0x98))(local_30,&local_80,local_88);
  (**(code **)(*local_30 + 0x148))(local_30,&local_90,L"testbench");
  (**(code **)(*local_30 + 0x108))(local_30,local_90);
  (**(code **)(*local_30 + 0x100))(local_30,&local_38);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_98);
  (**(code **)(*local_38 + 0x108))(local_38,L"rootfolder",local_98);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_a0);
  (**(code **)(*local_38 + 0x108))(local_38,L"resultfolder",local_a0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  FUN_00440030(&local_a8,uVar3,1);
  (**(code **)(*local_38 + 0x108))(local_38,L"showreport",local_a8);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780));
  FUN_00440030(&local_b0,uVar3,1);
  (**(code **)(*local_38 + 0x108))(local_38,L"filtergood",local_b0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788));
  FUN_00440030(&local_b8,uVar3,1);
  (**(code **)(*local_38 + 0x108))(local_38,L"savetest",local_b8);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790));
  FUN_00440030(&local_c0,uVar3,1);
  (**(code **)(*local_38 + 0x108))(local_38,L"saveasimage",local_c0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798));
  FUN_00440030(&local_c8,uVar3,1);
  (**(code **)(*local_38 + 0x108))(local_38,L"saveastext",local_c8);
  if (*(char *)(param_1 + 0x993) == '\0') {
    (**(code **)(*local_38 + 0x108))(local_38,L"testmode",L"simulation");
  }
  else {
    (**(code **)(*local_38 + 0x108))(local_38,L"testmode",L"measurement");
  }
  FUN_00440030(&local_d0,*(undefined1 *)(param_1 + 0x992),1);
  (**(code **)(*local_38 + 0x108))(local_38,L"multithread",local_d0);
  FUN_0043f750(&local_d8,*(undefined4 *)(param_1 + 0x994));
  (**(code **)(*local_38 + 0x108))(local_38,L"maxthread",local_d8);
  FUN_0043f750(&local_e0,*(undefined4 *)(param_1 + 0x998));
  (**(code **)(*local_38 + 0x108))(local_38,L"timeout",local_e0);
  iVar4 = FUN_006decb0();
  iVar7 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),iVar7);
      if ((*(uint *)(*(longlong *)(lVar5 + 0x18) + 0x62c) & 0x20) == 0x20) {
        (**(code **)(*local_30 + 0x148))(local_30,&local_40,L"testcase");
        lVar6 = FUN_006dd390(lVar5);
        (**(code **)(*local_40 + 0x108))(local_40,L"folder",*(undefined8 *)(lVar6 + 0x10));
        (**(code **)(*local_40 + 0x108))(local_40,L"circuit",*(undefined8 *)(lVar5 + 0x10));
        cVar2 = FUN_012c9650(param_1,lVar5,local_30,local_40);
        if (cVar2 != '\0') {
          (**(code **)(*local_38 + 0x98))(local_38,&local_e8,local_40);
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*local_30 + 0x180))(local_30,*(undefined8 *)(param_1 + 0x980),2);
LAB_012c9232:
  FUN_0041b800(&local_e8);
  FUN_00414560(&local_e0,8);
  FUN_00414560(&local_a0,2);
  FUN_0041b800(&local_90);
  FUN_0041b800(&local_88);
  FUN_0041b800(&local_80);
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00417840(&local_40,&LAB_00b9fca0,2);
  FUN_0041b800(&local_30);
  return;
}

