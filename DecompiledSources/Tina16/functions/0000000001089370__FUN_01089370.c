/* Ghidra address: 01089370 */
/* Ghidra symbol: FUN_01089370 */


void FUN_01089370(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [88];
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + 0x510);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if ((*(int *)(param_1 + 0xad8) == 0x100) || (*(int *)(param_1 + 0xad8) == 0x800)) {
    local_a8 = 8;
    local_a4 = 0x20;
    uVar3 = 8;
    iVar4 = 4;
  }
  else {
    local_a8 = 4;
    local_a4 = 8;
    uVar3 = 2;
    iVar4 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x4c20) / iVar4;
  local_ac = 0;
  if (-1 < iVar6 + -1) {
    do {
      iVar5 = *(int *)(param_1 + 0x4c24) + local_ac * iVar4;
      uVar2 = _get_sram_value(*(undefined8 *)(param_1 + 0xb20),iVar5);
      FUN_0043fbc0(local_40,iVar5,local_a8);
      FUN_00416ad0(local_40,L"    ");
      FUN_00414480(&local_48);
      FUN_015fa440(local_a0,uVar2,local_a4);
      FUN_004169a0(&local_48,local_a0);
      FUN_015fa320(&local_48,*(undefined4 *)(param_1 + 0x4c74),uVar3);
      FUN_00416ad0(local_40,local_48);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + 0x510);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
      local_ac = local_ac + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_010a6f30(*(undefined8 *)(param_1 + 0x8e0),*(undefined4 *)(param_1 + 0x4c6c));
  FUN_00414560(&local_48,2);
  return;
}

