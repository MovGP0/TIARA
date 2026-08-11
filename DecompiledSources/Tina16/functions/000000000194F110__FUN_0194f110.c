/* Ghidra address: 0194f110 */
/* Ghidra symbol: FUN_0194f110 */


void FUN_0194f110(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))(*(undefined8 *)(param_2 + 0x30));
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  return;
}

