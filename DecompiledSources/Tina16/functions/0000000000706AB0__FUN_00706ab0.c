/* Ghidra address: 00706ab0 */
/* Ghidra symbol: FUN_00706ab0 */


void FUN_00706ab0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_006efb70(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x4e0));
  FUN_006ef370(uVar1,0,param_3);
  FUN_006ef050(uVar1,local_res10[0]);
  FUN_006ef160(uVar1,param_4);
  FUN_00414480(local_res10);
  return;
}

