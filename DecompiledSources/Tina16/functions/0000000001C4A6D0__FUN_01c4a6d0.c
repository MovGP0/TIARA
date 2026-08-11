/* Ghidra address: 01c4a6d0 */
/* Ghidra symbol: FUN_01c4a6d0 */


void FUN_01c4a6d0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6b8),0);
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))(*(longlong **)(param_1 + 0x788),0);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x798) = uVar1;
  FUN_01c4b500(param_1);
  return;
}

