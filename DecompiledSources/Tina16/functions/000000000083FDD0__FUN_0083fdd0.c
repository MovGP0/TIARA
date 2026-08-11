/* Ghidra address: 0083fdd0 */
/* Ghidra symbol: FUN_0083fdd0 */


longlong FUN_0083fdd0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_a0 [112];
  undefined8 local_30;
  
  FUN_00841d10(param_1,local_a0);
  local_30 = FUN_008417f0(param_1,param_2,param_3,local_a0);
  if ((int)local_30 < 0) {
    local_30 = CONCAT44(0xffffffff,(int)local_30);
  }
  else if (local_30 < 0) {
    local_30 = 0xffffffff;
  }
  return local_30;
}

