/* Ghidra address: 00419fe0 */
/* Ghidra symbol: FUN_00419fe0 */


int FUN_00419fe0(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_c = 0;
  if (local_res10[0] != 0) {
    local_c = *(int *)(local_res10[0] + -4);
  }
  if (0 < local_c) {
    do {
      if (*(short *)(local_res10[0] + -2 + (longlong)local_c * 2) == 0x2d) {
        local_c = local_c + -1;
        goto LAB_0041a02e;
      }
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  local_c = 0;
LAB_0041a02e:
  FUN_00414480(local_res10);
  return local_c;
}

