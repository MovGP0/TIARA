/* Ghidra address: 013dd1c0 */
/* Ghidra symbol: FUN_013dd1c0 */


void FUN_013dd1c0(longlong param_1,ulonglong param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong local_res10 [2];
  longlong local_res20;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffff08;
  uint uVar10;
  ulonglong in_stack_ffffffffffffff10;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  if (param_1 == 0) goto LAB_013dd921;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013dd2e1:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) goto LAB_013dd2e1;
  }
  uVar10 = (uint)(in_stack_ffffffffffffff08 >> 0x20);
  if (param_3 == '\0') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"HB - Amplitude/Phase");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_48,DAT_01f4547c);
    FUN_00416ba0(&local_28,local_30,local_48);
    DAT_01f4547c = DAT_01f4547c + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbddf0,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_58,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_50,4,local_58,&DAT_013dda28,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_60,0x13c);
    FUN_00416ad0(&local_60,L" [#V]");
    in_stack_ffffffffffffff08 = (ulonglong)uVar10 << 0x20;
    in_stack_ffffffffffffff10 = local_60;
    FUN_00f16900(uVar5,param_1,2,local_50,uVar9 & 0xffffffffffffff00,1,in_stack_ffffffffffffff08,
                 local_60,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_70);
    FUN_01acf9e0(lVar6,local_70);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  if (param_3 == '\x02') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"HB - Amplitude A/Amplitude B");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_78,DAT_01f45480);
    FUN_00416ba0(&local_28,local_30,local_78);
    DAT_01f45480 = DAT_01f45480 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbe398,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_88,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_80,4,local_88,&DAT_013dda28,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_90,0x13c);
    FUN_00416ad0(&local_90,&DAT_013ddae0);
    in_stack_ffffffffffffff10 = local_90;
    FUN_00f16900(uVar5,param_1,2,local_80,uVar9 & 0xffffffffffffff00,1,
                 in_stack_ffffffffffffff08 & 0xffffffff00000000,local_90,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 5",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_70);
    FUN_01acf9e0(lVar6,local_70);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar6 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar6,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013dd921:
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_60,4);
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

