/* Ghidra address: 013d39a0 */
/* Ghidra symbol: FUN_013d39a0 */


void FUN_013d39a0(longlong param_1)

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
  ulonglong uVar10;
  undefined8 *puVar11;
  wchar_t *in_stack_ffffffffffffff50;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013d3e31;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d3a47:
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
    if (bVar9) goto LAB_013d3a47;
  }
  local_30[0] = FUN_00498310(0,0);
  puVar11 = local_30;
  uVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar11);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar6;
  FUN_0043f750(&local_40,DAT_01f45454);
  FUN_00416ba0(&local_38,L"Digital Transient",local_40);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar6,local_38,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45454 = DAT_01f45454 + 1;
  uVar10 = 0;
  uVar4 = 0;
  local_20 = FUN_01adfeb0(uVar6,param_1,0,0,0,(ulonglong)puVar11 & 0xffffffffffffff00,0);
  if (local_20 == 0) {
    uVar7 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_1);
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_48,0x128);
    in_stack_ffffffffffffff50 = L"Output";
    FUN_00f16900(uVar7,param_1,1,local_48,uVar10 & 0xffffffffffffff00,1,CONCAT44(uVar4,2),L"Output",
                 0,1,2,&local_20,uVar6,1,0);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
    (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_20);
    lVar2 = local_20;
    cVar3 = FUN_01ce8540(local_20);
    if (cVar3 != '\0') {
      uVar4 = FUN_01ce83f0(lVar2);
      FUN_01ce6ab0(lVar2,uVar4,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_58);
    FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_58);
    FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_58);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_58);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar2 + 0x10);
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar2,iVar5 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               (ulonglong)in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar6 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar6,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d3e31:
  FUN_00414560(&local_48,3);
  return;
}

