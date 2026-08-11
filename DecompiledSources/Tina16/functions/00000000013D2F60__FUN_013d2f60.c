/* Ghidra address: 013d2f60 */
/* Ghidra symbol: FUN_013d2f60 */


void FUN_013d2f60(longlong param_1,char param_2,double param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013d35eb;
  FUN_01cc7d00(*(undefined8 *)(param_1 + 8));
  FUN_013d2e70();
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x434);
  if (param_3 == 0.0) {
    FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,1);
  }
  else {
    FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d3096:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar6 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar6 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) goto LAB_013d3096;
  }
  local_50[0] = FUN_00498310(0,0);
  puVar12 = local_50;
  lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
  FUN_00414ad0(lVar7 + 0x60,L"transient");
  *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar7;
  if (param_2 == '\0') {
    FUN_00414b50(&local_40,&DAT_013d36b8);
  }
  else {
    FUN_00414b50(&local_40,L" preview ");
  }
  FUN_0043f750(&local_60,DAT_01f45448);
  FUN_00416cd0(&local_58,3,L"Transient",local_40,local_60);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_58,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f45448 = DAT_01f45448 + 1;
  uVar11 = 0;
  uVar6 = 0;
  local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
  if (local_30 == 0) {
    uVar8 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
    FUN_01cc5c60(param_1);
    lVar9 = FUN_01cc5cc0(param_1);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (lVar9 == 0) {
      FUN_00de8980(&local_38,0x442,*(undefined8 *)PTR_DAT_02001f18);
    }
    else {
      FUN_01cc1400(lVar9,&local_38,*(undefined8 *)PTR_DAT_02001f18);
      while (uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20), lVar9 != 0) {
        FUN_01cc1400(lVar9,&local_68,*(undefined8 *)PTR_DAT_02001f18);
        iVar4 = FUN_00416db0(local_38,local_68);
        if (iVar4 != 0) {
          FUN_00de8980(&local_38,0x442,*(undefined8 *)PTR_DAT_02001f18);
        }
        lVar9 = FUN_01cc5cc0(param_1);
      }
    }
    if (1 < *(int *)(PTR_DAT_02004010 + 0xb9)) {
      FUN_00de8980(&local_38,0x442,*(undefined8 *)PTR_DAT_02001f18);
    }
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_70,0x128);
    in_stack_ffffffffffffff20 = local_38;
    FUN_00f16900(uVar8,param_1,0,local_70,uVar11 & 0xffffffffffffff00,1,CONCAT44(uVar5,2),local_38,0
                 ,1,2,&local_30,lVar7,1,0);
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
    (**(code **)(*plVar2 + 0x80))(plVar2,L"Analysis Result 1",local_30);
    lVar7 = local_30;
    cVar3 = FUN_01ce8540(local_30);
    if ((cVar3 != '\0') || (*PTR_DAT_02005c10 != '\0')) {
      uVar5 = FUN_01ce83f0(lVar7);
      FUN_01ce6ab0(lVar7,uVar5,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_80);
    FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_80);
    FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  }
  *(double *)(local_30 + 0xa0) = param_3;
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_80);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_80);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_013e4fd0(uVar1);
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar2 = *(longlong **)(lVar7 + 0x10);
  iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_01cec9c0(lVar7,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar6 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar6,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d35eb:
  FUN_00414560(&local_70,4);
  FUN_00414560(&local_40,2);
  return;
}

