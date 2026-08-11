/* Ghidra address: 008b8360 */
/* Ghidra symbol: FUN_008b8360 */


void FUN_008b8360(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_30 [2];
  
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  if (param_1[1] == 0) {
    lVar1 = FUN_008b96c0(&PTR_FUN_008b53f0,1);
    param_1[1] = lVar1;
  }
  local_30[0] = param_2;
  FUN_00597e50(param_1[1] + 8,local_30);
  *(longlong **)(param_2 + 0x10) = param_1;
  return;
}

