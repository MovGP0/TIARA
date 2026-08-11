/* Ghidra address: 015bf040 */
/* Ghidra symbol: FUN_015bf040 */


longlong * FUN_015bf040(longlong *param_1,undefined8 param_2)

{
  int local_c;
  
  FUN_00414ad0(param_1,param_2);
  local_c = 0;
  if (*param_1 != 0) {
    local_c = *(int *)(*param_1 + -4);
  }
  if (*(short *)(*param_1 + -2 + (longlong)local_c * 2) != 0x5c) {
    FUN_00416ad0(param_1,&LAB_015bf0b4);
  }
  return param_1;
}

