/* Ghidra address: 0133bb70 */
/* Ghidra symbol: FUN_0133bb70 */


void FUN_0133bb70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = _get_digital_node_values_as_str(*(undefined8 *)(param_1 + 0x708));
  FUN_00442b00(&local_10,uVar1);
  FUN_00414ad0(param_1 + 0x6f8,local_10);
  FUN_00414480(&local_10);
  return;
}

