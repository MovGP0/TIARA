/* Ghidra address: 00af8f90 */
/* Ghidra symbol: FUN_00af8f90 */


bool FUN_00af8f90(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  bool local_21;
  undefined8 local_20 [2];
  int local_c;
  
  local_20[0] = 0;
  if (**(char **)(param_1 + 0x78) == '\x01') {
    local_21 = 0 < param_2;
  }
  else {
    FUN_00467e90(local_20,*(longlong *)(param_1 + 0x78) + 8);
    cVar1 = FUN_0043fc80(local_20[0],&local_c);
    if ((((cVar1 == '\0') || (local_c < 0)) || (param_3 < local_c)) ||
       (cVar1 = FUN_00af8f40(param_1,param_2,local_c), cVar1 == '\0')) {
      local_21 = false;
    }
    else {
      local_21 = true;
    }
  }
  FUN_00414480(local_20);
  return local_21;
}

