/* Ghidra address: 00cdb700 */
/* Ghidra symbol: FUN_00cdb700 */


undefined8 FUN_00cdb700(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_20 = auStack_48;
    local_10 = FUN_00882aa0(param_1,1,0);
    FUN_00cdb0d0(local_10,param_2,param_3,param_4);
    FUN_00410f20(local_10);
  }
  return param_2;
}

