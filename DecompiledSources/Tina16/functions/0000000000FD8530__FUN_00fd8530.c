/* Ghidra address: 00fd8530 */
/* Ghidra symbol: FUN_00fd8530 */


void FUN_00fd8530(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  uVar1 = FUN_00fd81c0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x6fc) = uVar1;
  FUN_00fd8220(param_1,uVar1,0);
  return;
}

