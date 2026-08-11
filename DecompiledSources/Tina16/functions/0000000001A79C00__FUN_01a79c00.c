/* Ghidra address: 01a79c00 */
/* Ghidra symbol: FUN_01a79c00 */


void FUN_01a79c00(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_01aee720(&local_20,0x406,*(undefined4 *)(param_1 + 0x6b8),L"PageNameMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20);
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01a64448,1,*(undefined8 *)PTR_DAT_02004030);
  plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0xa68));
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_28,uVar1);
  FUN_0064de00(plVar3[0xd7],local_28);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 2) {
    FUN_00410f20(plVar3);
  }
  else {
    uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
    FUN_0064dd90(plVar3[0xd7],&local_30);
    FUN_01cec3f0(*(undefined8 *)(param_1 + 0x7a0),uVar1,local_30,*(undefined8 *)(param_1 + 0xa68));
    FUN_00410f20(plVar3);
    plVar3 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0xa68));
    uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,uVar1);
    FUN_00416cd0(&local_38,3,*(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x48),&DAT_01a79e38,
                 local_40);
    FUN_0064de00(param_1,local_38);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_30);
  FUN_00414560(&local_28,2);
  return;
}

