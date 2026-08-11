/* Ghidra address: 0084ecb0 */
/* Ghidra symbol: FUN_0084ecb0 */


void FUN_0084ecb0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
  *(undefined4 *)(param_1 + 0xa3) = uVar1;
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  return;
}

