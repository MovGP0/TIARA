/* Ghidra address: 006f5c70 */
/* Ghidra symbol: FUN_006f5c70 */


void FUN_006f5c70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_006efb70(*(undefined8 *)(param_1 + 0x4e0));
  FUN_006ef050(uVar1,local_res10[0]);
  FUN_006ef160(uVar1,param_3);
  FUN_00414480(local_res10);
  return;
}

