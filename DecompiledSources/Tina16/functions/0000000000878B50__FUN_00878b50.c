/* Ghidra address: 00878b50 */
/* Ghidra symbol: FUN_00878b50 */


undefined4 FUN_00878b50(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  if (param_3 < 1) {
    local_24 = 0;
    local_30 = auStack_58;
  }
  else {
    FUN_00419430(local_20,&DAT_0086e978);
    FUN_00419260(local_20,&DAT_0086e978,1,(longlong)param_3);
    if (0 < param_3) {
      FUN_00409a70(param_2,local_20[0],(longlong)param_3);
    }
    local_24 = (**(code **)(*param_1 + 0x60))(param_1,local_20[0],0,param_3);
    FUN_00419430(local_20,&DAT_0086e978);
  }
  FUN_00419430(local_20,&DAT_0086e978);
  return local_24;
}

