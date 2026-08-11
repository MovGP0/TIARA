/* Ghidra address: 00d01de0 */
/* Ghidra symbol: FUN_00d01de0 */


void FUN_00d01de0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10 [3];
  undefined1 local_18 [8];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x170))
            (param_1,&DAT_00d01e88,local_res10[0],param_3,param_4,local_18,0xffffffff);
  FUN_00414480(local_res10);
  return;
}

