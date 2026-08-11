/* Ghidra address: 005eeb90 */
/* Ghidra symbol: FUN_005eeb90 */


void FUN_005eeb90(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (param_4 == '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  }
  else {
    local_30 = auStack_58;
    FUN_004b3260(param_3);
    local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_005ee970(auStack_58,0,param_2);
    FUN_00410f20(local_20);
    FUN_004b3390(param_3);
  }
  return;
}

