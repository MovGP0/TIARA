/* Ghidra address: 00ae3ff0 */
/* Ghidra symbol: FUN_00ae3ff0 */


void FUN_00ae3ff0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  int local_68;
  char local_61;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  uint local_44;
  longlong local_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_a0 = auStack_d8;
  local_40 = 0;
  puVar1 = auStack_d8;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    local_50 = *(longlong *)(param_1 + 0x250);
    local_58 = *(longlong *)(param_1 + 0x218);
    if (local_58 == 0) {
      local_b8 = 0;
      FUN_00ac0980(*(undefined8 *)(local_50 + 0xe8),7,0,0);
    }
    else {
      local_20 = 0;
      local_60 = 0;
      iVar5 = *(int *)(local_58 + 0x10);
      local_68 = 0;
      local_a0 = auStack_d8;
      puVar1 = auStack_d8;
      if (-1 < iVar5 + -1) {
        do {
          local_a0 = puVar1;
          lVar3 = FUN_00a72910(local_58,local_68);
          if (*(char *)(lVar3 + 8) == 'P') {
            local_61 = '\x01';
            local_60 = FUN_00a72910(local_58,local_68);
            goto code_r0x00ae40ce;
          }
          local_68 = local_68 + 1;
          iVar5 = iVar5 + -1;
          puVar1 = local_a0;
        } while (iVar5 != 0);
      }
      local_61 = '\0';
code_r0x00ae40ce:
      if (local_61 != '\0') {
        local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
        FUN_00a62c40(*(undefined8 *)(local_60 + 0x28),local_20);
      }
      local_b8 = 0;
      FUN_00ac0980(*(undefined8 *)(local_50 + 0xe8),7,local_20,local_58);
      FUN_00410f20(local_20);
    }
    local_78 = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_00410f20(local_78);
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0xe8);
    uVar4 = FUN_004aeac0(local_80,*(int *)(local_80 + 0x10) + -1);
    cVar2 = FUN_00a53050(uVar4,&local_40);
    if ((cVar2 != '\0') && (local_40 != 0)) {
      local_88 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0xe8);
      uVar4 = FUN_004aeac0(local_88,*(int *)(local_88 + 0x10) + -1);
      FUN_00a53850(uVar4,0,0,local_38);
      FUN_00aa73f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x250) + 0xe8) + 0x20),
                   local_40,local_38);
    }
    local_90 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0xe8);
    uVar4 = FUN_004aeac0(local_90,*(int *)(local_90 + 0x10) + -1);
    local_44 = FUN_00a55160(uVar4);
    puVar1 = local_a0;
    if (local_44 != 0x1fffffff) {
      FUN_00aa73c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x250) + 0xe8) + 0x20),
                   local_44 | *(uint *)PTR_DAT_02005078);
      puVar1 = local_a0;
    }
  }
  local_a0 = puVar1;
  FUN_00414480(&local_40);
  return;
}

