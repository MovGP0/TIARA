/* Ghidra address: 00ed1b80 */
/* Ghidra symbol: FUN_00ed1b80 */


void FUN_00ed1b80(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar6 = *(longlong **)(param_1 + 0x748);
  uVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
  (**(code **)(*(longlong *)plVar6[0x94] + 0x18))((longlong *)plVar6[0x94],&local_50,uVar2);
  FUN_00ea9ca0(&local_28,local_50);
  plVar6 = *(longlong **)(param_1 + 0x750);
  uVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
  (**(code **)(*(longlong *)plVar6[0x94] + 0x18))((longlong *)plVar6[0x94],&local_58,uVar2);
  FUN_00ea9ca0(&local_30,local_58);
  iVar3 = FUN_004170c0(&DAT_00ed2028,local_30,1);
  if (iVar3 < 1) {
    FUN_00414b50(&local_38,local_30);
    FUN_00414b50(&local_40,L"PACKAGE.FPL");
  }
  else {
    iVar3 = FUN_004170c0(&DAT_00ed2028,local_30,1);
    uVar2 = 0;
    if (local_30 != 0) {
      uVar2 = *(undefined4 *)(local_30 + -4);
    }
    FUN_00416dc0(&local_38,local_30,iVar3 + 1,uVar2);
    iVar3 = FUN_004170c0(&DAT_00ed2028,local_30,1);
    FUN_00416dc0(&local_60,local_30,1,iVar3 + -1);
    FUN_00416ba0(&local_40,local_60,L".FPL");
  }
  FUN_00ea9ef0(&local_68,local_40);
  lVar5 = FUN_00eba760(local_68);
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_00ea9ef0(&local_70,local_38);
    plVar6 = (longlong *)FUN_00eb9d90(lVar5,local_70);
  }
  if (plVar6 != (longlong *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (iVar4 <= iVar3) goto code_r0x00ed1fdf;
  }
  FUN_00ec9120(&local_20,*(undefined8 *)(param_1 + 0x8c0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x4a0),1,
               CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x908)));
  if (local_20 != 0) {
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      FUN_0043f750(&local_48,iVar3 + 1);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4a0);
      uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_48,uVar2);
    }
    plVar6 = *(longlong **)(param_1 + 0x710);
    FUN_00416cd0(&local_78,4,&DAT_00ed2074,local_48,&LAB_00ed2084,local_20);
    uVar2 = (**(code **)(*(longlong *)plVar6[0x94] + 0x78))((longlong *)plVar6[0x94],local_78);
    (**(code **)(*plVar6 + 0x268))(plVar6,uVar2);
    plVar6 = *(longlong **)(param_1 + 0x748);
    uVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
    (**(code **)(*(longlong *)plVar6[0x94] + 0x18))((longlong *)plVar6[0x94],&local_80,uVar2);
    FUN_00ea9ca0(&local_28,local_80);
    plVar6 = *(longlong **)(param_1 + 0x750);
    uVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
    (**(code **)(*(longlong *)plVar6[0x94] + 0x18))((longlong *)plVar6[0x94],&local_88,uVar2);
    FUN_00ea9ca0(&local_30,local_88);
    FUN_00ed3300(param_1,local_28,local_30);
    FUN_00ecbca0(param_1);
    plVar6 = *(longlong **)(param_1 + 0x858);
    uVar2 = (**(code **)(*plVar6 + 0x260))(plVar6);
    (**(code **)(*(longlong *)plVar6[0x9e] + 0x48))((longlong *)plVar6[0x9e],uVar2,1);
  }
code_r0x00ed1fdf:
  FUN_00414560(&local_88,0xe);
  return;
}

