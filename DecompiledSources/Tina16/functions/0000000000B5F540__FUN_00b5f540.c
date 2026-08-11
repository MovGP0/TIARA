/* Ghidra address: 00b5f540 */
/* Ghidra symbol: FUN_00b5f540 */


void FUN_00b5f540(longlong param_1)

{
  longlong lVar1;
  short local_1a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_1a);
  if (local_1a[0] == 1) {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x6b) = 1;
  }
  else {
    lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                         *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x6b) = 0;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

