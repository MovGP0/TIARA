/* Ghidra address: 00a957e0 */
/* Ghidra symbol: FUN_00a957e0 */


void FUN_00a957e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_30;
  int local_24;
  longlong *local_20;
  
  local_60 = auStack_88;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  local_20 = (longlong *)FUN_00a448a0(param_2,0);
  if (local_20 != (longlong *)0x0) {
    local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c0);
    local_48 = *(undefined8 *)(param_1 + 0x198);
    FUN_004aee50(local_40,local_48,0);
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      *(undefined1 *)(param_1 + 0x1d0) = 1;
    }
    else {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x198));
    }
    *(longlong **)(param_1 + 0x198) = local_20;
    cVar2 = (**(code **)(*local_20 + 0x88))(local_20);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x1aa) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x30))(*(longlong **)(param_1 + 0x198),1);
        local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1c0);
        local_58 = *(undefined8 *)(param_1 + 0x198);
        FUN_004ae7e0(local_50,local_58);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x30))(*(longlong **)(param_1 + 0x198),0);
        FUN_00a956b0(param_1,0);
      }
    }
    if (*(char *)(param_1 + 0x1d1) != '\0') {
      local_30 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x240);
      iVar3 = (**(code **)(*local_30 + 0x28))();
      local_24 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar4 = (**(code **)(*local_30 + 0x30))(local_30,local_24);
          if (lVar4 == param_1) {
            (**(code **)(*local_30 + 0x98))(local_30,local_24);
            break;
          }
          local_24 = local_24 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(undefined1 *)(param_1 + 0x1d1) = 0;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xc0);
    (**(code **)(*plVar1 + 0x180))(plVar1);
  }
  return;
}

