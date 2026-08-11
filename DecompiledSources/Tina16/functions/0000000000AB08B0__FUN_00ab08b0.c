/* Ghidra address: 00ab08b0 */
/* Ghidra symbol: FUN_00ab08b0 */


int FUN_00ab08b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  int local_84;
  undefined1 *local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  bool local_61;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  char local_39;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_80 = auStack_b8;
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x118) ==
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2b4)) {
    local_58 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x160);
    local_60 = local_58;
    if (local_58 != 0) {
      local_60 = *(longlong *)(local_58 + -8);
    }
    local_61 = local_60 == 0;
  }
  else {
    local_61 = true;
  }
  puVar3 = auStack_b8;
  if (local_61 != false) {
    FUN_00aafec0(auStack_b8,*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xa8));
    puVar3 = local_80;
  }
  local_80 = puVar3;
  local_24 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xb8) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xbc) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xc0) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xc4) = 0xffffffff;
  local_39 = '\0';
  local_84 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10);
  local_2c = 0;
  if (-1 < local_84 + -1) {
    do {
      local_48 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x168),local_2c);
      *(undefined4 *)(local_48 + 0x20) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x160) + (longlong)local_2c * 4);
      cVar4 = *(char *)(local_48 + 0x5b);
      if (cVar4 == '\0') {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xbc);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xb8);
        *piVar1 = *piVar1 + *(int *)(local_48 + 0x20);
      }
      else if (cVar4 == '\x01') {
        local_39 = '\x01';
      }
      else if (cVar4 == '\x02') {
        if (*(int *)(*(longlong *)(param_1 + 0x70) + 0xc4) == -1) {
          *(int *)(*(longlong *)(param_1 + 0x70) + 0xc4) = local_2c;
          *(int *)(*(longlong *)(param_1 + 0x70) + 200) = local_24;
        }
        piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0xc0);
        *piVar1 = *piVar1 + *(int *)(local_48 + 0x20);
      }
      *(undefined4 *)(local_48 + 0x2c) = 0;
      local_24 = local_24 + *(int *)(local_48 + 0x20);
      iVar8 = *(int *)(local_48 + 0x10);
      local_28 = 0;
      if (-1 < iVar8 + -1) {
        do {
          uVar6 = FUN_004aeac0(local_48,local_28);
          cVar4 = FUN_004113d0(uVar6,&PTR_FUN_00a8c408);
          if (cVar4 != '\0') {
            local_38 = FUN_004aeac0(local_48,local_28);
            *(undefined4 *)(local_38 + 0x2c) = 0;
            local_68 = local_2c;
            local_6c = local_2c + *(int *)(local_38 + 0xc) + -1;
            local_70 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x168) + 0x10) + -1;
            local_74 = local_70;
            if (local_6c < local_70) {
              local_74 = local_6c;
            }
            local_30 = local_2c;
            if (local_2c <= local_74) {
              iVar7 = (local_74 - local_2c) + 1;
              do {
                *(int *)(local_38 + 0x2c) =
                     *(int *)(local_38 + 0x2c) +
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x160) +
                             (longlong)local_30 * 4);
                local_30 = local_30 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            if (*(int *)(local_48 + 0x2c) < *(int *)(local_38 + 0x2c)) {
              *(int *)(local_48 + 0x2c) = *(int *)(local_38 + 0x2c);
            }
          }
          local_28 = local_28 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
      if (*(int *)(lVar2 + 0x2d8) == 1) {
        *(undefined1 *)(lVar2 + 0x2dc) = 1;
      }
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2dc) != '\0') {
        local_98 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x13c);
        local_90 = *(undefined8 *)(param_1 + 200);
        FUN_00aab730(local_48,*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x138));
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
      if (*(int *)(lVar2 + 0x2d8) == 1) {
        *(undefined1 *)(lVar2 + 0x2dc) = 0;
      }
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + *(int *)(local_48 + 0x20);
      local_2c = local_2c + 1;
      local_84 = local_84 + -1;
    } while (local_84 != 0);
  }
  if (((*(int *)(*(longlong *)(param_1 + 0x70) + 0xb8) < 1) &&
      (*(int *)(*(longlong *)(param_1 + 0x70) + 0xc0) < 1)) || (local_39 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0xd0) = uVar5;
  return local_24 + *(int *)(*(longlong *)(param_1 + 0x70) + 0x13c);
}

