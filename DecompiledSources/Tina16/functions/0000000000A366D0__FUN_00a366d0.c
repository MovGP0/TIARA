/* Ghidra address: 00a366d0 */
/* Ghidra symbol: FUN_00a366d0 */


void FUN_00a366d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char local_55;
  int local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  longlong local_30;
  
  local_38 = (code *)0x0;
  local_30 = 0;
  lVar5 = *(longlong *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar5 + 0x491);
  if (bVar1 < 4) {
    if ((bVar1 == 3) || (bVar1 == 0)) {
      bVar2 = *(byte *)(lVar5 + 0x490);
      if (bVar2 < 5) {
        if ((bVar2 != 4) && (bVar2 != 1)) {
          if (bVar2 == 2) {
            if (bVar1 == 3) {
              local_38 = FUN_00a362a0;
              local_30 = param_1;
            }
            else {
              local_38 = FUN_00a36330;
              local_30 = param_1;
            }
          }
          goto LAB_00a368c8;
        }
      }
      else if (bVar2 != 8) {
        if (bVar2 == 0x10) {
          local_38 = FUN_00a363c0;
          local_30 = param_1;
        }
        goto LAB_00a368c8;
      }
      local_38 = FUN_00a361b0;
      local_30 = param_1;
    }
    else if (bVar1 == 2) {
      if (*(char *)(lVar5 + 0x490) == '\b') {
        local_38 = FUN_00a36010;
        local_30 = param_1;
      }
      else if (*(char *)(lVar5 + 0x490) == '\x10') {
        local_38 = FUN_00a360b0;
        local_30 = param_1;
      }
    }
  }
  else if (bVar1 == 4) {
    if (*(char *)(lVar5 + 0x490) == '\b') {
      local_38 = FUN_00a36600;
      local_30 = param_1;
    }
    else if (*(char *)(lVar5 + 0x490) == '\x10') {
      local_38 = FUN_00a36660;
      local_30 = param_1;
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)(lVar5 + 0x490) == '\b') {
      local_38 = FUN_00a36420;
      local_30 = param_1;
    }
    else if (*(char *)(lVar5 + 0x490) == '\x10') {
      local_38 = FUN_00a364e0;
      local_30 = param_1;
    }
  }
LAB_00a368c8:
  local_55 = '\0';
  piVar6 = &DAT_01e71708;
  piVar7 = &DAT_01e71740;
  piVar8 = &DAT_01e716ec;
  piVar9 = &DAT_01e71724;
  do {
    uVar3 = FUN_00a32fa0((longlong)((*(int *)(param_1 + 0x30) - *piVar6) + *piVar7 + -1) /
                         (longlong)*piVar7 & 0xffffffff,
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x491),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x490));
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    FUN_0040d200(*(undefined8 *)
                  (param_1 + 0x70 + (ulonglong)(*(char *)(param_1 + 0x80) == '\0') * 8),uVar3,0);
    local_54 = *piVar8;
    lVar5 = *(longlong *)(param_1 + 0x28);
    local_40 = (longlong)(*(int *)(lVar5 + 0x498) * ((*(int *)(param_1 + 0x34) - local_54) + -1));
    local_48 = *(longlong *)(lVar5 + 0x478) + local_40;
    local_50 = *(longlong *)(lVar5 + 0x480) + (longlong)(*(int *)(param_1 + 0x30) * local_54);
    local_40 = *(longlong *)(lVar5 + 0x470) + local_40;
    if (*(int *)(param_1 + 0x38) != 0) {
      while ((local_54 < *(int *)(param_1 + 0x34) &&
             (iVar4 = FUN_00a35ca0(param_1,param_3,
                                   *(undefined8 *)
                                    (param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8),
                                   *(int *)(param_1 + 0x38) + 1,param_1 + 0x84,param_5), iVar4 != 0)
             )) {
        FUN_00a37360(param_1);
        (*local_38)(local_30,local_55,
                    *(longlong *)(param_1 + 0x70 + (ulonglong)*(byte *)(param_1 + 0x80) * 8) + 1,
                    local_48,local_50,local_40);
        *(bool *)(param_1 + 0x80) = *(char *)(param_1 + 0x80) == '\0';
        iVar4 = *piVar9;
        local_54 = local_54 + iVar4;
        lVar5 = (longlong)(iVar4 * *(int *)(*(longlong *)(param_1 + 0x28) + 0x498));
        local_48 = local_48 - lVar5;
        local_50 = local_50 + iVar4 * *(int *)(param_1 + 0x30);
        local_40 = local_40 - lVar5;
      }
    }
    local_55 = local_55 + '\x01';
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (local_55 != '\a');
  return;
}

