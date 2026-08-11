/* Ghidra address: 01c00d40 */
/* Ghidra symbol: FUN_01c00d40 */


undefined8 FUN_01c00d40(longlong *param_1,undefined8 param_2)

{
  undefined8 local_30 [2];
  
  local_30[0] = (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
  if (param_1[0x9b] != 0) {
    (*(code *)param_1[0x9b])(param_1[0x9c],param_1,param_2,local_30);
  }
  return local_30[0];
}

