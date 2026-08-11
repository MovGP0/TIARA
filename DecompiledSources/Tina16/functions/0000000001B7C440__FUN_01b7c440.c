/* Ghidra address: 01b7c440 */
/* Ghidra symbol: FUN_01b7c440 */


void FUN_01b7c440(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b72b98,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_38);
  FUN_01b75290(local_20,local_38);
  iVar2 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar2 == 1) {
    FUN_01b75220(local_20,&local_28);
    FUN_01b7aca0(param_1,local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x4f0);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_28);
    if (iVar2 != -1) {
      plVar1 = *(longlong **)(param_1 + 0x728);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],local_28);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return;
}

