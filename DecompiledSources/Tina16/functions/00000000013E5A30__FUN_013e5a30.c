/* Ghidra address: 013e5a30 */
/* Ghidra symbol: FUN_013e5a30 */


void FUN_013e5a30(longlong param_1,longlong param_2,char param_3,double param_4)

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
  undefined8 *puVar11;
  wchar_t *in_stack_ffffffffffffff20;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  wchar_t *local_30;
  longlong local_28;
  longlong local_20;
  
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = (wchar_t *)0x0;
  local_38 = 0;
  if ((param_1 == 0) && (param_2 == 0)) goto LAB_013e61f9;
  FUN_013d2e70();
  if (param_4 == 0.0) {
    FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,1);
  }
  else {
    FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013e5b54:
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
    if (bVar9) goto LAB_013e5b54;
  }
  local_40 = FUN_00498310(0,0);
  puVar11 = &local_40;
  uVar5 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar11);
  if (param_3 == '\0') {
    FUN_00414b50(&local_38,&DAT_013e6298);
  }
  else {
    FUN_00414b50(&local_38,L" preview ");
  }
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar5;
  FUN_0043f750(&local_50,DAT_01f4549c);
  FUN_00416cd0(&local_48,3,L"Mixed Transient",local_38,local_50);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar5,local_48,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  if ((param_1 != 0) && (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10))) {
    DAT_01f4549c = DAT_01f4549c + 1;
    uVar10 = 0;
    puVar11 = (undefined8 *)((ulonglong)puVar11 & 0xffffffffffffff00);
    uVar3 = 0;
    local_20 = FUN_01adfeb0(uVar5,param_1,0,0,0,puVar11,0);
    if (local_20 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_1);
      FUN_01cc5c60(param_1);
      lVar7 = FUN_01cc5cc0(param_1);
      if ((*(int *)(PTR_DAT_02004010 + 0xb9) < 2) && (lVar7 != 0)) {
        FUN_01cc1400(lVar7,&local_30,*(undefined8 *)PTR_DAT_02001f18);
      }
      else {
        FUN_00414b50(&local_30,L"Output");
      }
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_58,0x128);
      puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
      in_stack_ffffffffffffff20 = local_30;
      FUN_00f16900(uVar6,param_1,0,local_58,uVar10 & 0xffffffffffffff00,puVar11,CONCAT44(uVar3,2),
                   local_30,0,1,2,&local_20,uVar5,1,0);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_20);
      lVar7 = local_20;
      cVar2 = FUN_01ce8540(local_20);
      if ((cVar2 != '\0') || (*PTR_DAT_02005c10 != '\0')) {
        uVar3 = FUN_01ce83f0(lVar7);
        FUN_01ce6ab0(lVar7,uVar3,0);
      }
      FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
    }
    *(double *)(local_20 + 0xa0) = param_4;
  }
  if ((param_2 != 0) && (0 < *(int *)(*(longlong *)(param_2 + 8) + 0x10))) {
    uVar10 = 0;
    uVar3 = 0;
    local_28 = FUN_01adfeb0(uVar5,param_2,1,1,0,(ulonglong)puVar11 & 0xffffffffffffff00,0);
    if (local_28 == 0) {
      uVar6 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_2);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_60,0x128);
      in_stack_ffffffffffffff20 = L"Output";
      FUN_00f16900(uVar6,param_2,1,local_60,uVar10 & 0xffffffffffffff00,1,CONCAT44(uVar3,2),
                   L"Output",0,1,2,&local_28,uVar5,1,1);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
      (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_28);
      lVar7 = local_28;
      cVar2 = FUN_01ce8540(local_28);
      if (cVar2 != '\0') {
        uVar3 = FUN_01ce83f0(lVar7);
        FUN_01ce6ab0(lVar7,uVar3,0);
      }
      FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
    }
    *(double *)(local_28 + 0xa0) = param_4;
    if (local_20 != 0) {
      *(undefined4 *)(local_20 + 0x98) = 8;
    }
    if (local_28 != 0) {
      *(undefined4 *)(local_28 + 0x98) = 8;
    }
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_70);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_70);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  if ((0 < *(int *)(*(longlong *)(param_2 + 8) + 0x10)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10))) {
    *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0x10d) = 1;
  }
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar7 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar7,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               (ulonglong)in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e61f9:
  FUN_00414560(&local_60,4);
  FUN_00414560(&local_38,2);
  return;
}

