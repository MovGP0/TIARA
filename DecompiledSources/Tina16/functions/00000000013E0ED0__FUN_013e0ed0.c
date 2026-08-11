/* Ghidra address: 013e0ed0 */
/* Ghidra symbol: FUN_013e0ed0 */


void FUN_013e0ed0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar8;
  wchar_t *pwVar9;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013e12a7;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013e0f6b:
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
    if (bVar6) goto LAB_013e0f6b;
  }
  local_30[0] = FUN_00498310(0,0);
  uVar7 = *(ulonglong *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
  uVar4 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,uVar7,local_30);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar4;
  FUN_0043f750(&local_40,DAT_01f45494);
  FUN_00416ba0(&local_38,L"STATISTIC",local_40);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar4,local_38,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45494 = DAT_01f45494 + 1;
  local_20[0] = 0;
  uVar5 = FUN_01cc6f70(&PTR_FUN_01cbf328,1,param_1);
  pwVar9 = L"Samples";
  FUN_00f16900(uVar5,param_1,4,L"Values",uVar7 & 0xffffffffffffff00,1,CONCAT44(uVar8,2),L"Samples",0
               ,0,0,local_20,uVar4,1,0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_20[0]);
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_50);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_50);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar2 + 0x10);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar2,iVar3 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               (ulonglong)pwVar9 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar4,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e12a7:
  FUN_00414560(&local_40,2);
  return;
}

