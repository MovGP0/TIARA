/* Ghidra address: 0140a6a0 */
/* Ghidra symbol: FUN_0140a6a0 */


void FUN_0140a6a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *local_20 [2];
  
  (**(code **)(*param_1 + 0x2d0))(param_1,0,local_20);
  *local_20[0] = 0x3e112e0be826d695;
  (**(code **)(*param_1 + 0x2d0))(param_1,1,local_20);
  FUN_00b95290(local_20[0][1]);
  uVar1 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
  local_20[0][1] = uVar1;
  return;
}

