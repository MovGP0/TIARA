/* Ghidra address: 010cb120 */
/* Ghidra symbol: FUN_010cb120 */


undefined8 FUN_010cb120(longlong param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_108 [56];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_9c;
  longlong local_98;
  bool local_8d;
  int local_8c;
  longlong local_88;
  int local_7c;
  longlong local_78;
  bool local_6d;
  int local_6c;
  longlong local_68;
  int local_5c;
  longlong local_58;
  bool local_4d;
  int local_4c;
  longlong local_48;
  int local_3c;
  longlong local_38;
  int local_2c;
  undefined8 local_28;
  undefined2 local_1c;
  short local_1a;
  undefined8 local_18;
  
  local_b0 = auStack_108;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_28 = 0;
  *param_2 = 0;
  local_18 = 0;
  local_38 = *(longlong *)(param_1 + 0x18);
  local_3c = 0;
  if (local_38 != 0) {
    local_3c = *(int *)(local_38 + -4);
  }
  puVar1 = auStack_108;
  if (*(int *)(param_1 + 8) <= local_3c) {
    FUN_010ca8a0(param_1,&local_28,0);
    iVar3 = FUN_00416db0(local_28,&DAT_010cb70c);
    if (iVar3 == 0) {
      *param_2 = 1;
      puVar1 = local_b0;
    }
    else {
      local_1a = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2
                           );
      FUN_00414480(&local_28);
      while( true ) {
        cVar2 = FUN_010c9e40(param_1,local_1a);
        if (((((cVar2 == '\0') && (local_1a != 0x2e)) && (local_1a != 0x2b)) &&
            ((local_1a != 0x2d && (local_1a != 0x45)))) && (local_1a != 0x65)) {
          local_4d = false;
        }
        else {
          local_48 = *(longlong *)(param_1 + 0x18);
          local_4c = 0;
          if (local_48 != 0) {
            local_4c = *(int *)(local_48 + -4);
          }
          local_4d = *(int *)(param_1 + 8) <= local_4c;
        }
        if (local_4d == false) break;
        FUN_00416780(&local_b8,local_1a);
        FUN_00416ad0(&local_28,local_b8);
        local_58 = *(longlong *)(param_1 + 0x18);
        local_5c = 0;
        if (local_58 != 0) {
          local_5c = *(int *)(local_58 + -4);
        }
        if (*(int *)(param_1 + 8) < local_5c) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          local_1a = *(short *)(*(longlong *)(param_1 + 0x18) + -2 +
                               (longlong)*(int *)(param_1 + 8) * 2);
        }
        else {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
      }
      local_2c = 0;
      while( true ) {
        cVar2 = FUN_010c9d20(local_1a);
        if (cVar2 == '\0') {
          local_6d = false;
        }
        else {
          local_68 = *(longlong *)(param_1 + 0x18);
          local_6c = 0;
          if (local_68 != 0) {
            local_6c = *(int *)(local_68 + -4);
          }
          local_6d = *(int *)(param_1 + 8) <= local_6c;
        }
        if ((local_6d == false) || (local_2c != 0)) break;
        FUN_00416780(&local_c0,local_1a);
        FUN_00416ad0(&local_28,local_c0);
        local_78 = *(longlong *)(param_1 + 0x18);
        local_7c = 0;
        if (local_78 != 0) {
          local_7c = *(int *)(local_78 + -4);
        }
        if (*(int *)(param_1 + 8) < local_7c) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          local_1a = *(short *)(*(longlong *)(param_1 + 0x18) + -2 +
                               (longlong)*(int *)(param_1 + 8) * 2);
        }
        else {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        local_2c = local_2c + 1;
      }
      local_1a = *(undefined2 *)
                  (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
      while( true ) {
        cVar2 = FUN_010c9e10(param_1,local_1a);
        if (cVar2 == '\0') {
          local_8d = false;
        }
        else {
          local_88 = *(longlong *)(param_1 + 0x18);
          local_8c = 0;
          if (local_88 != 0) {
            local_8c = *(int *)(local_88 + -4);
          }
          local_8d = *(int *)(param_1 + 8) <= local_8c;
        }
        if (local_8d == false) break;
        local_98 = *(longlong *)(param_1 + 0x18);
        local_9c = 0;
        if (local_98 != 0) {
          local_9c = *(int *)(local_98 + -4);
        }
        if (*(int *)(param_1 + 8) < local_9c) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          local_1a = *(undefined2 *)
                      (*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
        }
        else {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
      }
      local_1c = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
      local_18 = FUN_00b8f030(local_28);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_1c;
      puVar1 = local_b0;
    }
  }
  local_b0 = puVar1;
  FUN_00414560(&local_d0,4);
  FUN_00414480(&local_28);
  return local_18;
}

