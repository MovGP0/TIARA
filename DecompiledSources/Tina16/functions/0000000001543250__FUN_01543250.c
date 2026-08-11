/* Ghidra address: 01543250 */
/* Ghidra symbol: FUN_01543250 */


void FUN_01543250(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = FUN_01d03160(plVar1);
  (**(code **)(*plVar1 + 0x288))(plVar1,&local_20);
  FUN_0153dc10(local_res10[0]);
  FUN_0153dc10(local_20);
  FUN_01d43440(local_30,uVar2);
  FUN_0153dc10(local_30[0]);
  FUN_0153dc10(0);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

