/* Ghidra address: 013e0a40 */
/* Ghidra symbol: FUN_013e0a40 */


void FUN_013e0a40(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) != '\0') {
    uVar4 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar4 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) goto LAB_013e0b24;
  }
  FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
LAB_013e0b24:
  local_30 = FUN_00498310(0,0);
  puVar7 = &local_30;
  uVar4 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar7);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = uVar4;
  FUN_0043f750(&local_40,DAT_01f4544c);
  FUN_00416ba0(&local_38,L"Poles and Zeros",local_40);
  FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),uVar4,local_38,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  DAT_01f4544c = DAT_01f4544c + 1;
  local_20[0] = 0;
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,&local_48,0x11d);
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,&local_50,0x11e);
  uVar8 = 0;
  FUN_00f18d90(local_48,0,1,2,local_50,(ulonglong)puVar7 & 0xffffffffffffff00,1,2,local_20,uVar4,
               *(undefined8 *)PTR_DAT_02002dd8);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) + 0xd8);
  (**(code **)(*plVar1 + 0x80))(plVar1,L"Analysis Result 1",local_20[0]);
  FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_60);
  FUN_01acf9e0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),local_60);
  FUN_01ad0490(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01acfa60(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01adc0f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,0);
  lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar2 + 0x10);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar2,iVar3 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),uVar8 & 0xffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar4,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
  FUN_00414560(&local_50,4);
  FUN_00414480(&local_28);
  return;
}

