/* Ghidra address: 018b7df0 */
/* Ghidra symbol: FUN_018b7df0 */


void FUN_018b7df0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_40 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x210);
  puVar2 = auStack_78;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x298))(plVar1);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_30 = 1;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
              (*(longlong **)(param_1 + 0x70),&local_40,0);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  local_34 = local_30;
  if (local_30 <= iVar3 + -1) {
    iVar3 = ((iVar3 + -1) - local_30) + 1;
    do {
      if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) &&
         (*(longlong *)(param_1 + 0x78) != 0)) {
        iVar4 = FUN_01803a10(*(undefined8 *)(param_1 + 0x78));
        if (0 < iVar4) {
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))
                    (*(longlong **)(param_1 + 0x70),&local_58,local_34);
          local_2c = FUN_0043fc00(local_58);
          local_28 = 0;
          iVar4 = FUN_01803a10(*(undefined8 *)(param_1 + 0x78));
          if (local_2c < iVar4) {
            local_28 = FUN_018039f0(*(undefined8 *)(param_1 + 0x78),local_2c);
          }
          if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1a8) + 0x30) != '\0') &&
              (local_28 != 0)) && (*(char *)(local_28 + 0x38) != '\0')) {
            FUN_018047a0(*(undefined8 *)(param_1 + 0x98),local_28);
            FUN_018039a0(local_28);
          }
        }
      }
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),local_34);
      FUN_00410f20(uVar5);
      local_34 = local_34 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x90))(*(longlong **)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x80))
              (*(longlong **)(param_1 + 0x70),local_40,*(longlong *)(param_1 + 0xc0));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,0);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_40);
  return;
}

