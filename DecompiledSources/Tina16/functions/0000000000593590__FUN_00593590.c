/* Ghidra address: 00593590 */
/* Ghidra symbol: FUN_00593590 */


undefined4 FUN_00593590(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = FUN_00525420(local_res10,*(undefined4 *)(param_1 + 0x14),0);
  FUN_004185e0(local_res10,*(undefined8 *)(param_1 + 8));
  return uVar1;
}

