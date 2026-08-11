/* Ghidra address: 013d45f0 */
/* Ghidra symbol: FUN_013d45f0 */


void FUN_013d45f0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff48;
  ulonglong uVar11;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  if (param_1 == 0) goto LAB_013d4a9b;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,param_2);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d46bf:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_013d46bf;
  }
  local_30 = FUN_00498310(0,0);
  uVar10 = *(ulonglong *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
  uVar5 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,uVar10,&local_30);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar5;
  FUN_0043f750(&local_40,DAT_01f45428);
  FUN_00416ba0(&local_38,L"Temperature",local_40);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar5,local_38,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45428 = DAT_01f45428 + 1;
  local_20 = 0;
  uVar6 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
  FUN_01cc5c60(param_1);
  lVar7 = FUN_01cc5cc0(param_1);
  if ((*(int *)(PTR_DAT_02004010 + 0xb9) < 2) && (lVar7 != 0)) {
    FUN_01cc1400(lVar7,&local_28,*(undefined8 *)PTR_DAT_02001f18);
  }
  else {
    FUN_00414b50(&local_28,L"Output");
  }
  uVar8 = FUN_00b89270();
  FUN_00b8e520(uVar8,&local_48,0x127);
  uVar11 = local_28;
  FUN_00f16900(uVar6,param_1,0,local_48,uVar10 & 0xffffffffffffff00,1,CONCAT44(uVar3,2),local_28,0,1
               ,2,&local_20,uVar5,1,0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_20);
  uVar5 = local_20;
  cVar2 = FUN_01ce8540(local_20);
  if (cVar2 != '\0') {
    uVar3 = FUN_01ce83f0(uVar5);
    FUN_01ce6ab0(uVar5,uVar3,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_58);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_58);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar7 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar7,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),uVar11 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d4a9b:
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_28);
  return;
}

