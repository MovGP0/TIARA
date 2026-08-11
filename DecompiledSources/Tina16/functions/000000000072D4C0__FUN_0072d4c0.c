/* Ghidra address: 0072d4c0 */
/* Ghidra symbol: FUN_0072d4c0 */


undefined4
FUN_0072d4c0(longlong *param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  FUN_0064cf60(param_1,param_2);
  FUN_00414ad0(param_1 + 0x9d,param_5);
  if (-1 < param_3) {
    FUN_00806af0(param_1,param_3);
  }
  if (-1 < param_4) {
    FUN_00806b40(param_1,param_4);
  }
  if ((param_4 < 0) && (param_3 < 0)) {
    FUN_00800470(param_1,4);
  }
  local_c = (**(code **)(*param_1 + 0x2d0))(param_1);
  FUN_00410f20(param_1);
  return local_c;
}

