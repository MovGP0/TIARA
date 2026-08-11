/* Ghidra address: 013e5360 */
/* Ghidra symbol: FUN_013e5360 */


void FUN_013e5360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar11;
  undefined8 *puVar10;
  ulonglong in_stack_ffffffffffffff40;
  uint uVar12;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_1 == 0) goto LAB_013e5919;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (0 < iVar2) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
    local_20 = (**(code **)(*plVar3 + 0x30))(plVar3,0);
    plVar3 = (longlong *)FUN_01ce8ac0(local_20,param_2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xc0))
                (plVar3,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(undefined8 *)PTR_DAT_02001e00);
      FUN_01ce0100(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),1);
      goto LAB_013e5919;
    }
  }
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013e54d0:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar4 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar4 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) goto LAB_013e54d0;
  }
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
  }
  else {
    local_40 = FUN_00498310(0,0);
    uVar5 = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
    uVar4 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,uVar5,&local_40);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar4;
    FUN_0043f750(&local_50,DAT_01f45484);
    FUN_00416ba0(&local_48,L"XY Plot",local_50);
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar4,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    DAT_01f45484 = DAT_01f45484 + 1;
  }
  uVar5 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_1);
  local_20 = 0;
  uVar8 = 0xbff0000000000000;
  uVar9 = 0x3ff0000000000000;
  uVar12 = 0;
  FUN_00f1b8c0(0,L"Function-X",0,1,CONCAT44(uVar7,2),0xbff0000000000000,0x3ff0000000000000,
               CONCAT44(uVar11,2),L"Function-Y",in_stack_ffffffffffffff40 & 0xffffffffffffff00,1,2,
               0xbff0000000000000,0x3ff0000000000000,2,1,&local_20,uVar4);
  local_24 = 1;
  puVar10 = &local_20;
  FUN_00f1c5c0(uVar5,param_1,param_2,&local_24,2,uVar8 & 0xffffffff00000000,
               uVar9 & 0xffffffff00000000,puVar10,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(undefined8 *)PTR_DAT_02001e00,uVar4,uVar12 & 0xffffff00);
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar3 + 0x80))(plVar3,L"Analysis Result 1",local_20);
  FUN_01ad9580(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0,0);
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_60);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_60);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar3 = *(longlong **)(lVar1 + 0x10);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_01cec9c0(lVar1,iVar2 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               (ulonglong)puVar10 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar4,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e5919:
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_38,2);
  return;
}

