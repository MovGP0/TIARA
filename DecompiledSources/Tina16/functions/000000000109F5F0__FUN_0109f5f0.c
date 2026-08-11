/* Ghidra address: 0109f5f0 */
/* Ghidra symbol: FUN_0109f5f0 */


void FUN_0109f5f0(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(PTR_DAT_020030c0 + 0x18) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(PTR_DAT_020030c0 + 0x1c) = *(undefined4 *)(param_1 + 0x9c);
  uVar1 = FUN_007fd7d0(param_1);
  *(undefined4 *)(PTR_DAT_020030c0 + 0x20) = uVar1;
  uVar1 = FUN_007fd800(param_1);
  *(undefined4 *)(PTR_DAT_020030c0 + 0x24) = uVar1;
  *(undefined4 *)(PTR_DAT_020030c0 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 0x820) + 0x9c);
  return;
}

