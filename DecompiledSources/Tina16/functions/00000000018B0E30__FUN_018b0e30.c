/* Ghidra address: 018b0e30 */
/* Ghidra symbol: FUN_018b0e30 */


void FUN_018b0e30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x798));
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  FUN_007e34c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x798) + 0x80),
               *(undefined8 *)(param_1 + 0x68));
  FUN_007e2c60(*(undefined8 *)(param_1 + 0x68),&LAB_018b0ea0);
  return;
}

