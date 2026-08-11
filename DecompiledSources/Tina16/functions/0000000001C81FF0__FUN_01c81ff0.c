/* Ghidra address: 01c81ff0 */
/* Ghidra symbol: FUN_01c81ff0 */


undefined4 FUN_01c81ff0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_01c81f40(param_1,local_20,param_2);
  uVar1 = FUN_0043fc50(local_20[0],0);
  local_c = CONCAT22(local_c._2_2_,uVar1);
  FUN_01c81f40(param_1,&local_28,param_2);
  uVar1 = FUN_0043fc50(local_28,0);
  local_c = CONCAT22(uVar1,(undefined2)local_c);
  FUN_00414560(&local_28,2);
  return local_c;
}

