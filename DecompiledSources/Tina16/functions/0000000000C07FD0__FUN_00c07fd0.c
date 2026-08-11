/* Ghidra address: 00c07fd0 */
/* Ghidra symbol: FUN_00c07fd0 */


void FUN_00c07fd0(longlong param_1,undefined2 param_2,undefined2 param_3,undefined8 param_4)

{
  undefined2 local_res10 [4];
  undefined2 local_res18 [8];
  
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    (**(code **)(param_1 + 0x6a0))
              (*(undefined8 *)(param_1 + 0x6a8),param_1,local_res10,local_res18,param_4);
  }
  return;
}

