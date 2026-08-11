/* Ghidra address: 00f31420 */
/* Ghidra symbol: FUN_00f31420 */


undefined4
FUN_00f31420(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined1 auStack_58 [32];
  int local_38;
  undefined1 local_30;
  undefined1 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = auStack_58;
  if (((param_2 == 0) || (param_3 < 0)) || (param_4 <= param_3)) {
    local_14 = 0xffffffff;
  }
  else {
    local_30 = 1;
    local_38 = param_4;
    local_10 = FUN_00f2d4e0(&DAT_00f220b0,1,param_2,param_3);
    local_14 = FUN_00f314e0(param_1,local_10,param_5);
    FUN_00410f20(local_10);
  }
  return local_14;
}

