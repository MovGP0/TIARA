/* Ghidra address: 0041d4c0 */
/* Ghidra symbol: FUN_0041d4c0 */


void FUN_0041d4c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  uVar1 = FUN_0041d480(param_1);
  uVar2 = FUN_00411420(local_res10[0],&DAT_00401a88);
  FUN_0041d3d0(uVar1,uVar2);
  *param_1 = local_res10[0];
  FUN_0041b800(local_res10);
  return;
}

