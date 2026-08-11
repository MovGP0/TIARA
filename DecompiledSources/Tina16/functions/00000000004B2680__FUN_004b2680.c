/* Ghidra address: 004b2680 */
/* Ghidra symbol: FUN_004b2680 */


void FUN_004b2680(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_3 == '\x01') {
    (**(code **)(*param_1 + 0x18))(param_1,local_res10);
  }
  else if (param_3 == '\x04') {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  return;
}

