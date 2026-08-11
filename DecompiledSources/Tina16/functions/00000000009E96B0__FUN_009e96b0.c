/* Ghidra address: 009e96b0 */
/* Ghidra symbol: FUN_009e96b0 */


undefined8 FUN_009e96b0(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  uint local_2c;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20[0] = 0;
  if (param_3 < 0) {
    FUN_00414520(param_2);
  }
  else {
    local_20[0] = 0;
    local_40 = auStack_68;
    (**(code **)(*param_1 + 0x18))(param_1,local_20,param_3);
    FUN_009e7fb0(param_1,&local_48,param_3);
    local_28 = local_48;
    local_2c = 0;
    if (local_48 != 0) {
      local_2c = *(uint *)(local_48 + -4) >> 1;
    }
    FUN_00416430(param_2,local_20[0],local_2c + 2,0x7fffffff);
    FUN_00414520(local_20);
  }
  FUN_00414520(&local_48);
  return param_2;
}

