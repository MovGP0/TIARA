/* Ghidra address: 004b9700 */
/* Ghidra symbol: FUN_004b9700 */


int FUN_004b9700(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  local_c = FUN_00440670(*(undefined8 *)(param_1 + 8),local_res10,param_3,param_4);
  if (local_c == -1) {
    local_c = 0;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return local_c;
}

