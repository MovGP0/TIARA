/* Ghidra address: 013cf3e0 */
/* Ghidra symbol: FUN_013cf3e0 */


void FUN_013cf3e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_48);
  FUN_013c1650(local_20,uVar2,local_48);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                        (*(longlong **)(param_1 + 0x728));
      local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_1 + 0x93c));
      local_60 = *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x30a);
      local_30 = FUN_00f20e10(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_20[0],
                              cVar1 == '\0',*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x4d8))
      ;
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))
                        (*(longlong **)(param_1 + 0x750));
      if (cVar1 != '\0') {
        local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x4d8);
        local_60 = *(undefined1 *)(param_1 + 0x93c);
        local_58 = *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x30a);
        local_30 = FUN_00f20fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_20[0],
                                1,*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x4d8));
      }
      goto LAB_013cf6cc;
    }
  }
  if (*(int *)(param_1 + 0x938) == 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_1 + 0x93c));
    local_60 = *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x30a);
    local_30 = FUN_00f20e10(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_20[0],
                            cVar1 == '\0',*(undefined8 *)(*(longlong *)(param_1 + 0x950) + 0x4d8));
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_1 + 0x93c));
    local_60 = *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x30a);
    local_30 = FUN_00f20e10(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_20[0],
                            cVar1 == '\0',*(undefined8 *)(*(longlong *)(param_1 + 0x950) + 0x4e8));
  }
LAB_013cf6cc:
  *(undefined1 *)(local_30 + 0x12) = *(undefined1 *)(param_1 + 0x92d);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,2);
  return;
}

