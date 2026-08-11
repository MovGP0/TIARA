/* Ghidra address: 015bf0c0 */
/* Ghidra symbol: FUN_015bf0c0 */


longlong * FUN_015bf0c0(longlong *param_1,undefined8 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00414ad0(param_1,param_2);
  local_c = 0;
  if (*param_1 != 0) {
    local_c = *(int *)(*param_1 + -4);
  }
  if (*(short *)(*param_1 + -2 + (longlong)local_c * 2) == 0x5c) {
    local_10 = 0;
    if (*param_1 != 0) {
      local_10 = *(int *)(*param_1 + -4);
    }
    FUN_004169f0(param_1,local_10 + -1);
  }
  return param_1;
}

