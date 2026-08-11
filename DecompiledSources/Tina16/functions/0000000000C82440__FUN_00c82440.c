/* Ghidra address: 00c82440 */
/* Ghidra symbol: FUN_00c82440 */


undefined8 FUN_00c82440(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = FUN_004170c0(&DAT_00c825f8,*(undefined8 *)(param_1 + 0x98),1);
  FUN_00416dc0(&local_28,*(undefined8 *)(param_1 + 0x98),3,iVar2 + -3);
  FUN_00416780(&local_30,*(undefined2 *)(*(longlong *)(param_1 + 0x98) + 2));
  FUN_00416ad0(&local_30,local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x10);
  uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  iVar2 = FUN_004170c0(&DAT_00c82608,*(undefined8 *)(param_1 + 0x98),1);
  iVar4 = FUN_004170c0(&DAT_00c82618,*(undefined8 *)(param_1 + 0x98),1);
  iVar5 = FUN_004170c0(&DAT_00c82608,*(undefined8 *)(param_1 + 0x98),1);
  FUN_00416dc0(&local_20,*(undefined8 *)(param_1 + 0x98),iVar2 + 1,(iVar4 - iVar5) + -1);
  if (local_20 == 0) {
    FUN_00414b50(&local_20,L"<none>");
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x20);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
  FUN_00414ad0(param_2,local_28);
  FUN_00414560(&local_30,3);
  return param_2;
}

