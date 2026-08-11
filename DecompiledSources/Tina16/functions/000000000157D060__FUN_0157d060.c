/* Ghidra address: 0157d060 */
/* Ghidra symbol: FUN_0157d060 */


undefined4 FUN_0157d060(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),local_res10[0],param_3,param_4);
  FUN_00419430(local_res10,&DAT_00406578);
  return uVar1;
}

