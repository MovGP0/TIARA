/* Ghidra address: 00cbbcc0 */
/* Ghidra symbol: FUN_00cbbcc0 */


void FUN_00cbbcc0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = FUN_00cbaf90(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))(*(longlong **)(param_1 + 0x30),&local_20);
  uVar2 = FUN_00cbbf00(&PTR_FUN_00cbb848,1,uVar1,local_20);
  FUN_004134c0(uVar2);
  FUN_00414480(&local_20);
  return;
}

