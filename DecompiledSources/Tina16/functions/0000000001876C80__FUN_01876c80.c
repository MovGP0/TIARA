/* Ghidra address: 01876c80 */
/* Ghidra symbol: FUN_01876c80 */


undefined4 FUN_01876c80(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                    (*(longlong **)(param_1 + 8),local_res10[0]);
  FUN_00414480(local_res10);
  return uVar1;
}

