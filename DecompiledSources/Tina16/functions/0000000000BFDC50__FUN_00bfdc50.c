/* Ghidra address: 00bfdc50 */
/* Ghidra symbol: FUN_00bfdc50 */


void FUN_00bfdc50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0xa8))(*(longlong **)(param_1 + 0x4e8));
    *(undefined8 *)(param_1 + 0x2c0) = uVar1;
  }
  FUN_00659db0(param_1,param_2);
  return;
}

