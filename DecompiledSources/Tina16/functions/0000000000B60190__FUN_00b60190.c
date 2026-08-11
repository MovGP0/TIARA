/* Ghidra address: 00b60190 */
/* Ghidra symbol: FUN_00b60190 */


void FUN_00b60190(longlong param_1)

{
  longlong lVar1;
  ushort local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(bool *)(lVar1 + 0x81) = (local_1a[0] & 2) != 0;
  *(bool *)(lVar1 + 0x83) = (local_1a[0] & 4) != 0;
  *(bool *)(lVar1 + 0x84) = (local_1a[0] & 0x10) != 0;
  *(bool *)(lVar1 + 0x82) = (local_1a[0] & 0x40) != 0;
  *(bool *)(lVar1 + 0x8a) = (local_1a[0] & 0x800) != 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

