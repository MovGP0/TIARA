/* Ghidra address: 00b5d1f0 */
/* Ghidra symbol: FUN_00b5d1f0 */


void FUN_00b5d1f0(longlong param_1)

{
  byte bVar1;
  undefined4 local_30;
  short local_2a [5];
  
  FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_2a);
  bVar1 = 1;
  for (; local_2a[0] != 0; local_2a[0] = local_2a[0] + -1) {
    FUN_00b25710(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_30);
    if (bVar1 < 0x3b) {
      *(undefined4 *)(PTR_DAT_02002510 + (ulonglong)bVar1 * 4 + -4) = local_30;
    }
    bVar1 = bVar1 + 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

