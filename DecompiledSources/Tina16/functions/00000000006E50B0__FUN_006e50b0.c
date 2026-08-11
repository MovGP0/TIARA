/* Ghidra address: 006e50b0 */
/* Ghidra symbol: FUN_006e50b0 */


void FUN_006e50b0(longlong param_1,longlong param_2,ushort param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_40 = auStack_68;
  if (*(char *)(param_1 + 0x580) != '\0') {
    return;
  }
  if ((param_3 & 8) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x580) = 1;
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  if ((*(char *)(param_1 + 0x560) == '\0') || (param_2 == 0)) {
    FUN_006e5530(param_1,param_2);
    goto LAB_006e530c;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 4) == 0) {
      local_40 = auStack_68;
      iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x568),param_2);
      if (iVar2 == -1) {
        FUN_006e5530(param_1,param_2);
      }
      else {
        lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x568),0);
        if (lVar5 != param_2) {
          local_30 = *(undefined8 *)(param_1 + 0x568);
          FUN_004aee50(local_30,param_2,0);
          FUN_006e54c0(param_1,param_2,0);
        }
      }
    }
    else {
      local_40 = auStack_68;
      FUN_006e4fc0(param_1,param_2);
    }
    goto LAB_006e530c;
  }
  local_40 = auStack_68;
  if ((*(longlong *)(param_1 + 0x578) == 0) &&
     (local_40 = auStack_68, 0 < *(int *)(*(longlong *)(param_1 + 0x568) + 0x10))) {
    local_40 = auStack_68;
    uVar4 = FUN_006e5360(param_1,0);
    *(undefined8 *)(param_1 + 0x578) = uVar4;
  }
  if (*(longlong *)(param_1 + 0x578) == 0) {
    local_20 = FUN_006df4b0(*(undefined8 *)(param_1 + 0x550));
    cVar1 = FUN_006ddf60(local_20);
    if (cVar1 == '\0') {
      local_20 = FUN_006dd480(local_20);
    }
    for (; local_20 != 0; local_20 = FUN_006dd480(local_20)) {
      cVar1 = FUN_006dd330(local_20);
      if (cVar1 != '\0') {
        *(longlong *)(param_1 + 0x578) = local_20;
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x578) == 0) {
LAB_006e5222:
    local_21 = 0;
  }
  else {
    iVar2 = FUN_006dd6f0(param_2);
    iVar3 = FUN_006dd6f0(*(undefined8 *)(param_1 + 0x578));
    if (iVar3 <= iVar2) goto LAB_006e5222;
    local_21 = 1;
  }
  if ((param_3 & 4) == 0) {
    FUN_006e5650(param_1,param_2,local_21,1);
  }
  else {
    FUN_006e5040(param_1,param_2,local_21);
  }
LAB_006e530c:
  FUN_006e5a00(param_1);
  *(undefined1 *)(param_1 + 0x580) = 0;
  return;
}

