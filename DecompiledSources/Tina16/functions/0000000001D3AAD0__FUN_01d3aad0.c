/* Ghidra address: 01d3aad0 */
/* Ghidra symbol: FUN_01d3aad0 */


void FUN_01d3aad0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined1 local_20;
  
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_01d3aa00(0,&PTR_FUN_01d353b8,&local_28);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

