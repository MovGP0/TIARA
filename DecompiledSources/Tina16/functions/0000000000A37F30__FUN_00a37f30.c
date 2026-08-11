/* Ghidra address: 00a37f30 */
/* Ghidra symbol: FUN_00a37f30 */


void FUN_00a37f30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  code *local_50;
  longlong local_48;
  byte local_39 [9];
  
  local_50 = (code *)0x0;
  local_48 = 0;
  lVar4 = *(longlong *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar4 + 0x491);
  if (bVar1 < 4) {
    if ((bVar1 == 3) || (bVar1 == 0)) {
      cVar2 = *(char *)(lVar4 + 0x490);
      if ((cVar2 == '\x01') || ((cVar2 == '\x04' || (cVar2 == '\b')))) {
        local_50 = FUN_00a37d60;
        local_48 = param_1;
      }
      else if (cVar2 == '\x10') {
        local_50 = FUN_00a37d80;
        local_48 = param_1;
      }
    }
    else if (bVar1 == 2) {
      if (*(char *)(lVar4 + 0x490) == '\b') {
        local_50 = FUN_00a37c80;
        local_48 = param_1;
      }
      else if (*(char *)(lVar4 + 0x490) == '\x10') {
        local_50 = FUN_00a37cf0;
        local_48 = param_1;
      }
    }
  }
  else if (bVar1 == 4) {
    if (*(char *)(lVar4 + 0x490) == '\b') {
      local_50 = FUN_00a37eb0;
      local_48 = param_1;
    }
    else if (*(char *)(lVar4 + 0x490) == '\x10') {
      local_50 = FUN_00a37ef0;
      local_48 = param_1;
    }
  }
  else if (bVar1 == 6) {
    if (*(char *)(lVar4 + 0x490) == '\b') {
      local_50 = FUN_00a37db0;
      local_48 = param_1;
    }
    else if (*(char *)(lVar4 + 0x490) == '\x10') {
      local_50 = FUN_00a37e30;
      local_48 = param_1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x34);
  lVar3 = *(longlong *)(lVar4 + 0x478) + (longlong)(*(int *)(lVar4 + 0x498) * (iVar5 + -1));
  lVar4 = *(longlong *)(lVar4 + 0x480);
  do {
    (*local_50)(local_48,lVar3,*(undefined8 *)(param_1 + 0x68),lVar4);
    local_39[0] = FUN_00a38990(param_1);
    FUN_00a37b90(param_1,param_3,local_39,1);
    FUN_00a37b90(param_1,param_3,*(undefined8 *)(param_1 + 0x40 + (ulonglong)local_39[0] * 8),
                 *(undefined4 *)(param_1 + 0x38));
    lVar3 = lVar3 - *(int *)(*(longlong *)(param_1 + 0x28) + 0x498);
    lVar4 = lVar4 + *(int *)(param_1 + 0x30);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00a37bf0(param_1,param_3);
  return;
}

