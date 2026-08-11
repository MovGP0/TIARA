/* Ghidra address: 010627e0 */
/* Ghidra symbol: FUN_010627e0 */


void FUN_010627e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x198),&DAT_01062978);
  uVar2 = FUN_0160dab0(local_20[0],1,L"examples");
  *(undefined8 *)(param_1 + 400) = uVar2;
  FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x198),&DAT_01062978);
  FUN_01059970(&local_28,local_30,*(undefined8 *)(param_1 + 400));
  FUN_00414b50(param_1 + 0x188,local_28);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 400) + 0x28))(*(longlong **)(param_1 + 400));
  if (iVar1 < 1) {
    FUN_00416cd0(param_1 + 0x188,3,&DAT_010629bc,*(undefined8 *)(param_1 + 0x198),&DAT_010629bc);
  }
  else {
    FUN_00416cd0(param_1 + 0x188,4,*(undefined8 *)(param_1 + 0x188),&DAT_010629a8,
                 *(undefined8 *)(param_1 + 0x198),&DAT_010629bc);
  }
  (**(code **)(**(longlong **)(param_1 + 400) + 0x90))(*(longlong **)(param_1 + 400));
  FUN_00414560(&local_30,3);
  return;
}

