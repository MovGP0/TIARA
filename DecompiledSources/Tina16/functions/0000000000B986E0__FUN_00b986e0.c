/* Ghidra address: 00b986e0 */
/* Ghidra symbol: FUN_00b986e0 */


undefined4 FUN_00b986e0(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res10[0] + param_3,param_4);
  FUN_00419430(local_res10,&DAT_00406578);
  return uVar1;
}

