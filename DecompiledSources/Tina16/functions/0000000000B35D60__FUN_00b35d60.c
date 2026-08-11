/* Ghidra address: 00b35d60 */
/* Ghidra symbol: FUN_00b35d60 */


longlong * FUN_00b35d60(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res18 [2];
  undefined1 auStack_58 [32];
  undefined2 local_38;
  longlong local_30;
  undefined1 *local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = auStack_58;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_004144d0(param_2);
  if (local_res18[0] != 0) {
    local_38 = 0;
    local_30 = local_res18[0];
    local_c = FUN_00b31150(*(undefined8 *)(param_1 + 0xa0),*(undefined2 *)(param_1 + 0xa8),
                           *(undefined2 *)(param_1 + 0x66),*(undefined1 *)(param_1 + 0x65));
    if (local_c == 0) {
      FUN_00414bf0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x20));
    }
    if ((local_c != 0) && (*(char *)(param_1 + 0xb0) != '\0')) {
      uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xd);
      FUN_004134c0(uVar2);
    }
    if (*(char *)(**(longlong **)(param_1 + 0x98) + 8) == '\x04') {
      if ((*param_2 != 0) && (*(char *)*param_2 == '\"')) {
        local_10 = 0;
        if (*param_2 != 0) {
          local_10 = *(int *)(*param_2 + -4);
        }
        FUN_00415ad0(param_2,*param_2,2,local_10 + -1);
      }
      if (*param_2 != 0) {
        local_14 = 0;
        lVar1 = *param_2;
        if (lVar1 != 0) {
          local_14 = *(int *)(lVar1 + -4);
        }
        if (*(char *)(*param_2 + -1 + (longlong)local_14) == '\"') {
          local_18 = 0;
          if (lVar1 != 0) {
            local_18 = *(int *)(lVar1 + -4);
          }
          FUN_00415ad0(param_2,*param_2,1,local_18 + -1);
        }
      }
    }
  }
  FUN_004144d0(local_res18);
  return param_2;
}

