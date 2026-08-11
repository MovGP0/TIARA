/* Ghidra address: 00b57dc0 */
/* Ghidra symbol: FUN_00b57dc0 */


char FUN_00b57dc0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_38;
  undefined1 local_34 [11];
  char local_29;
  longlong *local_28;
  char local_19;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_29 = *(char *)(param_1 + 0x38);
  puVar1 = auStack_68;
  if (local_29 == '\0') {
    local_19 = '\x01';
    local_28 = *(longlong **)(param_1 + 0x30);
    if (local_28 == (longlong *)0x0) {
      local_28 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
    }
    else {
      local_19 = '\0';
      local_40 = auStack_68;
    }
    if (local_19 != '\0') {
      FUN_00416880(&local_48,*(undefined8 *)(param_1 + 8));
      FUN_004b9f40(local_28,local_48);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_004b6dc0(local_28,0);
    FUN_004b84c0(local_28,local_34,10);
    FUN_004b6dc0(local_28,0);
    local_38 = FUN_00b414a0(local_34);
    *(int *)(param_1 + 0x3c) = local_38;
    if (local_38 < 6) {
      if (local_38 == 5) {
        *(undefined1 *)(param_1 + 0x38) = 2;
      }
      else if (local_38 == 2) {
        *(undefined1 *)(param_1 + 0x38) = 5;
      }
      else if (local_38 == 3) {
        *(undefined1 *)(param_1 + 0x38) = 4;
      }
    }
    else if (local_38 == 6) {
      *(undefined1 *)(param_1 + 0x38) = 3;
    }
    else if (local_38 == 7) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    if (local_19 != '\0') {
      (**(code **)(*local_28 + -0x20))(local_28,1);
    }
    local_29 = *(char *)(param_1 + 0x38);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00414480(&local_48);
  return local_29;
}

