/* Ghidra address: 00cdb790 */
/* Ghidra symbol: FUN_00cdb790 */


void FUN_00cdb790(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (param_2 != 0) {
    local_10 = FUN_00882aa0(param_1,1,0);
    FUN_00cdb1d0(local_10,param_2,param_3,param_4);
    FUN_00410f20(local_10);
  }
  return;
}

