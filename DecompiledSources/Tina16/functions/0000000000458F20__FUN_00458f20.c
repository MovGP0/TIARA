/* Ghidra address: 00458f20 */
/* Ghidra symbol: FUN_00458f20 */


undefined4 FUN_00458f20(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40 [2];
  longlong local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_5c = 0;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  if (*param_2 == 0) {
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = *(longlong *)(param_1 + -8);
    }
    plVar2 = (longlong *)FUN_0045ae90();
    (**(code **)(*plVar2 + 0x50))(plVar2,local_40);
    local_88 = 0;
    if (local_40[0] != 0) {
      local_88 = *(longlong *)(local_40[0] + -8);
    }
    local_88 = local_88 + -1;
    cVar1 = FUN_00458ec0(auStack_a8,local_78,lVar3 + -1,local_40[0]);
    if (cVar1 == '\0') {
      lVar3 = 0;
      if (param_1 != 0) {
        lVar3 = *(longlong *)(param_1 + -8);
      }
      plVar2 = (longlong *)FUN_0045adf0();
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_48);
      local_88 = 0;
      if (local_48 != 0) {
        local_88 = *(longlong *)(local_48 + -8);
      }
      local_88 = local_88 + -1;
      cVar1 = FUN_00458ec0(auStack_a8,local_78,lVar3 + -1,local_48);
      if (cVar1 == '\0') {
        lVar3 = 0;
        if (param_1 != 0) {
          lVar3 = *(longlong *)(param_1 + -8);
        }
        plVar2 = (longlong *)FUN_00458e40();
        (**(code **)(*plVar2 + 0x50))(plVar2,&local_50);
        local_88 = 0;
        if (local_50 != 0) {
          local_88 = *(longlong *)(local_50 + -8);
        }
        local_88 = local_88 + -1;
        cVar1 = FUN_00458ec0(auStack_a8,local_78,lVar3 + -1,local_50);
        if (cVar1 == '\0') {
          *local_70 = local_68;
          goto LAB_00459151;
        }
        lVar3 = FUN_00458e40();
        *local_70 = lVar3;
      }
      else {
        lVar3 = FUN_0045adf0();
        *local_70 = lVar3;
      }
    }
    else {
      lVar3 = FUN_0045ae90();
      *local_70 = lVar3;
    }
    (**(code **)(*(longlong *)*local_70 + 0x50))((longlong *)*local_70,&local_58);
    local_5c = 0;
    if (local_58 != 0) {
      local_5c = (undefined4)*(undefined8 *)(local_58 + -8);
    }
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,local_30);
    lVar3 = 0;
    if (local_78 != 0) {
      lVar3 = *(longlong *)(local_78 + -8);
    }
    local_88 = 0;
    if (local_30[0] != 0) {
      local_88 = *(longlong *)(local_30[0] + -8);
    }
    local_88 = local_88 + -1;
    cVar1 = FUN_00458ec0(auStack_a8,local_78,lVar3 + -1,local_30[0]);
    if ((cVar1 != '\0') && (local_5c = 0, local_30[0] != 0)) {
      local_5c = (undefined4)*(undefined8 *)(local_30[0] + -8);
    }
  }
LAB_00459151:
  FUN_00417840(&local_58,&DAT_00406578,4);
  FUN_00419430(local_30,&DAT_00406578);
  return local_5c;
}

