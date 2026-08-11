/* Ghidra address: 01084cd0 */
/* Ghidra symbol: FUN_01084cd0 */


void FUN_01084cd0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0106afa0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0106b8a0(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xab0) + 0x10));
  uVar3 = FUN_00b89270();
  FUN_0041ddd0(&local_38,PTR_PTR_020035a8);
  FUN_00b8e650(uVar3,local_30,L"HDLStrings.Msg_InvalidProjectName",local_38);
  FUN_0106b9c0(plVar2,local_30[0]);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_0106b870(plVar2,&local_20);
    FUN_00414ad0(*(longlong *)(param_1 + 0xac8) + 0x10,local_20);
    FUN_010b2830(*(undefined8 *)(param_1 + 0xac8),1);
  }
  FUN_00410f20(plVar2);
  if (iVar1 == 1) {
    FUN_0107a0c0(param_1);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

