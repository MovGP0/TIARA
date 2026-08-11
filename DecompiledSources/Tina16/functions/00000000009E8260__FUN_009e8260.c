/* Ghidra address: 009e8260 */
/* Ghidra symbol: FUN_009e8260 */


undefined8 FUN_009e8260(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_24 = (**(code **)(*param_1 + 0xb8))(param_1,param_3);
  if (local_24 < 0) {
    FUN_00414520(param_2);
  }
  else {
    local_20[0] = 0;
    (**(code **)(*param_1 + 0x18))(param_1,local_20,local_24);
    local_28 = 0;
    if (param_3 != 0) {
      local_28 = *(uint *)(param_3 + -4) >> 1;
    }
    FUN_00416430(param_2,local_20[0],local_28 + 2,0x7fffffff);
    FUN_00414520(local_20);
  }
  return param_2;
}

