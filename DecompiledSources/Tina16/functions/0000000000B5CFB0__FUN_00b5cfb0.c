/* Ghidra address: 00b5cfb0 */
/* Ghidra symbol: FUN_00b5cfb0 */


void FUN_00b5cfb0(longlong param_1)

{
  byte local_23;
  ushort local_22;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_a;
  
  local_18 = 0;
  local_20 = 0;
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_a);
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_22);
  FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_23);
  if ((local_23 & 1) == 1) {
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_18,(uint)local_22 * 2);
    FUN_00b15310(&local_20,local_18);
  }
  else {
    FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_18,local_22);
    FUN_00b15390(&local_20,local_18);
  }
  FUN_00b1f8d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),local_20,local_a);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_00414520(&local_20);
  FUN_004144d0(&local_18);
  return;
}

