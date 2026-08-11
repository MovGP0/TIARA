/* Ghidra address: 00b5f190 */
/* Ghidra symbol: FUN_00b5f190 */


void FUN_00b5f190(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  ushort local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x28) = (undefined1)local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(ushort *)(*(longlong *)(lVar1 + 0x40) + 0x2a) = local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(ushort *)(*(longlong *)(lVar1 + 0x40) + 0x2c) = local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(ushort *)(*(longlong *)(lVar1 + 0x40) + 0x2e) = local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(ushort *)(*(longlong *)(lVar1 + 0x40) + 0x30) = local_1a[0];
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  if ((local_1a[0] & 1) == 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x32) = 0;
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x32) = 1;
  }
  if ((local_1a[0] & 2) == 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x33) = 0;
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x33) = 1;
  }
  if ((local_1a[0] & 8) == 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x68) = 0;
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x68) = 1;
  }
  if ((local_1a[0] & 0x10) == 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x69) = 0;
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x69) = 1;
  }
  if ((local_1a[0] & 0x80) == 0) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined2 *)(*(longlong *)(lVar1 + 0x40) + 0x2c) = 0xffff;
  }
  FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),4);
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,8);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x38) = local_28;
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,8);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x40) = local_28;
  FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),2);
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

