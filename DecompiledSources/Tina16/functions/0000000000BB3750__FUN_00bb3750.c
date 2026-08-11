/* Ghidra address: 00bb3750 */
/* Ghidra symbol: FUN_00bb3750 */


undefined8 FUN_00bb3750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  FUN_00bb3000(param_1,local_20);
  if (local_20[0] == (longlong *)0x0) {
    lVar1 = FUN_00badb60(&DAT_00ba1a00,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x38;
    }
    FUN_0041b840(param_2,lVar1);
  }
  else {
    (**(code **)(*local_20[0] + 0x130))(local_20[0],param_2,param_3);
  }
  FUN_0041b800(local_20);
  return param_2;
}

