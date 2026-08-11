/* Ghidra address: 00553b20 */
/* Ghidra symbol: FUN_00553b20 */


undefined8 FUN_00553b20(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_1[5] == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,local_20);
  }
  FUN_00546240(param_1,param_2);
  FUN_00419430(local_20,&DAT_0052f6a0);
  return param_2;
}

