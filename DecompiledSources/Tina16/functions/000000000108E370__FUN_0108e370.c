/* Ghidra address: 0108e370 */
/* Ghidra symbol: FUN_0108e370 */


void FUN_0108e370(longlong param_1,longlong *param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00414b50(&local_18,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0xac8) + 0x10));
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 400));
  (**(code **)(*param_2 + 0x78))(param_2,local_10);
  FUN_00414560(&local_18,2);
  return;
}

