/* Ghidra address: 01c27780 */
/* Ghidra symbol: FUN_01c27780 */


bool FUN_01c27780(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  bool local_19;
  short *local_10;
  
  local_10 = (short *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_19 = local_res10[0] == 0;
  if (!local_19) {
    FUN_01c276f0(&local_10,local_res10[0]);
    if (((local_10 == (short *)0x0) || (*local_10 == 0x2a)) || (*local_10 == 0x3b)) {
      local_19 = true;
    }
    else {
      local_19 = false;
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_19;
}

