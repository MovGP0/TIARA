/* Ghidra address: 015cda20 */
/* Ghidra symbol: FUN_015cda20 */


undefined4 FUN_015cda20(undefined8 param_1,byte param_2)

{
  undefined4 local_c;
  
  local_c = 0;
  if (param_2 < 3) {
    if (param_2 == 2) {
      local_c = 0x20;
    }
    else if (param_2 == 0) {
      local_c = 0;
    }
    else if (param_2 == 1) {
      local_c = 0x10;
    }
  }
  else if (param_2 == 3) {
    local_c = 0x30;
  }
  else if (param_2 == 4) {
    local_c = 0x40;
  }
  return local_c;
}

