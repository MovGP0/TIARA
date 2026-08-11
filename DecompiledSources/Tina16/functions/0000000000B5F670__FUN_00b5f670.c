/* Ghidra address: 00b5f670 */
/* Ghidra symbol: FUN_00b5f670 */


void FUN_00b5f670(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  FUN_00b25770(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_20,8);
  lVar1 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x40));
  *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x50) = local_20[0];
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

