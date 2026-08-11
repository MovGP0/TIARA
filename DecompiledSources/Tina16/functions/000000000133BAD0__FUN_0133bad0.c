/* Ghidra address: 0133bad0 */
/* Ghidra symbol: FUN_0133bad0 */


bool FUN_0133bad0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  uVar2 = _get_digital_node_values_as_str(*(undefined8 *)(param_1 + 0x708));
  FUN_00442b00(&local_10,uVar2);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x6f8),local_10);
  FUN_00414ad0(param_1 + 0x6f8,local_10);
  FUN_00414480(&local_10);
  return iVar1 != 0;
}

