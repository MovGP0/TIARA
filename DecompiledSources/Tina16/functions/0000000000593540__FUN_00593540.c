/* Ghidra address: 00593540 */
/* Ghidra symbol: FUN_00593540 */


undefined4 FUN_00593540(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  uVar1 = FUN_0043e2c0(local_res10,local_res18,*(undefined4 *)(param_1 + 0x14));
  FUN_004185e0(local_res10,*(undefined8 *)(param_1 + 8));
  FUN_004185e0(local_res18,*(undefined8 *)(param_1 + 8));
  return uVar1;
}

