/* Ghidra address: 01ba2af0 */
/* Ghidra symbol: FUN_01ba2af0 */


void FUN_01ba2af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01ba11e0(local_res10[0],local_10,local_18);
  FUN_01ba29e0(param_1,&local_20,local_10,local_18);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

