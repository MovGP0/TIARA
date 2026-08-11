/* Ghidra address: 013e1f90 */
/* Ghidra symbol: FUN_013e1f90 */


void FUN_013e1f90(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong uVar10;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_1 == 0) goto LAB_013e2449;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013e2048:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar6 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar6 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_013e2048;
  }
  local_40[0] = FUN_00498310(0,0);
  uVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar6;
  FUN_0043f750(&local_50,DAT_01f45498);
  FUN_00416ba0(&local_48,L"Target setting result",local_50);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar6,local_48,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45498 = DAT_01f45498 + 1;
  local_20 = 0;
  uVar7 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
  FUN_01cc5c60(param_1);
  FUN_01cc5cc0(param_1);
  if (param_2 == '\0') {
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_28,0x124);
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_30,0x112);
  }
  else {
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_28,0x129);
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_30,0x11c);
  }
  uVar10 = local_30;
  FUN_00f16900(uVar7,param_1,0,local_28,2,1,CONCAT44(uVar4,2),local_30,0,1,2,&local_20,uVar6,1,0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Target setting result",local_20);
  uVar6 = local_20;
  cVar3 = FUN_01ce8540(local_20);
  if ((cVar3 != '\0') || (*PTR_DAT_02005c10 != '\0')) {
    uVar4 = FUN_01ce83f0(uVar6);
    FUN_01ce6ab0(uVar6,uVar4,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_60);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_60);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar2 + 0x10);
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar2,iVar5 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),uVar10 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar6 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar6,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e2449:
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,2);
  return;
}

