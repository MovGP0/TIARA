/* Ghidra address: 00b60090 */
/* Ghidra symbol: FUN_00b60090 */


void FUN_00b60090(longlong param_1)

{
  longlong lVar1;
  undefined2 local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined1 *)(lVar1 + 0x87) = (undefined1)local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined2 *)(lVar1 + 0x85) = local_1a[0];
  FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),6);
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

