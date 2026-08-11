/* Ghidra address: 01304220 */
/* Ghidra symbol: FUN_01304220 */


void FUN_01304220(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_res10 [3];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_00685410(&PTR_FUN_00670158,1,param_1);
  FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(local_40,L"comB_RefSel",local_48);
  (**(code **)(*plVar2 + 0x50))(plVar2,local_40[0]);
  FUN_0064de00(plVar2,0);
  FUN_0064cb30(plVar2,0xa0);
  FUN_0064cbf0(plVar2,100);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x850) + 0x4b0);
  FUN_0064cb90(plVar2,(*(int *)(*(longlong *)(param_1 + 0x850) + 0x18) + *(int *)(lVar1 + 0x38)) -
                      *(int *)(lVar1 + 0x14));
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x850) + 0x18);
  *plVar3 = *plVar3 + (longlong)*(int *)((longlong)plVar2 + 0x9c);
  lVar1 = plVar2[0x13];
  plVar3 = (longlong *)FUN_00689210(&PTR_FUN_006747f8,1,param_1);
  FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_50,L"cB_RefName",local_58);
  (**(code **)(*plVar3 + 0x50))(plVar3,local_50);
  FUN_0064de00(plVar3,local_res10[0]);
  FUN_0064cbf0(plVar3,0x96);
  FUN_0064dfe0(plVar3,0);
  FUN_0064dfb0(plVar3,1);
  FUN_00414ad0(plVar3 + 0x1e,local_res10[0]);
  FUN_0064cb90(plVar3,*(int *)((longlong)plVar2 + 0x94) + 2);
  plVar3[0x30] = param_1;
  plVar3[0x2f] = (longlong)FUN_013065a0;
  iVar9 = (int)lVar1 + (int)plVar3[0x13];
  plVar4 = (longlong *)FUN_00689210(&PTR_FUN_006747f8,1,param_1);
  FUN_0043f750(&local_68,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_60,L"cB_compTime",local_68);
  (**(code **)(*plVar4 + 0x50))(plVar4,local_60);
  FUN_0064de00(plVar4,local_res10[0]);
  FUN_0064cb30(plVar4,iVar9 + 0x19);
  FUN_0064cbf0(plVar4,0xf);
  FUN_0064dfe0(plVar4,0);
  FUN_0064dfb0(plVar4,1);
  FUN_00414ad0(plVar4 + 0x1e,local_res10[0]);
  FUN_0064cb90(plVar4,*(int *)((longlong)plVar2 + 0x94) + 2);
  iVar9 = iVar9 + (int)plVar4[0x13] + 0x19;
  plVar5 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,param_1);
  FUN_0043f750(&local_78,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_70,L"edit_TimeFrom",local_78);
  (**(code **)(*plVar5 + 0x50))(plVar5,local_70);
  FUN_0064de00(plVar5,&DAT_01304b10);
  FUN_0064cbf0(plVar5,0x2d);
  FUN_0064cb30(plVar5,iVar9);
  FUN_0064cb90(plVar5,*(undefined4 *)((longlong)plVar2 + 0x94));
  iVar10 = iVar9 + (int)plVar5[0x13] + 3;
  plVar6 = (longlong *)FUN_0068eea0(&LAB_0067a568,1,param_1);
  FUN_0043f750(&local_88,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_80,&DAT_01304b20,local_88);
  (**(code **)(*plVar6 + 0x50))(plVar6,local_80);
  FUN_0064de00(plVar6,&DAT_01304b34);
  FUN_0064cbf0(plVar6,10);
  FUN_0064cb30(plVar6,iVar10);
  iVar9 = FUN_0040c770((double)*(int *)((longlong)plVar2 + 0x9c) / 10.0);
  FUN_0064cb90(plVar6,*(int *)((longlong)plVar2 + 0x94) + iVar9);
  iVar9 = iVar10 + (int)plVar6[0x13] + 2;
  plVar7 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,param_1);
  FUN_0043f750(&local_98,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_90,L"edit_TimeTo",local_98);
  (**(code **)(*plVar7 + 0x50))(plVar7,local_90);
  FUN_0064de00(plVar7,&DAT_01304b68);
  FUN_0064cbf0(plVar7,0x2d);
  FUN_0064cb30(plVar7,iVar9);
  FUN_0064cb90(plVar7,*(undefined4 *)((longlong)plVar2 + 0x94));
  lVar1 = plVar7[0x13];
  plVar8 = (longlong *)FUN_00680200(&PTR_FUN_0066b990,1,param_1);
  FUN_0043f750(&local_a8,*(undefined4 *)(param_1 + 0xad4));
  FUN_00416ba0(&local_a0,L"edit_Tol",local_a8);
  (**(code **)(*plVar8 + 0x50))(plVar8,local_a0);
  FUN_0064de00(plVar8,&DAT_01304b98);
  FUN_0064cbf0(plVar8,0x2d);
  FUN_0064cb30(plVar8,iVar9 + (int)lVar1 + 0xf);
  FUN_0064cb90(plVar8,*(undefined4 *)((longlong)plVar2 + 0x94));
  plVar11 = (longlong *)0x0;
  if (0 < *(int *)((longlong)plVar2 + 0x94) + -3) {
    plVar11 = (longlong *)FUN_00742540(&PTR_FUN_00732f28,1,param_1);
    FUN_0043f750(&local_b8,*(undefined4 *)(param_1 + 0xad4));
    FUN_00416ba0(&local_b0,&DAT_01304ba8,local_b8);
    (**(code **)(*plVar11 + 0x50))(plVar11,local_b0);
    FUN_0064cc50(plVar11,2);
    FUN_0064cb30(plVar11,2);
    FUN_0064cbf0(plVar11,*(int *)(*(longlong *)(param_1 + 0x850) + 0x98) + -0x19);
    FUN_0064cb90(plVar11,*(int *)((longlong)plVar2 + 0x94) + -3);
  }
  (**(code **)(*plVar2 + 0x130))(plVar2,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar3 + 0x130))(plVar3,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar4 + 0x130))(plVar4,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar5 + 0x130))(plVar5,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar7 + 0x130))(plVar7,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar8 + 0x130))(plVar8,*(undefined8 *)(param_1 + 0x850));
  (**(code **)(*plVar6 + 0x130))(plVar6,*(undefined8 *)(param_1 + 0x850));
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x130))(plVar11,*(undefined8 *)(param_1 + 0x850));
  }
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x890),
               *(int *)(*(longlong *)(param_1 + 0x850) + 0x90) + (int)plVar2[0x12] + 4);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x898),
               *(int *)(*(longlong *)(param_1 + 0x850) + 0x90) + (int)plVar4[0x12] + 4);
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x8a8),
               *(int *)(*(longlong *)(param_1 + 0x850) + 0x90) + (int)plVar8[0x12] + 4);
  *(int *)(param_1 + 0xad4) = *(int *)(param_1 + 0xad4) + 1;
  FUN_00414560(&local_b8,0x10);
  FUN_00414480(local_res10);
  return;
}

