/* Ghidra address: 00ea2f40 */
/* Ghidra symbol: FUN_00ea2f40 */


longlong * FUN_00ea2f40(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_98 [32];
  int local_78;
  int local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  int local_34;
  int local_30;
  longlong local_28;
  char local_19;
  int local_18;
  int local_14;
  undefined2 *local_10;
  
  local_50 = auStack_98;
  local_58 = 0;
  local_28 = 0;
  local_10 = (undefined2 *)0x0;
  FUN_0043e600(param_1,param_2);
  local_30 = 0;
  if (*param_1 != 0) {
    local_30 = *(int *)(*param_1 + -4);
  }
  FUN_00419260(&local_28,&DAT_004065c0,1,(longlong)local_30);
  local_19 = '\x01';
  local_18 = 0;
  local_34 = 0;
  if (*param_1 != 0) {
    local_34 = *(int *)(*param_1 + -4);
  }
  local_5c = local_34 + -1;
  local_14 = 0;
  if (-1 < local_5c) {
    local_5c = local_34;
    do {
      *(undefined2 *)(local_28 + (longlong)local_18 * 2) =
           *(undefined2 *)(*param_1 + (longlong)local_14 * 2);
      uVar1 = (ulonglong)*(ushort *)(*param_1 + (longlong)local_14 * 2);
      if (uVar1 < 0x40) {
        if (((uVar1 == 0x3f) || (uVar1 < 0x27)) ||
           ((uVar1 == 0x28 || ((uVar1 - 0x2a < 5 || (uVar1 - 0x2a == 0x12)))))) goto LAB_00ea3097;
LAB_00ea30a0:
        if ((local_19 != '\0') && (*(short *)(*param_1 + (longlong)local_14 * 2) != 0x27)) {
          FUN_00414480(&local_10);
          FUN_00416780(&local_58,*(undefined2 *)(*param_1 + (longlong)local_14 * 2));
          local_40 = local_58;
          FUN_0043e5a0(&local_10,local_58);
          *(undefined2 *)(local_28 + (longlong)local_18 * 2) = *local_10;
          FUN_00414480(&local_10);
          local_19 = '\0';
        }
      }
      else {
        if (((uVar1 != 0x5b) && (uVar1 != 0x7b)) && (uVar1 != 0xb7)) goto LAB_00ea30a0;
LAB_00ea3097:
        local_19 = '\x01';
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
  }
  local_48 = local_28;
  if (local_28 != 0) {
    local_48 = *(longlong *)(local_28 + -8);
  }
  local_78 = local_18;
  FUN_00456310(param_1,local_28,local_48 + -1,0);
  FUN_00414480(&local_58);
  FUN_00419430(&local_28,&DAT_004065c0);
  FUN_00414480(&local_10);
  return param_1;
}

