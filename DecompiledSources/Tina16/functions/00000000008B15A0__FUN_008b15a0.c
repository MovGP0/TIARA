/* Ghidra address: 008b15a0 */
/* Ghidra symbol: FUN_008b15a0 */


undefined8
FUN_008b15a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_008b1530(param_1,local_20,param_3,param_4,param_5);
  (**(code **)(*param_1 + 8))(param_1,param_2,local_20[0]);
  FUN_00419430(local_20,&DAT_0086e978);
  return param_2;
}

