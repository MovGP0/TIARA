/* Ghidra address: 013d3ef0 */
/* Ghidra symbol: FUN_013d3ef0 */


void FUN_013d3ef0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  ulonglong in_stack_ffffffffffffff30;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013d4506;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,param_2);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d3fc0:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) goto LAB_013d3fc0;
  }
  local_50[0] = FUN_00498310(0,0);
  puVar11 = local_50;
  uVar5 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar11);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar5;
  FUN_0043f750(&local_60,DAT_01f45428);
  FUN_00416ba0(&local_58,L"DC result",local_60);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar5,local_58,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45428 = DAT_01f45428 + 1;
  local_30[0] = 0;
  uVar6 = (ulonglong)(byte)*PTR_DAT_02005438;
  if (uVar6 < 3) {
    if (uVar6 == 2) {
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_38,0x125);
    }
    else {
      if (uVar6 == 0) goto LAB_013d414c;
      if (uVar6 == 1) {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_38,0x126);
      }
    }
  }
  else if (uVar6 - 3 < 2) {
LAB_013d414c:
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_38,0x124);
  }
  else if (uVar6 - 5 < 2) {
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_38,0x123);
  }
  FUN_00414b50(&local_38,*(undefined8 *)(PTR_DAT_02004010 + 0x7ce));
  if (PTR_DAT_02004010[0x296] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x434) == '\0') {
    uVar7 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
  }
  else {
    uVar7 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_1);
  }
  FUN_01cc5c60(param_1);
  lVar8 = FUN_01cc5cc0(param_1);
  if ((*(int *)(PTR_DAT_02004010 + 0xb9) < 2) && (lVar8 != 0)) {
    FUN_01cc1400(lVar8,&local_40,*(undefined8 *)PTR_DAT_02001f18);
  }
  else {
    FUN_00414b50(&local_40,L"Output");
  }
  uVar3 = 0;
  local_30[0] = FUN_01adfeb0(uVar5,param_1,0,0,0,(ulonglong)puVar11 & 0xffffffffffffff00,0);
  if (local_30[0] == 0) {
    in_stack_ffffffffffffff30 = local_40;
    FUN_00f16900(uVar7,param_1,0,local_38,uVar9,1,CONCAT44(uVar3,2),local_40,0,1,2,local_30,uVar5,1,
                 0);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
    (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_30[0]);
    lVar8 = local_30[0];
    cVar2 = FUN_01ce8540(local_30[0]);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(lVar8);
      FUN_01ce6ab0(lVar8,uVar3,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_70);
    FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_70);
    FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_70);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_70);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  lVar8 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar8 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar8,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d4506:
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,2);
  return;
}

