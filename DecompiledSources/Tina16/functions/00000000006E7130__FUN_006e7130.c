/* Ghidra address: 006e7130 */
/* Ghidra symbol: FUN_006e7130 */


void FUN_006e7130(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined1 local_62 [90];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_006e6d80(param_1,local_7c);
  local_78 = 0x20000000;
  FUN_00442660(local_62,local_res10[0],0x1f);
  FUN_006e6f00(param_1,local_7c);
  FUN_00414480(local_res10);
  return;
}

