/* Ghidra address: 01d3b080 */
/* Ghidra symbol: FUN_01d3b080 */


void FUN_01d3b080(longlong *param_1,double param_2,double param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  double *local_88;
  longlong local_78;
  int local_6c;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  
  local_90 = auStack_b8;
  local_78 = 0;
  local_6c = (int)param_1[2] + -1;
  puVar1 = auStack_b8;
  if (-1 < local_6c) {
    do {
      local_90 = puVar1;
      uVar3 = FUN_00b94e60(param_1,local_6c);
      cVar2 = FUN_01d3b040(auStack_b8,uVar3);
      if (cVar2 != '\0') {
        local_78 = FUN_00b94e60(param_1,local_6c);
        break;
      }
      local_6c = local_6c + -1;
      puVar1 = local_90;
    } while (local_6c != -1);
  }
  local_48 = local_78;
  local_78 = 0;
  local_6c = (int)param_1[2] + -1;
  if (-1 < local_6c) {
    do {
      uVar3 = FUN_00b94e60(param_1,local_6c);
      cVar2 = FUN_01d3b060(auStack_b8,uVar3);
      if (cVar2 != '\0') {
        local_78 = FUN_00b94e60(param_1,local_6c);
        break;
      }
      local_6c = local_6c + -1;
    } while (local_6c != -1);
  }
  local_50 = local_78;
  if ((local_48 != 0) && (local_78 != 0)) {
    local_58 = (**(code **)(*param_1 + 0x18))(param_1,local_48);
    local_5c = (**(code **)(*param_1 + 0x18))(param_1,local_50);
    if (local_48 != local_50) {
      if (*(char *)(local_48 + 0x10) == *(char *)(local_50 + 0x10)) {
        local_5c = local_5c + 1;
      }
      else {
        *(double *)(local_50 + 8) = param_2;
      }
    }
    local_54 = local_5c + 1;
    iVar5 = (int)param_1[2] + -1;
    if (local_54 <= iVar5) {
      iVar5 = (iVar5 - local_54) + 1;
      do {
        lVar4 = FUN_00b94e60(param_1,local_54);
        local_88 = (double *)(lVar4 + 8);
        *local_88 = *local_88 - (param_3 - param_2);
        local_54 = local_54 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_54 = local_58 + 1;
    if (local_54 <= local_5c + -1) {
      iVar5 = ((local_5c + -1) - local_54) + 1;
      do {
        FUN_00b94f10(param_1,local_58 + 1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

