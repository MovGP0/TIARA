/* Ghidra address: 018c21b0 */
/* Ghidra symbol: FUN_018c21b0 */


void FUN_018c21b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0xb0);
  if (lVar1 != 0) {
    FUN_019781d0(*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x20),lVar1,
                 *(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x208),0,param_1 + 0x163
                );
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xb0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xb8) = 0;
  FUN_00414480(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x20) + 0x210) + 0xf0);
  FUN_0064dfb0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x20) + 0x210),0);
  return;
}

