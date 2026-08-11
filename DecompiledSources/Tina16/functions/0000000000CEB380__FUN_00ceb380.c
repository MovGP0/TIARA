/* Ghidra address: 00ceb380 */
/* Ghidra symbol: FUN_00ceb380 */


void FUN_00ceb380(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00882a80(param_1);
  uVar1 = FUN_00ceb1c0(&PTR_FUN_00ceac80,1,param_1);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  return;
}

