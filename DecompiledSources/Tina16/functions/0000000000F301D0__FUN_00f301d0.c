/* Ghidra address: 00f301d0 */
/* Ghidra symbol: FUN_00f301d0 */


void FUN_00f301d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))(*(longlong **)(param_1 + 0x10));
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))(*(longlong **)(param_1 + 0x18));
  FUN_00f2fcf0(&LAB_00f233a8,1,uVar1,uVar2);
  return;
}

