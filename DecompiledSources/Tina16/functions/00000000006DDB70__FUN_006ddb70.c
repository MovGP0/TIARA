/* Ghidra address: 006ddb70 */
/* Ghidra symbol: FUN_006ddb70 */


void FUN_006ddb70(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong local_res10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_60 = auStack_98;
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  lVar1 = FUN_006dd390(param_1);
  if ((param_2 == lVar1) && (lVar1 = FUN_006dd390(param_1), lVar1 != 0)) {
    if (param_3 == 2) {
      uVar2 = FUN_006dd390(param_1);
      lVar1 = FUN_006dd5d0(uVar2);
      if (lVar1 == param_1) {
        return;
      }
    }
    if (param_3 == 3) {
      uVar2 = FUN_006dd390(param_1);
      lVar1 = FUN_006dd580(uVar2);
      if (lVar1 == param_1) {
        return;
      }
    }
  }
  lVar1 = FUN_006dc7c0(param_1);
  local_28 = *(undefined8 *)(lVar1 + 0x5d8);
  uStack_20 = *(undefined8 *)(lVar1 + 0x5e0);
  lVar1 = FUN_006dc7c0(param_1);
  local_38 = *(undefined8 *)(lVar1 + 0x5c8);
  uStack_30 = *(undefined8 *)(lVar1 + 0x5d0);
  lVar1 = FUN_006dc7c0(param_1);
  *(undefined8 *)(lVar1 + 0x5d8) = 0;
  *(undefined8 *)(lVar1 + 0x5e0) = 0;
  lVar1 = FUN_006dc7c0(param_1);
  puVar3 = (undefined8 *)(lVar1 + 0x5c8);
  *puVar3 = 0;
  *(undefined8 *)(lVar1 + 0x5d0) = 0;
  if ((param_2 != 0) && (puVar3 = (undefined8 *)FUN_006dc7d0(param_2,param_1), (char)puVar3 != '\0')
     ) goto code_r0x006dddfa;
  local_39 = 1;
  local_48 = param_2;
  if (param_2 != 0) {
    if (param_3 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)puVar3 >> 8),1) << (param_3 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      local_48 = FUN_006dd390(param_2);
    }
  }
  local_res10 = param_2;
  if (param_3 < 3) {
    if ((param_3 == 2) || (param_3 == 0)) {
      local_39 = 1;
    }
    else if (param_3 == 1) goto LAB_006ddd4e;
  }
  else if (param_3 == 3) {
LAB_006ddd4e:
    local_39 = 0;
  }
  else if (param_3 == 4) {
    local_res10 = FUN_006dd430(param_2);
    if (local_res10 == 0) {
      local_39 = 0;
    }
    else {
      local_39 = 2;
    }
  }
  if (local_48 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(undefined8 *)(local_48 + 0x20);
  }
  if (local_res10 != param_1) {
    local_78 = local_39;
    FUN_006dd930(param_1,local_48,local_res10,local_50);
  }
  local_48 = FUN_006dd390(param_1);
  if (local_48 != 0) {
    FUN_006dd340(local_48,1);
    FUN_006dd0c0(local_48,1);
  }
code_r0x006dddfa:
  lVar1 = FUN_006dc7c0(param_1);
  *(undefined8 *)(lVar1 + 0x5d8) = local_28;
  *(undefined8 *)(lVar1 + 0x5e0) = uStack_20;
  lVar1 = FUN_006dc7c0(param_1);
  *(undefined8 *)(lVar1 + 0x5c8) = local_38;
  *(undefined8 *)(lVar1 + 0x5d0) = uStack_30;
  return;
}

