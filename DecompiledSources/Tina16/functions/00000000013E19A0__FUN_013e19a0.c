/* Ghidra address: 013e19a0 */
/* Ghidra symbol: FUN_013e19a0 */


void FUN_013e19a0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,ulonglong param_8,
                 undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12,
                 double param_13,double param_14,undefined8 param_15)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff48;
  ulonglong uVar8;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_8);
  FUN_00414610(param_15);
  if (param_1 == 0) goto LAB_013e1e9b;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013e1a9c:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) goto LAB_013e1a9c;
  }
  local_30 = FUN_00498310(0,0);
  uVar5 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),&local_30);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar5;
  FUN_0043f750(&local_40,DAT_01f454a0);
  FUN_00416ba0(&local_38,param_15,local_40);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar5,local_38,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f454a0 = DAT_01f454a0 + 1;
  local_20 = 0;
  FUN_01cc5c60(param_1);
  FUN_01cc5cc0(param_1);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (param_13 != param_14) {
    FUN_01cc5c60(param_1);
    while( true ) {
      lVar6 = FUN_01cc5cc0(param_1);
      uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      if (lVar6 == 0) break;
      FUN_01cc0ac0(lVar6,param_13,param_14);
    }
  }
  uVar8 = param_8;
  FUN_00f16900(param_2,param_1,param_3,local_res20,param_5,param_6,CONCAT44(uVar3,param_7),param_8,
               param_9,param_10,param_11,&local_20,uVar5,2,0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis CurveWriter 1",local_20);
  lVar6 = local_20;
  *(undefined1 *)(local_20 + 0x68) = param_12;
  cVar2 = FUN_01ce8540(local_20);
  if ((cVar2 != '\0') || (*PTR_DAT_02005c10 != '\0')) {
    uVar3 = FUN_01ce83f0(lVar6);
    FUN_01ce6ab0(lVar6,uVar3,0);
  }
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_50);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_50);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar6 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar6,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),uVar8 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013e1e9b:
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_8);
  FUN_00414480(&param_15);
  return;
}

