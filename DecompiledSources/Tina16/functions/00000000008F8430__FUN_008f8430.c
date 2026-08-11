/* Ghidra address: 008f8430 */
/* Ghidra symbol: FUN_008f8430 */


undefined4 FUN_008f8430(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_res10[0],0);
  FUN_00414520(local_res10);
  return uVar1;
}

