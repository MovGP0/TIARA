/* Ghidra address: 0196cc90 */
/* Ghidra symbol: FUN_0196cc90 */


undefined1 FUN_0196cc90(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20 = 0;
  local_41 = 1;
  if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0196ce33;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x80));
  if (iVar2 == 0) goto code_r0x0196ce33;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x88));
  if (iVar2 == 0) goto code_r0x0196ce33;
  plVar3 = (longlong *)FUN_0181a5c0(&PTR_FUN_018d1298,1,*(undefined8 *)PTR_DAT_02004030);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    FUN_0064dd90(plVar3[0xdd],&local_20);
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x48),local_20);
    if (iVar2 != 0) goto LAB_0196cd70;
    FUN_00414ad0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x48));
  }
  else {
LAB_0196cd70:
    local_41 = 0;
    uVar4 = FUN_0180bfb0();
    FUN_01809b60(uVar4,&local_28,L"Invalid password");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x1b0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    uVar4 = FUN_0180bfb0();
    FUN_01809b60(uVar4,&local_38,L"clErrors");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x1b0);
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    FUN_00416cd0(&local_30,3,local_38,&LAB_0196cee8,local_40);
    FUN_0180dc30(*(undefined8 *)(param_1 + 0x58),local_30);
  }
  FUN_00410f20(plVar3);
code_r0x0196ce33:
  FUN_00414560(&local_40,4);
  FUN_00414480(&local_20);
  return local_41;
}

