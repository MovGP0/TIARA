/* Ghidra address: 00a38600 */
/* Ghidra symbol: FUN_00a38600 */


void FUN_00a38600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char local_5d;
  int local_5c;
  longlong local_58;
  longlong local_50;
  code *local_40;
  longlong local_38;
  byte local_29;
  
  local_40 = (code *)0x0;
  local_38 = 0;
  lVar4 = *(longlong *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar4 + 0x491);
  if (bVar1 < 4) {
    if ((bVar1 == 3) || (bVar1 == 0)) {
      cVar2 = *(char *)(lVar4 + 0x490);
      if ((cVar2 == '\x01') || ((cVar2 == '\x04' || (cVar2 == '\b')))) {
        local_40 = FUN_00a38290;
        local_38 = param_1;
      }
      else if (cVar2 == '\x10') {
        local_40 = FUN_00a383a0;
        local_38 = param_1;
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)(lVar4 + 0x490) == '\b') {
        local_40 = FUN_00a38170;
        local_38 = param_1;
      }
      else if (*(char *)(lVar4 + 0x490) == '\x10') {
        local_40 = FUN_00a38200;
        local_38 = param_1;
      }
    }
  }
  else if (bVar1 == 4) {
    if (*(char *)(lVar4 + 0x490) == '\b') {
      local_40 = FUN_00a38540;
      local_38 = param_1;
    }
    else if (*(char *)(lVar4 + 0x490) == '\x10') {
      local_40 = FUN_00a385a0;
      local_38 = param_1;
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)(lVar4 + 0x490) == '\b') {
      local_40 = FUN_00a383e0;
      local_38 = param_1;
    }
    else if (*(char *)(lVar4 + 0x490) == '\x10') {
      local_40 = FUN_00a38490;
      local_38 = param_1;
    }
  }
  local_5d = '\0';
  piVar6 = &DAT_01e71708;
  piVar7 = &DAT_01e71740;
  piVar8 = &DAT_01e716ec;
  piVar9 = &DAT_01e71724;
  do {
    uVar5 = FUN_00a32fa0((longlong)((*(int *)(param_1 + 0x30) - *piVar6) + *piVar7 + -1) /
                         (longlong)*piVar7 & 0xffffffff,
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x491),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x490));
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    FUN_0040d200(*(undefined8 *)(param_1 + 0x40),uVar5,0);
    local_5c = *piVar8;
    lVar4 = *(longlong *)(param_1 + 0x28);
    local_50 = *(longlong *)(lVar4 + 0x478) +
               (longlong)(*(int *)(lVar4 + 0x498) * ((*(int *)(param_1 + 0x34) - local_5c) + -1));
    local_58 = *(longlong *)(lVar4 + 0x480) + (longlong)(*(int *)(param_1 + 0x30) * local_5c);
    if (*(int *)(param_1 + 0x38) != 0) {
      for (; local_5c < *(int *)(param_1 + 0x34); local_5c = local_5c + iVar3) {
        (*local_40)(local_38,local_5d,local_50,*(undefined8 *)(param_1 + 0x68),local_58);
        local_29 = FUN_00a38990(param_1);
        FUN_00a37b90(param_1,param_3,&local_29,1);
        FUN_00a37b90(param_1,param_3,*(undefined8 *)(param_1 + 0x40 + (ulonglong)local_29 * 8),
                     *(undefined4 *)(param_1 + 0x38));
        iVar3 = *piVar9;
        local_50 = local_50 - iVar3 * *(int *)(*(longlong *)(param_1 + 0x28) + 0x498);
        local_58 = local_58 + iVar3 * *(int *)(param_1 + 0x30);
      }
    }
    local_5d = local_5d + '\x01';
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (local_5d != '\a');
  FUN_00a37bf0(param_1,param_3);
  return;
}

