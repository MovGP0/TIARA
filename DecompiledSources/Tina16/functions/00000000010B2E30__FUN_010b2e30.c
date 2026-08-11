/* Ghidra address: 010b2e30 */
/* Ghidra symbol: FUN_010b2e30 */


void FUN_010b2e30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_010af430(&DAT_010a8e80,1,local_res10[0]);
  FUN_010af5b0(uVar1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar1);
  FUN_00414480(local_res10);
  return;
}

