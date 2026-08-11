/* Ghidra address: 00706130 */
/* Ghidra symbol: FUN_00706130 */


void FUN_00706130(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(param_1);
  *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10) = uVar1;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

